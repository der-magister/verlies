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

//#pragma bank=21

#include "tiledat.h"

//Kolisionsdaten Felsengrund
const unsigned char v_kdat_1 [28] = { 46, 45, 37, 36, 31, 30, 29, 28, 22, 20, 21, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 0, 0, 0, 0, 0 };
const unsigned char v_kdat_3 [28] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 22, 36, 28, 29, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
const unsigned char v_kdat_4 [28] = { 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 22, 28, 29, 30, 31, 0, 0, 0, 0, 0, 0, 0 };

//Kolisionsdaten Stadtgefängnis
const unsigned char v_kdat_2 [28] = { 46, 45, 44, 43, 37, 36, 31, 29, 28, 27, 26, 25, 24, 22, 20, 21, 15, 14, 0,0,0,0,0,0,0,0,0,0 };

//Kolisiondaten Die großen Wiesen
const unsigned char v_kdat_5 [28] = { 4, 5, 6, 16, 17, 18, 19, 20, 21, 22, 24, 25, 26, 27, 28, 29, 30, 31, 36, 37, 45, 46, 0, 0, 0, 0, 0, 0 };

//Kolisionsdaten Ogerhöhlen
const unsigned char v_kdat_6 [28] = { 20, 21, 25, 26, 27, 36, 37, 43, 44, 45, 46, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

//Kolisionsdaten Feenseedorf und Feensee
const unsigned char v_kdat_feensee [28] = { 5, 16, 17, 18, 19, 20, 22, 21, 28, 29, 30, 31, 36, 37, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

//Kolisionsdate Eichenwald
const unsigned char v_kdat_eichenwald [28] = {37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 6, 4, 5 };

//Kolisionsdaten Alte Baum
const unsigned char v_kdat_alte_baum [28] = { 46, 45, 44, 43, 37, 36, 22, 21, 20, 7, 5, 4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

//Kolisionsdaten Gebirgspfad
const unsigned char v_kdat_gebirgspfad [19] = {3, 8, 9, 10, 11, 20, 21, 22, 24, 25, 28, 29, 30, 31, 36, 37, 45, 46, 23 };

//Kolisionsdaten Zwergenheim
const unsigned char v_kdat_zwergenheim [28] = {3, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 37, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

//Kolisionsdaten Mine EG
const unsigned char v_kdat_mine_eg [28] = { 3, 20, 21, 25, 26, 27, 28, 29, 30, 31, 36, 37, 43, 44, 45, 46, 0,0,0,0,0,0,0,0,0,0,0,0 };

//Mine TG1
const unsigned char v_kdat_mine_tg1 [28] = { 1, 3, 8, 9, 10, 11, 20, 21, 24, 25, 28, 29, 30, 31, 36, 37, 0,0,0,0,0,0,0,0,0,0,0,0 };

const unsigned char v_kdat_mine_tg2 [28] = { 3, 4, 5, 6, 7, 20, 21, 24, 25, 45, 46, 37, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

const unsigned char v_kdat_gipfelpfad [28] = { 3, 20, 21, 24, 28, 29, 30, 31, 37, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

//außer der reihe, da ein anderes tool testweise verwendet wurde
const unsigned char v_kdat_tempel_245 [28] = { 0, 5, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdat_tempel_246 [28] = { 0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdat_tempel_248 [28] = { 0, 1, 2, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdat_tempel_254 [28] = { 0, 5, 6, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdat_tempel_256 [28] = { 0, 0, 0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
//

//Tempel KG
const unsigned char v_kdat_tempel_kg [28] = { 20, 21, 24, 25, 26, 27, 28, 29, 30, 31, 37, 43, 44, 45, 46, 0,0,0,0,0,0,0,0,0,0,0,0,0 };
//Tempel E1
const unsigned char v_kdat_tempel_e1 [28] = { 2, 3, 20, 21, 24, 26, 27, 28, 29, 30, 31, 37, 43, 44, 45, 46, 0,0,0,0,0,0,0,0,0,0,0,0 };
//Tempel E2
const unsigned char v_kdat_tempel_e2 [28] = { 8, 9, 10, 11, 16, 17, 18, 19, 20, 21, 24, 45, 46, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

UINT8 p_spieler_koli (void) __banked
{
	for (v_a = 0; v_a != 28; ++v_a)
	{
                //felsengrund
		if (v_lvl == 1) {
                        if (v_tile [1] == v_kdat_1 [v_a]) return FALSE;
                }
                else if (v_lvl == 2) { 
                        if (v_tile [1] == v_kdat_3 [v_a]) return FALSE;
                }
                else if (v_lvl == 3) {
                        if (v_tile [1] == v_kdat_4 [v_a]) return FALSE;
                }
                
                //stadtgefängnis
                else if (v_region == 2) { 
                        if (v_tile [1] == v_kdat_2 [v_a]) return FALSE;
                }
                //die grossen wiesen
                else if (v_region == 3) {
                        if (v_tile [1] == v_kdat_5 [v_a]) return FALSE;
                }

                //ogerhöhle
                else if (v_region == 4) { 
                        if (v_tile [1] == v_kdat_6 [v_a]) return FALSE;
                }

                //Feenseedorf und Feensee
                else if ((v_region == 5) || (v_region == 6)) { 
                        if (v_tile [1] == v_kdat_feensee [v_a]) return FALSE;
                }

                //Eichenwald
		        if (v_region == 7) {
                        if (v_tile [1] == v_kdat_eichenwald [v_a]) return FALSE;
                }

                //Alte Baum
                if (v_region == 8) { 
                        if (v_tile [1] == v_kdat_alte_baum [v_a]) return FALSE;
                }

                //Gebirgspfad
                if (v_region == 9) {
                        if (v_tile [1] == v_kdat_gebirgspfad [v_a]) return FALSE;
                }

                //Zwergenheim
                else if ((v_lvl >= 185) && (v_lvl <= 187) && (v_tile [1] == v_kdat_zwergenheim [v_a])) return FALSE; 

                //Rotgebirge
                else if ((v_lvl >= 190) && (v_lvl <= 203)) { 
                        if (v_tile [1] == v_kdat_gebirgspfad [v_a]) return FALSE;
                }
                //Mine EG
                else if ((v_lvl >= 205) && (v_lvl <= 217)) {
                        if (v_tile [1] == v_kdat_mine_eg [v_a]) return FALSE;
                }
                //Mine TG1
                else if ((v_lvl >= 220) && (v_lvl <= 231)) {
                        if (v_tile [1] == v_kdat_mine_tg1 [v_a]) return FALSE;
                }
                //Mine TG2
                else if ((v_lvl >= 233) && (v_lvl <= 236)) {
                        if (v_tile [1] == v_kdat_mine_tg2 [v_a]) return FALSE;
                }
                //Gipfelpfad
                else if ((v_lvl >= 238) && (v_lvl <= 241)) {
                        if (v_tile [1] == v_kdat_gipfelpfad [v_a]) return FALSE;
                }
                //Tempel EG (außer der reihe, da ein anderes tool testweise verwendet wurde)
                else if ((v_lvl == 245) || (v_lvl ==  253)) {
                        if (v_tile [1] == v_kdat_tempel_245 [v_a]) return FALSE;
                }
                else if ((v_lvl == 246) || (v_lvl == 247) || (v_lvl == 249) || (v_lvl == 250) ||
                         (v_lvl == 252) || (v_lvl == 255)) { 
                                 if (v_tile [1] == v_kdat_tempel_246 [v_a]) return FALSE; 
                }
                else if (v_lvl == 248) { if (v_tile [1] == v_kdat_tempel_248 [v_a]) return FALSE; }
                else if (v_lvl == 251) { if (v_tile [1] == v_kdat_tempel_256 [v_a]) return FALSE; }
                else if (v_lvl == 254) { if (v_tile [1] == v_kdat_tempel_254 [v_a]) return FALSE; }
                else if (v_lvl == 256) { if (v_tile [1] == v_kdat_tempel_256 [v_a]) return FALSE; }

                //Tempel KG
                else if ((v_lvl >= 260) && (v_lvl <= 270)) {
                        if (v_tile [1] == v_kdat_tempel_kg [v_a]) return FALSE;
                }
                //Tempel E1 und E2
                else if ((v_lvl >= 275) && (v_lvl <= 287)) {
                        if (v_tile [1] == v_kdat_tempel_e1 [v_a]) return FALSE;
                }
                else if ((v_lvl >= 290) && (v_lvl <= 295)) {
                        if (v_tile [1] == v_kdat_tempel_e2 [v_a]) return FALSE;   
                }
        }
        return TRUE;
}
