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

#pragma bank=3

#include "globals.h"
#include "engine.h"

#include "daten/karten/k_felsengrund.h"
#include "daten/karten/k_gefaengnis.h"
#include "daten/karten/nomap.h"

UINT8 v_knr [5];

///Zeichnet aktuelle Position (Lvl) auf der Karte ein
void p_map_draw_mark (UINT8 l_xk, UINT8 l_yk) BANKED
{
	set_win_tiles (l_xk, l_yk, 1, 1, v_tile);
}

///zeigt aktuelle Levelkarte an
void p_showMap () BANKED
{
	v_tile [0] = 52;

	//Karte 1 - Felsengrund
	if ((v_lvl < 4) && (v_knr [0] == 1))
	{
		set_win_tiles (8, 12, 3, 3, k_felsengrund);

		if (v_lvl == 1) p_map_draw_mark (10, 14);
		else if (v_lvl == 2) p_map_draw_mark (10, 12);
		else if (v_lvl == 3) p_map_draw_mark (8, 14);
	}

	//Karte 2 - Stadtgefaengnis
	else if ((v_lvl > 4) && (v_lvl < 14) && (v_knr [1] == 1))
	{
		set_win_tiles (8, 11, 7, 5, k_gefaengnis);
		
		if (v_lvl == 5) p_map_draw_mark (8, 11);
		else if (v_lvl == 6) p_map_draw_mark (10, 11);
		else if (v_lvl == 7) p_map_draw_mark (10, 13);
		else if (v_lvl == 8) p_map_draw_mark (8, 13);
		else if (v_lvl == 9) p_map_draw_mark (8, 15);
		else if (v_lvl == 10) p_map_draw_mark (10,15);
		else if (v_lvl == 11) p_map_draw_mark (12, 15);
		else if (v_lvl == 12) p_map_draw_mark (12, 13);
		else if (v_lvl == 13) p_map_draw_mark (14, 15);
	}
	else
	{
		set_win_tiles (4, 13, 11, 2, nomap);
	}
}
