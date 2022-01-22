//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
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
//   Kontakt: projekte@kabelmail.net

//#pragma bank=8

#include "globals.h"
#include "engine.h"
#include "map.h"
#include "text.h"
#include "items.h"
#include "player.h"
#include "daten/hud/v_statscreen.h"
#include "daten/hud/v_infoscreen.h"

void p_hud_show (void) __banked;

/**Wandelt übergebene Variablenwert in Tile um und setzt dieses an angebener Position im Bereich der GUI
   Variablenwert, XK, YK**/
void p_hud_umwandlung (UINT8 v_wert, UINT8 l_xk, UINT8 l_yk, UINT8 l_layer) __banked
{ 
        if (v_wert == 0) v_tile [0] = 91;
  
        for (v_a = 0x01; v_a != 0x0A; ++v_a)
        {
                if (v_wert == v_a) v_tile [0] = 0x65 - v_a;
        }
        if (l_layer == LAYER_BKG) set_bkg_tiles (l_xk, l_yk, 1, 1, v_tile); 
        else if (l_layer == LAYER_WIN) set_win_tiles (l_xk, l_yk, 1, 1, v_tile);
}

///zeigt aktuellen Raum an
void p_hud_showLvl (void) __banked
{
        p_hud_umwandlung (v_lvl % 10, 18, 15, 1);
        p_hud_umwandlung ((v_lvl / 10) % 10, 17, 15, 1);
        p_hud_umwandlung (((v_lvl / 10) / 10) % 10, 16, 15, 1);
}

//nur für debuggingzwecke
void p_hud_showMK (void) __banked
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
void p_hud_showLP (void) __banked
{
        if (v_info == TRUE) p_hud_umwandlung (v_slp, 6, 1, LAYER_WIN);
        else if (v_info == FALSE) p_hud_umwandlung (v_slp, 3, 16, LAYER_BKG);
}

///zeigt maximal Lebenspukte des Spielers an
void p_hud_showMLP (void) __banked
{
        p_hud_umwandlung (v_smlp, 8, 1, LAYER_WIN);
}

///zeigt aktuelle Trefferpunkte des Spielers an
void p_hud_showTP (void) __banked
{
    p_hud_umwandlung (v_stp, 6, 9, LAYER_WIN);
}

///zeigt aktuelle Spielerrüstungsschutz an
void p_hud_showRS (void) __banked
{
        p_hud_umwandlung (v_srs, 13, 9, LAYER_WIN);
}

///zeigt aktiven Status an
void p_hud_showStatus (void) __banked
{}

///zeigt Anzahl der Schlüssel des Spielers
void p_hud_showKey (void) __banked
{
  p_hud_umwandlung (v_ske, 17, 4, LAYER_WIN); 
}

///zeigt Anzahl Goldmünzen des Spielers an
void p_hud_showGO (void) __banked
{
  p_hud_umwandlung (v_sgo % 10, 18, 3, LAYER_WIN);
  p_hud_umwandlung ((v_sgo / 10) % 10, 17, 3, LAYER_WIN);
  //p_hud_umwandlung (((v_sgo / 10) / 10) % 10, 16, 1, 2);
}

///zeigt aktuelle/maximale Anzahl Heiltränke des Spielers an
void p_hud_showHT (void) __banked
{
        p_hud_umwandlung (v_sht, 3, 4, LAYER_WIN);
        p_hud_umwandlung (v_smht, 5, 4, LAYER_WIN);
}

///zeigt Anzahl Proviant des Spielers an
void p_hud_showPR (void) __banked
{
        if (v_info == TRUE) p_hud_umwandlung (v_spr, 3, 3, LAYER_WIN);
        else if (v_info == FALSE) p_hud_umwandlung (v_spr, 14, 16, LAYER_BKG);
}

///zeigt maximale Anzahl Proviant des Spielers an
void p_hud_showMPR (void) __banked
{
  p_hud_umwandlung (v_smpr, 5, 3, LAYER_WIN);
}

//Ausdauer
void p_hud_showAD (void) __banked
{
        if (v_info == FALSE) p_hud_umwandlung (v_saus, 7, 16, LAYER_BKG);
        else if (v_info == TRUE) p_hud_umwandlung (v_saus, 13, 1, LAYER_WIN);
}

///zeigt maximale Ausdauer des Spielers an
void p_hud_showMAD (void) __banked
{
  p_hud_umwandlung (v_smaus, 15, 1, LAYER_WIN);
}

///Zeigt aktuelle/maximale Ausdauertränke an
void p_hud_showAT (void) __banked
{
        p_hud_umwandlung (v_sat, 3, 5, LAYER_WIN);
        p_hud_umwandlung (v_smat, 5, 5, LAYER_WIN);
}


///zeigt aktuelle/maximale Anzahl Heilkräuter an
void p_gui_showHK (void) __banked
{
        //if (v_info == TRUE) p_hud_umwandlung (v_shk, 3, 6, 2);
        p_hud_umwandlung (v_shk, 3, 6, LAYER_WIN);
        p_hud_umwandlung (v_smhk, 5, 6, LAYER_WIN);
}

void p_hud_showStaub (void) __banked
{
        if (v_info == FALSE) p_hud_umwandlung (v_sstaub, 18, 16, LAYER_BKG);
        else if (v_info == TRUE) {
                p_hud_umwandlung (v_sstaub, 3, 7, LAYER_WIN);
                p_hud_umwandlung (v_smstaub, 5, 7, LAYER_WIN);
        }
}

//zeigt anzahl erz im infoscreen an
void p_hud_view_erz (void) __banked
{
        p_hud_umwandlung (v_serz, 17, 5, LAYER_WIN);
}


//zeigt anzahl stoff im inofscreen an
void p_hud_view_stoff (void) __banked
{
        p_hud_umwandlung (v_stoff, 17, 6, LAYER_WIN);
}

void p_hud_showSpitzhacke (void) __banked
{
        
        if (v_spitzhacke == TRUE) {
                v_tile [0] = 51;
                set_win_tiles (8, 4, 1, 1, v_tile);
        }
}

void p_hud_showSichel (void) __banked
{
	if (v_sichel == TRUE) {
                v_tile [0] = 50;
                set_win_tiles (9, 4, 1, 1, v_tile);
        }
}

void p_hud_showSchaufel (void) __banked
{
        if (v_schaufel == TRUE) {
                v_tile [0] = 48; 
                set_win_tiles (10, 4, 1, 1, v_tile);
        }       
}

void p_hud_showPortalrune (void) __banked
{
        if (v_portalrune == TRUE) { 
                v_tile [0] = 49;
                set_win_tiles (11, 4, 1, 1, v_tile);
        }
}

///zeigt aktuelle XK/YK des Spielersprites an
void p_hud_showXYK (void) __banked
{
        p_hud_umwandlung (v_sxk % 10, 8, 15, 1);
        p_hud_umwandlung ((v_sxk / 10) % 10, 7, 15, 1);
        p_hud_umwandlung (((v_sxk / 10) / 10) % 10, 6, 15, 1);
        
        p_hud_umwandlung (v_syk % 10, 12, 15, 1);
        p_hud_umwandlung ((v_syk / 10) % 10, 11, 15, 1);
        p_hud_umwandlung (((v_syk / 10) / 10) % 10, 10, 15, 1);
}

//zeigt Schwert an, wenn gefunden
void p_view_sword (void) __banked
{
        if (v_stp != 0) {
                v_tile [0] = 57;
                set_bkg_tiles (10, 16, 1, 1, v_tile);
        }
}



///HUD unsichtbar schalten
void p_hud_hide (void) __banked
{
  //set_bkg_tiles (0, 14, 20, 4, clrhudgui);
}

///Hud init
void p_hud_init (void) __banked
{
        set_bkg_tiles (0, 0, 20, 18, v_statscreen);
        set_win_tiles (0, 0, 20, 18, v_infoscreen);
        v_info = FALSE; v_blink = 0;
}

///Zeigt Infoscreen an
void p_gui_show_infoscreen (void) __banked
{
        v_info = TRUE; v_walk = FALSE;
        set_win_tiles (0, 0, 20, 18, v_infoscreen);
           
        p_hud_showLP (); 
        p_hud_showMLP ();
        p_hud_showAD ();
        p_hud_showMAD ();
        p_hud_showPR ();
        p_hud_showMPR ();
        p_gui_showHK ();
        p_hud_showTP ();
        p_hud_showRS ();
        p_hud_showGO ();
        p_hud_showHT ();
        p_hud_showAT ();
        p_hud_showKey ();
        p_hud_showStaub ();
        p_hud_showSpitzhacke ();
        p_hud_showSichel ();
        p_hud_showSchaufel ();
        p_hud_showPortalrune ();
        p_hud_view_erz ();
        p_hud_view_stoff ();
        p_showMap ();
        
        move_win (7, 0);
        SHOW_WIN;  
        HIDE_SPRITES;
        delay (200);   
}

///versteckt Infoscreen
void p_gui_hide_infoscreen (void) __banked
{
        HIDE_WIN;
        SHOW_BKG;
        SHOW_SPRITES;
        v_info = FALSE; v_walk = TRUE;
        delay (150);
        p_hud_show ();
        gloop = v_gspeed - 1;
}

///Zeigt HUD an
void p_hud_show (void) __banked
{ 
          p_hud_showLP ();
          p_hud_showPR ();
          p_hud_showXYK ();
          p_hud_showAD ();
          p_hud_showStaub ();
          p_drawSelectItem ();
          p_view_sword ();
}

///Blinken von LP und Proviant-Anzeige bei niedrigen Werten  
void p_hud_blink (void) __banked
{
        if (v_info == FALSE)
	{
                if (v_blink == 0)
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
                                        set_bkg_tiles (1, 16, 1, 1, v_tile); 
                                }
                                ++v_blink;
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
                                        set_bkg_tiles (1, 16, 1, 1, v_tile); 
                                }
                                --v_blink;
                        
                }
        }	
}
