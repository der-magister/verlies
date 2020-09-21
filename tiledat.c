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
//   Kontakt: magister@skywave-2000.de

//#pragma bank=9

#include "tiledat.h"

//Kolisionsdaten Felsengrund
const unsigned char v_kdat_1 [28] = { 46, 45, 37, 36, 31, 30, 29, 28, 22, 20, 21, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 0, 0, 0, 0, 0 };
const unsigned char v_kdat_3 [28] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 22, 36, 28, 29, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
const unsigned char v_kdat_4 [28] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 22, 28, 29, 30, 31, 0, 0, 0, 0, 0, 0, 0 };

//Kolisionsdaten Stadtgefängnis
const unsigned char v_kdat_2 [28] = { 46, 45, 44, 43, 37, 36, 35, 34, 33, 32, 31, 32, 29, 28, 27, 26, 25, 24, 22, 20, 21, 15, 14, 0, 0, 0, 0, 0 };

//Kolisiondaten Die großen Wiesen
const unsigned char v_kdat_5 [28] = { 4, 5, 6, 16, 17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 28, 29, 30, 31, 36, 37, 45, 46, 0, 0, 0, 0, 0, 0 };

//Kolisionsdaten Ogerhöhlen
const unsigned char v_kdat_6 [28] = { 20, 21, 25, 26, 27, 36, 37, 43, 44, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//Kolisionsdaten Feenseedorf und Feensee
const unsigned char v_kdat_feensee [28] = { 5, 16, 17, 18, 19, 20, 22, 21, 28, 29, 30, 31, 36, 37, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//Kolisionsdate Eichenwald
const unsigned char v_kdat_eichenwald [28] = { 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 6, 4, 5 };

//Kolisionsdaten Alte Baum
const unsigned char v_kdat_alte_baum [28] = { 46, 45, 44, 43, 37, 36, 22, 21, 20, 7, 5, 4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

//Kolisionsdaten Gebirgspfad
const unsigned char v_kdat_gebirgspfad [28] = { 3, 8, 9, 10, 11, 20, 21, 22, 24, 25, 28, 29, 30, 31, 36, 37, 45, 46, 23, 0,0,0,0,0,0,0,0,0 };

//Kolisionsdaten Zwergenheim
const unsigned char v_kdat_zwergenheim [28] = {3, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 37, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };


UINT8 p_spieler_koli () __banked
{
	for (v_a = 0; v_a != 28; ++v_a)
	{
                //felsengrund
		if ((v_lvl == 1) && (v_tile [1] == v_kdat_1 [v_a])) return FALSE;
                else if ((v_lvl == 2) && (v_tile [1] == v_kdat_3 [v_a])) return FALSE;
                else if ((v_lvl == 3) && (v_tile [1] == v_kdat_4 [v_a])) return FALSE;
                
                //stadtgefängnis
                else if ((v_lvl >= 5) && (v_lvl <= 13) && (v_tile [1] == v_kdat_2 [v_a])) return FALSE;

                //die grossen wiesen
                else if ((v_lvl >= 19) && (v_lvl < 40) && (v_tile [1] == v_kdat_5 [v_a])) return FALSE;
                else if ((v_lvl >= 70) && (v_lvl <= 79) && (v_tile [1] == v_kdat_5 [v_a])) return FALSE;
                else if ((v_lvl >= 16) && (v_lvl <= 18) && (v_tile [1] == v_kdat_5 [v_a])) return FALSE;
                else if ((v_lvl >= 80) && (v_lvl <= 83) && (v_tile [1] == v_kdat_5 [v_a])) return FALSE;
                else if ((v_lvl >= 84) && (v_lvl <= 87) && (v_tile [1] == v_kdat_5 [v_a])) return FALSE;

                //ogerhöhle
                else if ((v_lvl >= 40) && (v_lvl <= 66) && (v_tile [1] == v_kdat_6 [v_a])) return FALSE;

                //Feenseedorf und Feensee
                else if ((v_lvl >= 90) && (v_lvl <= 117) && (v_tile [1] == v_kdat_feensee [v_a])) return FALSE;

                //Eichenwald
		else if ((v_lvl >= 120) && (v_lvl <= 143) && (v_tile [1] == v_kdat_eichenwald [v_a])) return FALSE;

                //Alte Baum
                else if ((v_lvl >= 145) && (v_lvl <= 166) && (v_tile [1] == v_kdat_alte_baum [v_a])) return FALSE;

                //Gebirgspfad
                else if ((v_lvl >= 168) && (v_lvl <= 179) && (v_tile [1] == v_kdat_gebirgspfad [v_a])) return FALSE;

                //Zwergenheim
                else if ((v_lvl >= 185) && (v_lvl <= 187) && (v_tile [1] == v_kdat_zwergenheim [v_a])) return FALSE; 

                //Rotgebirge
                else if ((v_lvl >= 190) && (v_lvl <= 203) && (v_tile [1] == v_kdat_gebirgspfad [v_a])) return FALSE;

        }
        return TRUE;
}

