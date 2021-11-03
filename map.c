//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2021 Heiko Wolf
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

//#pragma bank=3

#include "map.h"
#include "engine.h"

#include "daten/karten/maps.h"
#include "daten/karten/nomap.h"

void p_map_init (void) BANKED
{
        for (v_i = 0; v_i != 15; ++v_i) {
                v_knr [v_i] = 0;
        }

}

///Zeichnet aktuelle Position (Raum) auf der Karte ein
void p_map_draw_mark (UINT8 l_xk, UINT8 l_yk) BANKED
{
	set_win_tiles (l_xk, l_yk, 1, 1, v_tile);
}

///zeigt aktuelle Levelkarte an
void p_showMap (void) BANKED
{
	v_tile [0] = 52;

	//Karte 1 - Felsengrund
	if ((v_region == 1) && (v_knr [0] == 1))
	{
		set_win_tiles (8, 12, 2, 2, k_felsengrund);

		if (v_lvl == 1) p_map_draw_mark (9, 13);
		else if (v_lvl == 2) p_map_draw_mark (9, 12);
		else if (v_lvl == 3) p_map_draw_mark (8, 13);
	}

	//Karte 2 - Stadtgefaengnis
	else if ((v_region == 2) && (v_knr [1] == 1))
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
        //Karte 3 - Wiesen
        else if ((v_region == 3) && (v_knr [2] == 1))
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
                else if (v_lvl == 16) p_map_draw_mark (9, 14);
                else if (v_lvl == 80) p_map_draw_mark (9, 13);
                else if (v_lvl == 81) p_map_draw_mark (9, 12);
                else if (v_lvl == 71) p_map_draw_mark (9, 16);
                else if (v_lvl == 70) p_map_draw_mark (10, 16);
                else if (v_lvl == 72) p_map_draw_mark (11, 16);
                else if (v_lvl == 38) p_map_draw_mark (13, 15);
                else if (v_lvl == 76) p_map_draw_mark (13, 16);
                else if (v_lvl == 39) p_map_draw_mark (14, 15);
                else if (v_lvl == 77) p_map_draw_mark (14, 16);
                else if (v_lvl == 78) p_map_draw_mark (8, 16);
                else if (v_lvl == 84) p_map_draw_mark (8, 14);
                else if (v_lvl == 85) p_map_draw_mark (8, 13);
                else if (v_lvl == 82) p_map_draw_mark (8, 12);
                else if (v_lvl == 79) p_map_draw_mark (7, 16);
                else if (v_lvl == 87) p_map_draw_mark (7, 14);
                else if (v_lvl == 86) p_map_draw_mark (7, 13);
                else if (v_lvl == 83) p_map_draw_mark (7, 12);
        }
        //Karte 4 Ogerhoehlen
        else if ((v_region == 4) && (v_knr [3] == 1))
        {
                set_win_tiles (7, 12, 8, 5, k_oger);

                if (v_lvl == 40) p_map_draw_mark (14, 15);
                else if (v_lvl == 41) p_map_draw_mark (14, 16);
                else if (v_lvl == 42) p_map_draw_mark (14, 14);
                else if (v_lvl == 43) p_map_draw_mark (14, 13);
                else if (v_lvl == 44) p_map_draw_mark (14, 12);
                else if (v_lvl == 50) p_map_draw_mark (13, 16);
                else if (v_lvl == 45) p_map_draw_mark (13, 15);
                else if (v_lvl == 53) p_map_draw_mark (13, 14); 
                else if (v_lvl == 49) p_map_draw_mark (12, 16);
                else if (v_lvl == 46) p_map_draw_mark (12, 15);
                else if (v_lvl == 52) p_map_draw_mark (12, 14);
                else if (v_lvl == 60) p_map_draw_mark (12, 13);
                else if (v_lvl == 48) p_map_draw_mark (11, 16);
                else if (v_lvl == 47) p_map_draw_mark (11, 15);
                else if (v_lvl == 51) p_map_draw_mark (11, 14);
                else if (v_lvl == 59) p_map_draw_mark (11, 13);
                else if (v_lvl == 54) p_map_draw_mark (10, 15);
                else if (v_lvl == 58) p_map_draw_mark (10, 13);
                else if (v_lvl == 61) p_map_draw_mark (9, 16);
                else if (v_lvl == 55) p_map_draw_mark (9, 15);
                else if (v_lvl == 56) p_map_draw_mark (9, 14);
                else if (v_lvl == 57) p_map_draw_mark (9, 13);
                else if (v_lvl == 62) p_map_draw_mark (8, 16);
                else if (v_lvl == 63) p_map_draw_mark (7, 16);
                else if (v_lvl == 64) p_map_draw_mark (7, 15);
                else if (v_lvl == 65) p_map_draw_mark (7, 14);
                //else if (v_lvl == 66) p_map_draw_mark (7, 13);
        }
        //Karte 5 Seefeendorf
        else if ((v_region == 5) && (v_knr [4] == 1)) {
                set_win_tiles (9, 12, 1, 2, k_dorfseefeen);

                if (v_lvl == 90) p_map_draw_mark (9, 12);
                else if (v_lvl == 91) p_map_draw_mark (9, 13);
        }
        //Karte Feensee
        else if ((v_region == 6) && (v_knr [5] == 1)) {
                set_win_tiles (7, 11, 6, 6, k_feensee);

                if (v_lvl == 95) p_map_draw_mark (9, 11);
                else if (v_lvl == 96) p_map_draw_mark (10, 11);
                else if (v_lvl == 97) p_map_draw_mark (11, 11);
                else if (v_lvl == 98) p_map_draw_mark (8, 11);
                else if (v_lvl == 99) p_map_draw_mark (7, 11);

                else if (v_lvl == 100) p_map_draw_mark (7, 12);
                else if (v_lvl == 101) p_map_draw_mark (11, 12);

                else if (v_lvl == 102) p_map_draw_mark (7, 13);
                else if (v_lvl == 103) p_map_draw_mark (9, 13);
                else if (v_lvl == 104) p_map_draw_mark (11, 13);

                else if (v_lvl == 105) p_map_draw_mark (7, 14);
                else if (v_lvl == 106) p_map_draw_mark (8, 14);
                else if (v_lvl == 107) p_map_draw_mark (9, 14);
                else if (v_lvl == 108) p_map_draw_mark (10, 14);
                else if (v_lvl == 109) p_map_draw_mark (11, 14);

                else if (v_lvl == 110) p_map_draw_mark (7, 15);
                else if (v_lvl == 111) p_map_draw_mark (8, 15);
                else if (v_lvl == 112) p_map_draw_mark (9, 15);
                else if (v_lvl == 113) p_map_draw_mark (10, 15);
                else if (v_lvl == 114) p_map_draw_mark (11, 15);

                else if (v_lvl == 115) p_map_draw_mark (11, 16);
                else if (v_lvl == 116) p_map_draw_mark (12, 16);
        }
        else if ((v_region == 7) && (v_knr [6] == 1)) {
                set_win_tiles (8, 11, 5, 6, k_eichenwald);

                if (v_lvl == 120) p_map_draw_mark (10, 16);
                else if (v_lvl == 121) p_map_draw_mark (11, 16);
                else if (v_lvl == 122) p_map_draw_mark (12, 16);
                else if (v_lvl == 123) p_map_draw_mark (10, 15);
                else if (v_lvl == 124) p_map_draw_mark (11, 15);
                else if (v_lvl == 125) p_map_draw_mark (11, 14);
                //else if (v_lvl == 126) p_map_draw_mark (11, 13);
                else if (v_lvl == 127) p_map_draw_mark (9, 15);
                else if (v_lvl == 128) p_map_draw_mark (8, 15);
                else if (v_lvl == 129) p_map_draw_mark (9, 14); 
                else if (v_lvl == 130) p_map_draw_mark (9, 13);
                else if (v_lvl == 131) p_map_draw_mark (8, 13);
                else if (v_lvl == 132) p_map_draw_mark (8, 12);
                else if (v_lvl == 133) p_map_draw_mark (8, 11);
                else if (v_lvl == 134) p_map_draw_mark (9, 11);
                else if (v_lvl == 135) p_map_draw_mark (10, 11);
                else if (v_lvl == 136) p_map_draw_mark (10, 12);
                else if (v_lvl == 137) p_map_draw_mark (9, 12);
                else if (v_lvl == 138) p_map_draw_mark (10, 13);
                else if (v_lvl == 139) p_map_draw_mark (11, 12);
                else if (v_lvl == 140) p_map_draw_mark (11, 11);
                else if (v_lvl == 141) p_map_draw_mark (12, 11);
                else if (v_lvl == 142) p_map_draw_mark (12, 12);
                else if (v_lvl == 143) p_map_draw_mark (12, 13);
        }   
        else if ((v_region == 9) && (v_knr [7] == 1)) {
                set_win_tiles (7, 12, 8, 5, k_gebirgspfad);

                if (v_lvl == 168) p_map_draw_mark (14, 16);
                else if (v_lvl == 169) p_map_draw_mark (13, 16);
                else if (v_lvl == 170) p_map_draw_mark (13, 15);
                else if (v_lvl == 171) p_map_draw_mark (13, 14);
                else if (v_lvl == 172) p_map_draw_mark (12, 14);
                else if (v_lvl == 173) p_map_draw_mark (11, 14);
                else if (v_lvl == 175) p_map_draw_mark (11, 13);
                else if (v_lvl == 176) p_map_draw_mark (10, 13);
                else if (v_lvl == 177) p_map_draw_mark (9, 13);
                else if (v_lvl == 178) p_map_draw_mark (9, 12);
                else if (v_lvl == 179) p_map_draw_mark (8, 12);
        }    
        else if ((v_region == 10) && (v_knr [8] == 1))
        {
                set_win_tiles (8, 12, 2, 2, k_zwergenheim);

                if (v_lvl == 185) p_map_draw_mark (9, 13);
                else if (v_lvl == 186) p_map_draw_mark (8, 13);
                else if (v_lvl == 187) p_map_draw_mark (8, 12);
        }
        else if ((v_region == 11) && (v_knr [9] == 1))
        {
                set_win_tiles (8, 12, 4, 5, k_rotgebirge);

                if (v_lvl == 190) p_map_draw_mark (10, 16);
                else if (v_lvl == 191) p_map_draw_mark (11, 16);
                else if (v_lvl == 192) p_map_draw_mark (10, 15);
                else if (v_lvl == 193) p_map_draw_mark (9, 15);
                else if (v_lvl == 194) p_map_draw_mark (9, 14);
                else if (v_lvl == 195) p_map_draw_mark (8, 14);
                else if (v_lvl == 196) p_map_draw_mark (9, 13);
                else if (v_lvl == 197) p_map_draw_mark (9, 12);
                else if (v_lvl == 198) p_map_draw_mark (10, 12);
                else if (v_lvl == 199) p_map_draw_mark (11, 12);
                else if (v_lvl == 200) p_map_draw_mark (11, 13);
                else if (v_lvl == 201) p_map_draw_mark (10, 13);
                else if (v_lvl == 202) p_map_draw_mark (11, 14);
                else if (v_lvl == 203) p_map_draw_mark (11, 15);
        }
        else if ((v_region == 12) && (v_knr [10] == 1) && (v_lvl < 218))
        {
                set_win_tiles (8, 12, 5, 5, k_mine_eg);

                if (v_lvl == 205) p_map_draw_mark (10, 16);
                else if (v_lvl == 206) p_map_draw_mark (9, 16);
                else if (v_lvl == 207) p_map_draw_mark (10, 15);
                else if (v_lvl == 208) p_map_draw_mark (10, 14);
                else if (v_lvl == 209) p_map_draw_mark (9, 14);
                else if (v_lvl == 210) p_map_draw_mark (11, 14);
                else if (v_lvl == 211) p_map_draw_mark (12, 14);
                else if (v_lvl == 212) p_map_draw_mark (10, 13);
                else if (v_lvl == 213) p_map_draw_mark (10, 12);
                else if (v_lvl == 214) p_map_draw_mark (9, 12);
                else if (v_lvl == 215) p_map_draw_mark (9, 13);
                else if (v_lvl == 216) p_map_draw_mark (8, 13);
                else if (v_lvl == 217) p_map_draw_mark (11, 12);
        }
        else if ((v_region == 12) && (v_knr [11] == 1) && (v_lvl > 219))
        {
                set_win_tiles (7, 12, 6, 4, k_mine_tg);

                if (v_lvl == 220) p_map_draw_mark (10, 12);
                else if (v_lvl == 221) p_map_draw_mark (10, 13);           
                else if (v_lvl == 222) p_map_draw_mark (10, 14);
                else if (v_lvl == 223) p_map_draw_mark (11, 14);
                else if (v_lvl == 224) p_map_draw_mark (12, 14);
                else if (v_lvl == 225) p_map_draw_mark (12, 13);
                else if (v_lvl == 226) p_map_draw_mark (12, 15);
                else if (v_lvl == 227) p_map_draw_mark (9, 14);
                else if (v_lvl == 228) p_map_draw_mark (8, 14);
                else if (v_lvl == 229) p_map_draw_mark (8, 15);
                else if (v_lvl == 230) p_map_draw_mark (9, 15);
                else if (v_lvl == 231) p_map_draw_mark (7, 15);
        }
        else if ((v_region == 14) && (v_knr [12] == 1)) {
                set_win_tiles (8, 12, 5, 4, k_tempel_eg);

                if (v_lvl == 245) p_map_draw_mark (9, 15);
                else if (v_lvl == 246) p_map_draw_mark (10, 15); 
                else if (v_lvl == 247) p_map_draw_mark (11, 15);
                else if (v_lvl == 248) p_map_draw_mark (12, 15);
                else if (v_lvl == 249) p_map_draw_mark (9, 14);
                else if (v_lvl == 250) p_map_draw_mark (9, 13);
                else if (v_lvl == 251) p_map_draw_mark (8, 13);
                else if (v_lvl == 252) p_map_draw_mark (9, 12);
                else if (v_lvl == 253) p_map_draw_mark (10, 12);
                else if (v_lvl == 254) p_map_draw_mark (11, 12);
                else if (v_lvl == 255) p_map_draw_mark (11, 13);
                else if (v_lvl == 256) p_map_draw_mark (10, 13);
        }
        else if ((v_region == 14) && (v_knr [13] == 1)) {
                set_win_tiles (8, 12, 5, 3, k_tempel_kg);

                if (v_lvl == 260) p_map_draw_mark (12, 13);
                else if (v_lvl == 261) p_map_draw_mark (11, 13);
                else if (v_lvl == 262) p_map_draw_mark (11, 12);
                else if (v_lvl == 263) p_map_draw_mark (10, 12);
                else if (v_lvl == 264) p_map_draw_mark (9, 12);
                else if (v_lvl == 265) p_map_draw_mark (11, 14);
                else if (v_lvl == 266) p_map_draw_mark (10, 14);
                else if (v_lvl == 267) p_map_draw_mark (9, 14);
                else if (v_lvl == 268) p_map_draw_mark (10, 13);
                else if (v_lvl == 269) p_map_draw_mark (9, 13);
                else if (v_lvl == 270) p_map_draw_mark (8, 13);
        }
	else
	{
		set_win_tiles (4, 13, 11, 2, nomap);
	}

}
