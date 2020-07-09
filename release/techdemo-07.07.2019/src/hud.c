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
//   Kontakt: magister@skywave-2000.de

#pragma bank=8

#include "globals.h"
#include "engine.h"
#include "map.h"
#include "text.h"
#include "items.h"
#include "player.h"
#include "daten/hud/v_statscreen.h"
#include "daten/hud/v_infoscreen.h"


///für HUD Blink
volatile UINT8 v_1;     
volatile BOOLEAN v_info;            

/**Wandelt übergebene Variablenwert in Tile um und setzt dieses an angebener Position im Bereich der GUI
   Variablenwert, XK, YK**/
void p_hud_umwandlung (UINT8 v_wert, UINT8 l_xk, UINT8 l_yk, UINT8 l_layer) BANKED
{ 
        if (v_wert == 0) v_tile [0] = 91;
  
        for (v_a = 0x01; v_a != 0x0A; ++v_a)
        {
                if (v_wert == v_a) v_tile [0] = 0x65 - v_a;
        }
        if (l_layer == 1) set_bkg_tiles (l_xk, l_yk, 1, 1, v_tile); 
        if (l_layer == 2) set_win_tiles (l_xk, l_yk, 1, 1, v_tile);
}

///zeigt aktuelles Level an
void p_hud_showLvl () BANKED
{
        p_hud_umwandlung (v_lvl % 10, 18, 15, 1);
        p_hud_umwandlung ((v_lvl / 10) % 10, 17, 15, 1);
        p_hud_umwandlung (((v_lvl / 10) / 10) % 10, 16, 15, 1);
}

//nur für debuggingzwecke
void p_hud_showMK () BANKED
{
        p_hud_umwandlung (v_smk % 10, 11, 17, 1);
        p_hud_umwandlung ((v_smk / 10) % 10, 10, 17, 1);
        p_hud_umwandlung (((v_smk / 10) / 10) % 10, 9, 17, 1);

        /*p_hud_umwandlung (v_smkh % 10, 16, 16, 1);
        p_hud_umwandlung ((v_smkh / 10) % 10, 16, 16, 1);
        p_hud_umwandlung (((v_smkh / 10) / 10) % 10, 15, 16, 1);*/

        /*p_hud_umwandlung (v_tile [1] % 10, 18, 0, 1);
        p_hud_umwandlung ((v_tile [1] / 10) % 10, 17, 0, 1);
        p_hud_umwandlung (((v_tile [1] / 10) / 10) % 10, 16, 0, 1);*/

        /*p_hud_umwandlung (v_smkh % 10, 16, 16, 1);
        p_hud_umwandlung ((v_smkh / 10) % 10, 16, 16, 1);
        p_hud_umwandlung (((v_smkh / 10) / 10) % 10, 15, 16, 1);*/

        /*p_hud_umwandlung (v_smxk % 10, 16, 16, 1);
        p_hud_umwandlung ((v_smxk / 10) % 10, 16, 16, 1);
        p_hud_umwandlung (((v_smxk / 10) / 10) % 10, 15, 16, 1);*/

        /*p_hud_umwandlung (v_smyk % 10, 16, 16, 1);
        p_hud_umwandlung ((v_smyk / 10) % 10, 16, 16, 1);
        p_hud_umwandlung (((v_smyk / 10) / 10) % 10, 15, 16, 1);*/
}

///zeigt aktuelle Spielerlebenspunkte an
void p_hud_showLP () BANKED
{
        if (v_info == TRUE) p_hud_umwandlung (v_slp, 6, 1, 2);
        else if (v_info == FALSE) p_hud_umwandlung (v_slp, 3, 16, 1);
}

///zeigt maximal Lebenspukte des Spielers an
void p_hud_showMLP () BANKED
{
        p_hud_umwandlung (v_smlp, 8, 1, 2);
}

///zeigt aktuelle Trefferpunkte des Spielers an
void p_hud_showTP () BANKED
{
    p_hud_umwandlung (v_stp, 6, 9, 2);
}

///zeigt aktuelle Spielerrüstungsschutz an
void p_hud_showRS () BANKED
{
  p_hud_umwandlung (v_srs, 3, 7, 2);
}

///zeigt aktiven Status an
void p_hud_showStatus () BANKED
{}

///zeigt Anzahl der Schlüssel des Spielers
void p_hud_showKey () BANKED
{
  p_hud_umwandlung (v_ske, 16, 13); 
}

///zeigt Anzahl Goldmünzen des Spielers an
void p_hud_showGO () BANKED
{
  p_hud_umwandlung (v_sgo % 10, 18, 3, 2);
  p_hud_umwandlung ((v_sgo / 10) % 10, 17, 3, 2);
  //p_hud_umwandlung (((v_sgo / 10) / 10) % 10, 16, 1, 2);
}

///zeigt aktuelle Anzahl Heiltränke des Spielers an
void p_hud_showHT () BANKED
{
  p_hud_umwandlung (v_sht, 3, 4, 2);
}

///max. Anzahl von Heiltränke des Spielers
void p_hud_showMHT () BANKED
{
  p_hud_umwandlung (v_smht, 5, 4, 2);
}

///zeigt Anzahl Proviant des Spielers an
void p_hud_showPR () BANKED
{
        if (v_info == TRUE) p_hud_umwandlung (v_spr, 3, 3, 2);
        else if (v_info == FALSE) p_hud_umwandlung (v_spr, 14, 16, 1);
}

///zeigt maximale Anzahl Proviant des Spielers an
void p_hud_showMPR () BANKED
{
  p_hud_umwandlung (v_smpr, 5, 3, 2);
}

//Ausdauer
void p_hud_showAD () BANKED
{
        if (v_info == FALSE) p_hud_umwandlung (v_saus, 7, 16, 1);
        else if (v_info == TRUE) p_hud_umwandlung (v_saus, 13, 1, 2);
}

///zeigt maximale Ausdauer des Spielers an
void p_hud_showMAD () BANKED
{
  p_hud_umwandlung (v_smaus, 15, 1, 2);
}

///Zeigt Ausdauertränke an
void p_hud_showAT () BANKED
{
        p_hud_umwandlung (v_sat, 3, 5, 2);
}

void  p_hud_showMAT () BANKED
{
        p_hud_umwandlung (v_smat, 5, 5, 2);
}

///zeigt Anzahl Heilkräuter an
void p_gui_showHK () BANKED
{
        if (v_info == TRUE) p_hud_umwandlung (v_shk, 3, 3, 2);
        //else if (v_info == FALSE) p_hud_umwandlung (v_hk, )
}

void p_hud_showStaub () BANKED
{
  if (v_info == FALSE) p_hud_umwandlung (v_sstaub, 16, 18, 1);
}

void p_hud_showMStaub () BANKED
{
  p_hud_umwandlung (v_smstaub, 18, 17);
}

void p_hud_showSpitzhacke () BANKED
{
        v_tile [0] = 51;
        if (v_spitzhacke == TRUE) set_win_tiles (8, 4, 1, 1, v_tile);
}

///zeigt aktuelle XK/YK des Spielersprites an
void p_hud_showXYK () BANKED
{
  p_hud_umwandlung (v_sxk % 10, 8, 15, 1);
  p_hud_umwandlung ((v_sxk / 10) % 10, 7, 15, 1);
  p_hud_umwandlung (((v_sxk / 10) / 10) % 10, 6, 15, 1);
  
  p_hud_umwandlung (v_syk % 10, 12, 15, 1);
  p_hud_umwandlung ((v_syk / 10) % 10, 11, 15, 1);
  p_hud_umwandlung (((v_syk / 10) / 10) % 10, 10, 15, 1);
}

///HUD unsichtbar schalten
void p_hud_hide () BANKED
{
  //set_bkg_tiles (0, 14, 20, 4, clrhudgui);
}

///Hud init
void p_hud_init () BANKED
{
  set_bkg_tiles (0, 0, 20, 18, v_statscreen);
  set_win_tiles (0, 0, 20, 18, v_infoscreen);
  v_info = FALSE;
}

void p_gui_show_infoscreen () BANKED
{
        v_info = TRUE;
        set_win_tiles (0, 0, 20, 18, v_infoscreen);
           
        p_hud_showLP (); 
        p_hud_showMLP ();
        p_hud_showAD ();
        p_hud_showMAD ();
        p_hud_showPR ();
        p_hud_showMPR ();
	p_hud_showTP ();
        p_hud_showGO ();
        p_hud_showHT ();
        p_hud_showMHT ();
        p_hud_showAT ();
        p_hud_showMAT ();
	/*p_hud_showRS ();
	
        */
        p_hud_showSpitzhacke ();
        p_showMap ();
        
        move_win (7, 0);
        SHOW_WIN;  
        HIDE_SPRITES;
        delay (150);
}

void p_gui_hide_infoscreen () BANKED
{
        HIDE_WIN;
        SHOW_BKG;
        SHOW_SPRITES;
        v_info = FALSE;
        delay (150);
}

void p_view_sword () BANKED
{
        if (v_stp != 0)
        {
                v_tile [0] = 57;
                set_bkg_tiles (10, 16, 1, 1, v_tile);
        }
}

///Zeigt HUD an
void p_hud_show () BANKED
{ 
  p_hud_showLP ();
  p_hud_showPR ();
  p_hud_showXYK ();
  p_hud_showAD ();
  /*p_hud_showMLP ();
  
  p_hud_showMPR ();
  p_hud_showXYK ();
  p_hud_showTP ();
  p_hud_showRS ();
  p_hud_showGO ();
  p_hud_showHT ();
  p_hud_showMHT ();
  p_hud_showStaub ();
  p_hud_showMStaub ();
  p_hud_showKey ();
  p_hud_showLvl ();*/

  //p_drawSelectItem ();
  p_view_sword ();
}

///Blinken von LP und Proviant-Anzeige bei niedrigen Werten  
void p_hud_blink () BANKED
{
	if (v_1 == 1)
	{
		if (v_info == FALSE)
		{
			//Proviant
			/*if (v_spr <= 1) 
			{
				v_tile [0] = 0x3A;
				set_bkg_tiles (13, 16, 1, 1, v_tile);
			}*/
			//Lebenspunkte
			if (v_slp == 1) 
			{
				v_tile [0] = 69;
				set_bkg_tiles (2, 16, 1, 1, v_tile); 
			}
			++v_1;
		}
		else
		{
			/*if (v_spr <= 1) 
			{
				v_tile [0] = 0x3D;
				set_bkg_tiles (13, 16, 1, 1, v_tile);
			}*/
			if (v_slp == 1) 
			{
				v_tile [0] = 68;
				set_bkg_tiles (2, 16, 1, 1, v_tile); 
			}
			--v_1;
		}
	}	
}
