//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2020 Heiko Wolf
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

//#pragma bank=12

#include "items.h"
#include "hud.h"
#include "engine.h"
#include "tiledat.h"
#include "player.h"
#include "other.h"

void p_items_init (void) BANKED
{
        v_selectItem == 0;
}

void p_drawSelectItem (void) __banked
{
        if (v_selectItem == 0) {v_tile [0] = 127; }
        else if (v_selectItem == 1) { v_tile [0] = 62; } //Heiltrank
        else if (v_selectItem == 2) { v_tile [0] = 61; } //Ausdauertrank
        else if (v_selectItem == 4) { v_tile [0] = 51; } //spitzhacke
        else if (v_selectItem == 5) { v_tile [0] = 50; } //Sichel
        else if (v_selectItem == 6) { v_tile [0] = 60; } //Kraut
        else if (v_selectItem == 7) { v_tile [0] = 48; } //Schaufel
        else if (v_selectItem == 8) { v_tile [0] = 49; } //Portalrune

        set_bkg_tiles (9, 16, 1, 1, v_tile); 
}

///Berechnung der Kartenposition bestimmter Items (Spitzhacke, Sichel, Schaufel)
void p_calc_mapK () __banked
{
        v_imk = ((v_ixk - 16) / 8) + 18 * ((v_iyk - 24) / 8); 
}

///Itemauswahl
void p_changeItem (void) BANKED
{
        //Null
        if (v_selectItem == 0)
        {
                if (v_sht != 0) v_selectItem = 1;
                else if (v_sat != 0) v_selectItem = 2;
                else if (v_spitzhacke == TRUE) v_selectItem = 4;
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
                else if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0;
        }
        //Spitzhacke zu Sichel
        else if (v_selectItem == 4)
        {
                if (v_sichel == TRUE) v_selectItem = 5;
                else if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0; 
        } 
        //Sichel zu Kraut
        else if (v_selectItem == 5)
        {
                if (v_shk != 0) v_selectItem = 6;
                else if (v_schaufel == TRUE) v_selectItem = 7;
                else if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0;
        }
        //Kraut zu Schaufel
        else if (v_selectItem == 6)
        {
                if (v_schaufel == TRUE) v_selectItem = 7;
                else if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0;
        }
        //Schaufel zu Portalrune
        else if (v_selectItem == 7)
        {
                if (v_portalrune == TRUE) v_selectItem = 8;
                else if (v_sht != 0) v_selectItem = 1;
                else v_selectItem = 0;
        }
        //Portalrune zu null
        else if (v_selectItem == 8) {
                v_selectItem = 0;

        }
        p_drawSelectItem ();
        delay (210);
}

///Anwendung des Proviant (automatisch)
void p_proviant () __banked
{
        if (v_ssc == 255)
        {
                if (v_spr > 0)
                {
                        --v_spr; v_ssc = 0;
                        p_hud_showPR ();
                }
                else if (v_spr == 0)
                {
                        --v_slp; v_ssc = 125;
                        p_hud_showLP ();
                }
        }
}

///Heiltrank, füllt 3 Lebenspunkte auf
void  p_use_heiltrank () __banked
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
void  p_use_ausdauertrank () __banked
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

void p_select_spitzhacke () __banked
{
        set_sprite_tile (9, 104);
        set_sprite_tile (10, 105);
        set_sprite_tile (11, 106);
        set_sprite_tile (12, 107);
}

void p_select_sichel () __banked
{
        set_sprite_tile (9, 100);
        set_sprite_tile (10, 101);
        set_sprite_tile (11, 102);
        set_sprite_tile (12, 103);
}

void p_select_schaufel (void) BANKED
{
        set_sprite_tile (9, 112);
        set_sprite_tile (10, 113);
        set_sprite_tile (11, 114);
        set_sprite_tile (12, 115);
}

///Benutzung der Spitzhacke
void p_use_item () __banked
{
        if (v_keyflag == 2)
        {
                if (v_selectItem == 4) p_select_spitzhacke ();
                else if (v_selectItem == 5) p_select_sichel ();
                else if (v_selectItem == 7) p_select_schaufel ();

                if ((v_sri == MOVE_NORTH) && (v_saus != 0) && (v_syk != 24))
                {
                        v_ixk = v_sxk; v_iyk = v_syk - 16;
                        move_sprite (9, v_sxk, v_syk - 16);
                        move_sprite (10, v_sxk, v_syk - 8);
                        move_sprite (11, v_sxk + 8, v_syk - 16);
                        move_sprite (12, v_sxk + 8, v_syk - 8);
                }
                //Süd
                else if ((v_sri == MOVE_SOUTH) && (v_saus != 0) && (v_syk != 120))
                {
                        v_ixk = v_sxk; v_iyk = v_syk + 16;
                        move_sprite (9, v_sxk, v_syk + 16);		
                        move_sprite (10, v_sxk, v_syk + 24);		
                        move_sprite (11, v_sxk + 8, v_syk + 16);             
                        move_sprite (12, v_sxk + 8, v_syk + 24);
                }
                //West
                else if ((v_sri == MOVE_WEST) && (v_saus != 0) && (v_sxk != 16))
                {
                        v_ixk = v_sxk - 16; v_iyk = v_syk;
                        move_sprite (9, v_sxk - 16, v_syk);
                        move_sprite (10, v_sxk - 16, v_syk + 8);
                        move_sprite (11, v_sxk - 8, v_syk);
                        move_sprite (12, v_sxk - 8, v_syk + 8);
                }
                //Ost
                else if ((v_sri == 4) && (v_saus != 0) && (v_sxk != 144))
                {
                        v_ixk = v_sxk + 16; v_iyk = v_syk;
                        move_sprite (9, v_sxk + 16, v_syk);
                        move_sprite (10, v_sxk + 16, v_syk + 8);
                        move_sprite (11, v_sxk + 24, v_syk);
                        move_sprite (12, v_sxk + 24, v_syk + 8);
                        
                }
                if (v_saus != 0)
                {
			v_itemlooptime = 0; v_sused = TRUE; --v_saus;
                        p_calc_mapK ();
			p_hud_showAD (); 
		}
        }
}

///
void p_hide_item () __banked
{
        move_sprite (9, 0, 0);
        move_sprite (10, 0, 0);
        move_sprite (11, 0, 0);
        move_sprite (12, 0, 0);
}

void p_collectGold () __banked
{
       BOOLEAN l_wert;

       l_wert = p_zahl ();

        if (l_wert == TRUE)
        {
                if (v_sgo < v_smgo)
                {
                        ++v_sgo;
                        
                }
        }
}
