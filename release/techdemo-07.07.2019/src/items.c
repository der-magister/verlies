//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2019 Heiko Wolf
//
//   This program is free software; you can redistribute it and/or modify
//   it under the terms of the GNU General Public License As published by
//   the Free Software Foundation; either version 2 of the License, or
//   (at your option) any later version.
//
//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY Or FITNESS For A PARTICULAR PURPOSE.  See the
//   GNU General Public License For more details.
//
//   You should have received a copy of the GNU General Public License along
//   With this program; if not, write to the Free Software Foundation, Inc.,
//   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
//   Kontakt: magister@kabelmail.de

#pragma bank=12

#include "items.h"
#include "hud.h"
#include "engine.h"
#include "tiledat.h"
#include "player.h"

UINT8 v_selectItem;
UINT8 v_itemlooptime;
UINT8 v_imk;
UINT8 v_ixk;
UINT8 v_iyk;

void p_drawSelectItem () BANKED
{
        if (v_selectItem == 0) {v_tile [0] = 1; }
        if (v_selectItem == 1) { v_tile [0] = 62; } //Heiltrank
        if (v_selectItem == 2) { v_tile [0] = 61; } //Ausdauertrank
        if (v_selectItem == 4) v_tile [0] = 51; //spitzhacke

        set_bkg_tiles (9, 16, 1, 1, v_tile); 
}


void p_calc_mapK () BANKED
{
        v_imk = ((v_ixk - 16) / 8) + 18 * ((v_iyk - 24) / 8); 
}

///Itemauswahl
void p_changeItem () BANKED
{
        //Null
        if (v_selectItem == 0)
        {
                if (v_sht != 0) v_selectItem = 1;
                else if (v_sat != 0) v_selectItem = 2;
                else if (v_spitzhacke == TRUE) v_selectItem = 4;
                else v_selectItem = 0;
        }
        //heiltrank
        else if (v_selectItem == 1)
        {
        if (v_sat != 0) v_selectItem = 2;
        else if (v_spitzhacke == TRUE) v_selectItem = 4;
        else v_selectItem = 0;
        }
        //ausdauertrank
        else if (v_selectItem == 2)
        {       
                if (v_spitzhacke == TRUE) v_selectItem = 4;
                if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0;
        }
        else if (v_selectItem == 4)
        {
                if (v_sht != 0) v_selectItem = 1;
                else if (v_sat != 0) v_selectItem = 2;
                else v_selectItem = 0;
        }
        p_drawSelectItem ();
        delay (150);
}

/*void p_useSelectItem () BANKED
{
  if (v_selectItem == 1) { p_heiltrank (); }
}*/

///Anwendung des Proviant (automatisch)
void p_proviant () BANKED
{
  if (v_ssc >= 250)
  {
    if (v_spr > 0)
    {
      --v_spr; v_ssc = 0;
    }
    else
    {
      --v_slp; v_ssc = 125;
      p_hud_showLP ();
    }
    p_hud_showPR ();
  }
}

///Heiltrank, füllt 3 Lebenspunkte auf
void  p_use_heiltrank () BANKED
{
        if (v_keyflag == 2)
        {
                if ((v_sht > 0) && (v_slp < v_smlp))
                {     
                        --v_sht;
        
                if (v_slp + 3 <= v_smlp)
                {
                        v_slp = v_slp + 3;
                }
                else 
                {
                        v_slp = v_smlp;
                }
                        p_spieler_setSprite (3);
                        delay (1000);
                        p_spieler_setSprite (1);
                        
                        if (v_sht == 0) { v_selectItem = 0;  p_drawSelectItem (); } 
                        p_hud_show ();
                }
        }
}

///Benutzung Ausdauertrank
void  p_use_ausdauertrank () BANKED
{
        if (v_keyflag == 2)
        {
                if ((v_sat > 0) && (v_saus < v_smaus))
                {     
                        --v_sat;
        
                        v_saus = v_smaus;

                        p_spieler_setSprite (3);
                        delay (1000);
                        p_spieler_setSprite (1);
                        
                        if (v_sat == 0) { v_selectItem = 0;  p_drawSelectItem (); } 
                        p_hud_show ();
                }
        }
}

void p_select_spitzhacke () BANKED
{
        set_sprite_tile (9, 104);
        set_sprite_tile (10, 105);
        set_sprite_tile (11, 106);
        set_sprite_tile (12, 107);
}

///
void p_use_spitzhacke () BANKED
{
        if (v_keyflag == 2)
        {
                if ((v_sri == MOVE_NORTH) && (v_saus != 0))
                {
                        v_ixk = v_sxk; v_iyk = v_syk - 16;
                        move_sprite (9, v_sxk, v_syk - 16);
                        move_sprite (10, v_sxk, v_syk - 8);
                        move_sprite (11, v_sxk + 8, v_syk - 16);
                        move_sprite (12, v_sxk + 8, v_syk - 8);
                        v_itemlooptime = 0;  v_sused = TRUE; --v_saus;
                        p_calc_mapK ();
                
                }
                //Süd
                else if ((v_sri == MOVE_SOUTH) && (v_saus != 0))
                {
                        v_ixk = v_sxk; v_iyk = v_syk + 16;
                        move_sprite (9, v_sxk, v_syk + 16);		
                        move_sprite (10, v_sxk, v_syk + 24);		
                        move_sprite (11, v_sxk + 8, v_syk + 16);             
                        move_sprite (12, v_sxk + 8, v_syk + 24);
                        v_itemlooptime = 0;  v_sused = TRUE; --v_saus;
                        p_calc_mapK ();
                }
                //West
                if ((v_sri == MOVE_WEST) && (v_saus != 0))
                {
                        v_ixk = v_sxk - 16; v_iyk = v_syk;
                        move_sprite (9, v_sxk - 16, v_syk);
                        move_sprite (10, v_sxk - 16, v_syk + 8);
                        move_sprite (11, v_sxk - 8, v_syk);
                        move_sprite (12, v_sxk - 8, v_syk + 8);
                        v_itemlooptime = 0;  v_sused = TRUE; --v_saus;
                        p_calc_mapK ();
                }
                //Ost
                if ((v_sri == 4) && (v_saus != 0))
                {
                        v_ixk = v_sxk + 16; v_iyk = v_syk;
                        move_sprite (9, v_sxk + 16, v_syk);
                        move_sprite (10, v_sxk + 16, v_syk + 8);
                        move_sprite (11, v_sxk + 24, v_syk);
                        move_sprite (12, v_sxk + 24, v_syk + 8);
                        v_itemlooptime = 0; v_sused = TRUE; --v_saus;
                        p_calc_mapK ();
                }
                p_hud_showAD ();
        }
}

///
void p_hide_spitzhacke () BANKED
{
        move_sprite (9, 0, 0);
        move_sprite (10, 0, 0);
        move_sprite (11, 0, 0);
        move_sprite (12, 0, 0);
}
