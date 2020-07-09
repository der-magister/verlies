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

#pragma bank=9

#include "tiledat.h"

//Kolisionsdaten Felsengrund
const unsigned char v_kdat_1 [25] = {
	46, 45, 37, 36, 31, 30, 29, 28, 22, 20, 21, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 0, 0 };

const unsigned char v_kdat_3 [25] = {
        4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 22, 36, 28, 29, 30, 31, 0, 0, 0, 0, 0, 0, 0 };

const unsigned char v_kdat_4 [25] = {
        4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 22, 28, 29, 30, 31, 0, 0, 0, 0 };

//Kolisionsdaten Stadtgefängnis
const unsigned char v_kdat_2 [25] = {
        46, 45, 44, 43, 37, 36, 35, 34, 33, 32, 31, 32, 29, 28, 27, 26, 25, 24, 22, 20, 21, 15, 14, 0, 0 };



UINT8 p_spieler_koli () BANKED
{
	for (v_a = 0; v_a != 25; ++v_a)
	{
		if ((v_lvl == 1) && (v_tile [1] == v_kdat_1 [v_a])) return FALSE;
                if ((v_lvl == 2) && (v_tile [1] == v_kdat_3 [v_a])) return FALSE;
                if ((v_lvl == 3) && (v_tile [1] == v_kdat_4 [v_a])) return FALSE;
                if ((v_lvl >= 5) && (v_lvl <= 13) && (v_tile [1] == v_kdat_2 [v_a])) return FALSE;
		
        }
        return TRUE;
}
