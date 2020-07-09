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

#pragma bank=13

#include "tiledatg.h"

///beinhaltet Tile die eine Kolision beim Gegner auslösen, Zeile = Level, Spalten = Kolisionstile (max.25)
const unsigned char kdatg [9][25] = 
{
	{2, 11, 12, 13, 14, 15, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 36, 37, 38, 0, 0}, //1
	{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //2
	{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //3
	{00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //4
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //5
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //6
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //7
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //8
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00} //9
};

/*void p_gegner_koli () BANKED
{
        for (v_j = 0; v_j != 25; ++v_j)
        {
                if (v_tile [2] == kdatg [v_lvl - 1][v_j]) 
                { 

                        //return 0;
                        gwalk = 0; 
                }
                else
                {
                        gwalk = 1;
                }
        }
}*/

UINT8 p_gegner_koli () BANKED
{
        if (v_lvl == 5)
        {
                if ((v_tile [2] == 20) || (v_tile [2] == 21) || (v_tile [2] == 22) || (v_tile [2] == 23) ||
                    (v_tile [2] == 26) || (v_tile [2] == 27) || (v_tile [2] == 33) || (v_tile [2] == 34) || 
                    (v_tile [2] == 35) || (v_tile [2] == 36) || (v_tile [2] == 37) || (v_tile [2] == 18) || 
                    (v_tile [2] == 19) || (v_tile [2] == 24) || (v_tile [2] == 25))
                {
                        return FALSE;
                }
                
        }
        else if (v_lvl == 6)
        {
                if (v_tile [2] == 37)
                {
                        return FALSE;
                }
        }
        else if (v_lvl == 7)
        {
                if (v_tile [2] == 37)
                {
                        return FALSE;
                }
        }
        else if (v_lvl == 8)
        {
                if (v_tile [2] == 37)
                {
                        return FALSE;
                }
        }
        else if (v_lvl == 9)
        {
                if ((v_tile [2] == 30) || (v_tile [2] == 32) || (v_tile [2] == 37))
                {
                        return FALSE;
                }
        }
        else if (v_lvl == 10)
        {
                if ((v_tile [2] == 21) || (v_tile [2] == 23) || (v_tile [2] == 37)) { return FALSE; }
        }
        else if (v_lvl == 11)
        {
                if ((v_tile [2] == 17) || (v_tile [2] == 26) || (v_tile [2] == 37)) { return FALSE; }
        }
        else if (v_lvl == 12)
        {
                if (v_tile [2] == 37)
                {
                        return FALSE;
                }
        }
        return TRUE;
}
