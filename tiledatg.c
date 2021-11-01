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

//#pragma bank=13

#include "tiledatg.h"

///beinhaltet Tile die eine Kolision beim Gegner auslösen
const unsigned char v_kdatg_1 [4] = { 22, 23, 39, 41 };
const unsigned char v_kdatg_2 [20] = { 5, 6, 9, 10, 11, 22, 24, 25, 26, 27, 28, 29, 30, 31, 36, 37, 39, 49, 41, 42 };
const unsigned char v_kdatg_3 [19] = { 8, 9, 10, 11, 20, 21, 25, 26, 27, 32, 33, 34, 35, 39, 40, 41, 42, 43, 44  };
const unsigned char v_kdatg_4 [9] = { 5, 20, 21, 32, 33, 34, 36, 36, 37 };
const unsigned char v_kdatg_5 [20] = { 4, 5, 6, 8, 9, 10, 11, 20, 21, 22, 24, 25, 26, 27, 28, 29, 30, 31, 36, 37 };
const unsigned char v_kdatg_alte_baum [20] = { 46, 45, 44, 43, 37, 36, 22, 21, 20, 19, 18, 17, 16, 7, 5, 4, 12, 13 ,14, 15 };
const unsigned char v_kdatg_gebirgspfad [13] = { 3, 4, 5, 6, 7, 20, 21, 22, 23, 25, 37, 45, 46};
const unsigned char v_kdatg_zwergenheim [15]  = { 3, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 24, 37, 45, 46};
const unsigned char v_kdatg_mine_1 [20] = { 3, 8, 9, 10, 11, 20, 21, 25, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 45, 46 };
const unsigned char v_kdatg_mine_2 [14] = { 3, 8, 9, 10, 11, 20, 21, 24, 25, 32, 33, 34, 35, 37 };

//außer der reihe, da ein anderes tool testweise verwendet wurde
const unsigned char v_kdatg_tempel_245 [28] = { 0, 5, 1, 2, 4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdatg_tempel_246 [28] = { 0, 2, 4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdatg_tempel_248 [28] = { 0, 1, 2, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdatg_tempel_249 [28] = { 0, 1, 2, 4, 5, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }; 
const unsigned char v_kdatg_tempel_250 [28] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
const unsigned char v_kdatg_tempel_254 [28] = { 0, 5, 6, 45, 46 ,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };

const unsigned char v_kdatg_tempel_kg [28] = { 12, 13, 14, 15, 20, 21, 24, 25, 26, 27, 28, 29, 30, 31, 37, 39, 40, 41, 42, 43, 44, 45, 46, 0,0,0,0,0 };
const unsigned char v_kdatg_tempel_e1 [28] = { 2, 3, 4, 5, 6, 7, 12, 13, 14, 15, 20, 21, 24, 26, 27, 37, 39, 40, 41, 42, 43, 44, 45, 46, 0,0,0,0};


UINT8 p_gegner_koli (void) __banked
{
	    //Stadtgefängnis
        if (v_region == 2) {
                for (v_a = 0; v_a != sizeof (v_kdatg_1) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_1 [v_a]) return FALSE;
                }
        }
        //Wiesen
        else if (v_region == 3) {
                for (v_a = 0; v_a != sizeof (v_kdatg_2) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_2 [v_a]) return FALSE;
                }
        }
        //Ogerhöhlen
        else if (v_region == 4) {
                for (v_a = 0; v_a != sizeof (v_kdatg_3) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_3 [v_a]) return FALSE;
                }
        }
                
        //Feensee
        else if (v_region == 6) {
                for (v_a = 0; v_a != sizeof (v_kdatg_4) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_4 [v_a]) return FALSE;
                }
        }
        //Eichenwald
        else if (v_region == 7) {
                for (v_a = 0; v_a != sizeof (v_kdatg_5) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_5 [v_a]) return FALSE;
                }
        }

        //Alte Baum
        else if (v_region == 8) {
                for (v_a = 0; v_a != sizeof (v_kdatg_alte_baum) + 1; ++v_a) { 
                        if (v_tile [2] == v_kdatg_alte_baum [v_a]) return FALSE;
                }
        }
        //Gebirgspfad und Rotgebirge
        else if ((v_region == 9) || (v_region == 11)) {
            for (v_a = 0; v_a != sizeof (v_kdatg_gebirgspfad) + 1; ++v_a) {
                if (v_tile [2] == v_kdatg_gebirgspfad [v_a]) return FALSE;
            }
        } 
        //Mine EG1
        else if (v_region == 12) {

            if (v_lvl < 218) {
                for (v_a = 0; v_a != sizeof (v_kdatg_mine_1) + 1; ++v_a) {
                    if (v_tile [2] == v_kdatg_mine_1 [v_a]) return FALSE;
                }   
            }
            else if (v_lvl > 219) {
                for (v_a = 0; v_a != sizeof (v_kdatg_mine_2) + 1; ++v_a) {
                    if (v_tile [2] == v_kdatg_mine_2 [v_a]) return FALSE;
                }    

            }
        }
        //Gebirgspfad
        else if (v_region == 13) {
                for (v_a = 0; v_a != sizeof (v_kdatg_gebirgspfad) + 1; ++v_a) {
                        if (v_tile [2] == v_kdatg_gebirgspfad [v_a]) return FALSE;
                }
        }

        //Tempel EG (außer der reihe, da ein anderes tool testweise verwendet wurde)
                /*else if ((v_lvl == 245) || (v_lvl ==  253)) {
                        if (v_tile [2] == v_kdatg_tempel_245 [v_a]) return FALSE;
                }
                else if ((v_lvl == 246) || (v_lvl == 247) ||
                         (v_lvl == 251) || (v_lvl == 252) || (v_lvl == 255) || (v_lvl == 256)) { 
                                 if (v_tile [2] == v_kdatg_tempel_246 [v_a]) return FALSE; 
                }
                else if (v_lvl == 248) { if (v_tile [2] == v_kdatg_tempel_248 [v_a]) return FALSE; }
                else if (v_lvl == 249) { if (v_tile [2] == v_kdatg_tempel_249 [v_a]) return FALSE; }
                else if (v_lvl == 250) { if (v_tile [2] == v_kdatg_tempel_249 [v_a]) return FALSE; }
                else if (v_lvl == 254) { if (v_tile [2] == v_kdatg_tempel_254 [v_a]) return FALSE; }*/

                //Tempel KG
                /*else if ((v_lvl >= 260) && (v_lvl <= 270)) {
                    if (v_tile [2] == v_kdatg_tempel_kg [v_a]) return FALSE; 
                }*/
                //Tempel E1
                /*else if ((v_lvl >= 275) && (v_lvl <= 287)) {
                        if (v_tile [2] == v_kdatg_tempel_e1 [v_a]) return FALSE;
                }*/
        //}
        return TRUE;
}
