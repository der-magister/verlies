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

#include "globals.h"
#include "engine.h"
#include "other.h"
#include "text.h"
#include "lvlstatus.h"


#include "daten/txt/schilder/schluessel.h"
//#include "daten/txt/schilder/tuerzu.h"

void p_schalter_init (void) BANKED
{
        for (v_i = 0; v_i <= 20; v_i++)
        {
                v_schalter [v_i] = 0;
        }
}

void p_schalter_change (UINT8 l_xk, UINT8 l_yk) BANKED
{
        ++l_xk; ++l_yk;

        v_tile [0] = 44;
        set_bkg_tiles (l_xk, l_yk, 1, 1,  v_tile);
        --v_tile [0];
        set_bkg_tiles (l_xk + 1, l_yk, 1, 1, v_tile);
}


void p_tuer_change (UINT8 l_xk, UINT8 l_yk) BANKED
{
        v_tile [0] = 42;
        p_engine_set_tile (l_xk, l_yk, 1);
        --v_tile [0];
        p_engine_set_tile (l_xk + 1, l_yk + 1, 1);
        --v_tile [0];
        p_engine_set_tile (l_xk + 1, l_yk, 1);
        --v_tile [0];
        p_engine_set_tile (l_xk, l_yk + 1, 1);
}

void p_schalter_status () BANKED
{
        if ((v_schalter [0] == 1) && (v_lvl == 10))
        {
                p_schalter_change (11, 1);
                p_tuer_change (16, 6);
        }
        else if ((v_schalter [1] == 1) && (v_lvl == 43))
        {
                p_schalter_change (15, 1);
                p_tuer_change (11, 0);
        }
        else if ((v_schalter [2] == 1) && (v_lvl == 57))
        {
                p_schalter_change (1, 1);
                p_tuer_change (16, 6);
        }
        else if ((v_schalter [3] == 1) && (v_lvl == 58))
        {
                p_schalter_change (15, 1);
                p_tuer_change (16, 11);
        }
        else if ((v_schalter [4] == 1) && (v_lvl == 59))
        {
                p_schalter_change (15, 9);
                p_tuer_change (16, 6);
        }
        else if ((v_schalter [5] == 1) && (v_lvl == 156))
        {
                p_schalter_change (1, 12);
                v_tile [0] = 12;
                p_engine_set_tile (16, 5, LAYER_BKG);
                ++v_tile [0];
                p_engine_set_tile (16, 6, LAYER_BKG);
                ++v_tile [0];
                p_engine_set_tile (17, 5, LAYER_BKG);
                ++v_tile [0];
                p_engine_set_tile (17, 6, LAYER_BKG);
        }
        else if ((v_schalter [6] == 1) && (v_lvl == 211))
        {
                p_schalter_change (15, 12);
        }
        else if ((v_schalter [7] == 1) && (v_lvl == 268)) {
                p_schalter_change (1, 12);
        }
        else if ((v_schalter [8] == 1) && (v_lvl == 278)) {
                p_schalter_change (15, 1);
                p_tuer_change (0, 5);
        }
        
}      

///setzt Schild
void p_schild (UINT8 l_mk, unsigned char l_txt [72]) BANKED
{
        if ((l_mk == v_smk) && (v_keyflag == 1))
        { 
                p_engine_set_txt (l_txt);
                delay (150);
                p_engine_A ();
                p_engine_after_txt ();
        }
}

///verschlossene Tür
void p_schluessel () BANKED
{
  //p_hud_hide ();
  p_engine_set_txt (schluessel);
  p_engine_after_txt ();
}

///Tür zu
void p_tuerzu () BANKED
{
        p_engine_set_txt (schluessel);
        p_engine_A ();
        p_engine_after_txt ();
}

///Schalter zum öffnen einer Tür (Koordinaten Schalterlage, Koordinaten Schalteränderung, Koordinaten Türänderung, Questnummer)
void p_schalter_tuer (UINT8 l_smk, UINT8 l_nr) BANKED
{
	if ((v_smk == l_smk) && (v_keyflag == 1))
	{
		if (v_schalter [l_nr] == 0)
		{
			v_schalter [l_nr] = 1;
                        p_schalter_status ();
		}
	}
}

