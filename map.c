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

//#pragma bank=3

#include "map.h"
#include "engine.h"

#include "daten/karten/k_felsengrund.h"
#include "daten/karten/k_gefaengnis.h"
#include "daten/karten/k_wiesen.h"
#include "daten/karten/k_oger.h"
#include "daten/karten/k_dorfseefeen.h"
#include "daten/karten/k_feensee.h"
#include "daten/karten/k_eichenwald.h"
#include "daten/karten/k_feensee.h"
#include "daten/karten/k_dorfseefeen.h"
#include "daten/karten/k_dorfseefeen.h"
#include "daten/karten/nomap.h"

///Zeichnet aktuelle Position (Raum) auf der Karte ein
void p_map_draw_mark (UINT8 l_xk, UINT8 l_yk) __banked
{
	set_win_tiles (l_xk, l_yk, 1, 1, v_tile);
}

///zeigt aktuelle Levelkarte an
void p_showMap (void) __banked
{
	v_tile [0] = 52;

	//Karte 1 - Felsengrund
	if ((v_lvl < 4) && (v_knr [0] == 1))
	{
		set_win_tiles (8, 12, 2, 2, k_felsengrund);

		if (v_lvl == 1) p_map_draw_mark (9, 13);
		else if (v_lvl == 2) p_map_draw_mark (9, 12);
		else if (v_lvl == 3) p_map_draw_mark (8, 13);
	}

	//Karte 2 - Stadtgefaengnis
	else if ((v_lvl > 4) && (v_lvl < 14) && (v_knr [1] == 1))
	{
		set_win_tiles (8, 12, 4, 3, k_gefaengnis);
		
		if (v_lvl == 5) p_map_draw_mark (8, 12);
		else if (v_lvl == 6) p_map_draw_mark (9, 12);
		else if (v_lvl == 7) p_map_draw_mark (9, 13);
		else if (v_lvl == 8) p_map_draw_mark (8, 13);
		else if (v_lvl == 9) p_map_draw_mark (8, 14);
		else if (v_lvl == 10) p_map_draw_mark (9, 14);
		else if (v_lvl == 11) p_map_draw_mark (10, 14);
		else if (v_lvl == 12) p_map_draw_mark (10, 13);
		else if (v_lvl == 13) p_map_draw_mark (11, 14);
	}
        else if ((v_lvl > 19) && (v_lvl < 46) && (v_knr [2] == 1))
        {
                set_win_tiles (6, 11, 9, 6, k_wiesen);

                if (v_lvl == 20) p_map_draw_mark (14, 14);
                else if (v_lvl == 21) p_map_draw_mark (14, 13);
                else if (v_lvl == 22) p_map_draw_mark (14, 12);
                else if (v_lvl == 23) p_map_draw_mark (14, 11); 
                else if (v_lvl == 24) p_map_draw_mark (13, 14);
                else if (v_lvl == 25) p_map_draw_mark (13, 13);
                else if (v_lvl == 26) p_map_draw_mark (12, 13);
                else if (v_lvl == 27) p_map_draw_mark (12, 12);
                else if (v_lvl == 28) p_map_draw_mark (13, 12);
                else if (v_lvl == 29) p_map_draw_mark (11, 12);
                else if (v_lvl == 31) p_map_draw_mark (10, 12);
                else if (v_lvl == 30) p_map_draw_mark (11, 13);
                else if (v_lvl == 32) p_map_draw_mark (11, 14);
                else if (v_lvl == 33) p_map_draw_mark (11, 15);
                else if (v_lvl == 34) p_map_draw_mark (10, 15);
                else if (v_lvl == 35) p_map_draw_mark (9, 15);
                else if (v_lvl == 36) p_map_draw_mark (8, 15);
                else if (v_lvl == 37) p_map_draw_mark (7, 15);
        }
        else if ((v_lvl > 39) && (v_lvl < 67) && (v_knr [3] == 1))
        {
                set_win_tiles (7, 12, 8, 5, k_oger);

                if (v_lvl == 40) p_map_draw_mark (15, 16);
        }
        else if (((v_lvl == 90) || (v_lvl == 91)) && (v_knr [4] == 1))
        {
                set_win_tiles (9, 12, 1, 2, k_dorfseefeen);
        }
        else if ((v_lvl >= 95) && (v_lvl <= 116) && (v_knr [5] == 1))
        {
                set_win_tiles (7, 11, 6, 6, k_feensee);
        }
        else if ((v_lvl >= 120) && (v_lvl <= 143) && (v_knr [6] == 1))
        {
                set_win_tiles (8, 11, 5, 6, k_eichenwald);

        }        
	else
	{
		set_win_tiles (4, 13, 11, 2, nomap);
	}
}
