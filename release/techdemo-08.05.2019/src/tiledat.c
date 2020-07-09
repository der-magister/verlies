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

///beinhaltet Tile die eine Kolision ausloesen, Zeile = Level, Spalten = Kolisionstile (max.25)
const unsigned char v_kdat [9][25] = 
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

UINT8 p_spieler_koli () BANKED
{
        //switch (v_lvl)
        //{
                if (v_lvl == 1)
                {
                        if ((v_tile [1] == 2) || (v_tile [1] == 11) || (v_tile [1] == 12) || (v_tile [1] == 13) ||  
                            (v_tile [1] == 14) || (v_tile [1] == 15) || (v_tile [1] == 20) || (v_tile [1] == 21) || 
                            (v_tile [1] == 22) || (v_tile [1] == 23) || (v_tile [1] == 24) || (v_tile [1] == 25) || 
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 28) || (v_tile [1] == 29) || 
                            (v_tile [1] == 30) || (v_tile [1] == 31) || (v_tile [1] == 32) || (v_tile [1] == 33) || 
                            (v_tile [1] == 36) || (v_tile [1] == 37) || (v_tile [1] == 38))
                        {
                                return FALSE;
                        }
                }
                else if (v_lvl == 5)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) || 
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37) || (v_tile [1] == 18) || 
                            (v_tile [1] == 19) || (v_tile [1] == 24) || (v_tile [1] == 25))
                        {
                                return FALSE;
                        }
                }
                else if (v_lvl == 6)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37))
                        {
                                return FALSE;
                        }
                }
                else if (v_lvl == 7)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37) || (v_tile [1] == 18) ||
                            (v_tile [1] == 19) || (v_tile [1] == 24) || (v_tile [1] == 25))
                        {
                                return FALSE;
                        }
                }
                else if (v_lvl == 8)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37))
                        {
                                return FALSE;
                        }
                }
                else if (v_lvl == 9)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37) || (v_tile [1] == 18) ||
                            (v_tile [1] == 19) || (v_tile [1] == 24) || (v_tile [1] == 25))
                        {
                                return FALSE; 
                        }
                }
                else if (v_lvl == 10)
                {
                        if ((v_tile [1] == 20) || (v_tile [1] == 21) || (v_tile [1] == 22) || (v_tile [1] == 23) ||
                            (v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37) || (v_tile [1] == 12) ||
                            (v_tile [1] == 13) || (v_tile [1] == 14) || (v_tile [1] == 15))
                        {
                                return FALSE; 
                        }
                }
                else if (v_lvl == 11)
                {
                        if ((v_tile [1] == 26) || (v_tile [1] == 27) || (v_tile [1] == 33) || (v_tile [1] == 34) ||
                            (v_tile [1] == 35) || (v_tile [1] == 36) || (v_tile [1] == 37)) 
                        {
			        return FALSE; 
		        }
                }
                else if (v_lvl == 12)
                {
		        if ((v_tile [1] == 18) || (v_tile [1] == 19) || (v_tile [1] == 24) || (v_tile [1] == 25) || 
		            (v_tile [1] == 37))
		        {
			        return FALSE;
                        } 
		}
                else if (v_lvl == 13)
                {
		        if ((v_tile [1] == 8) || (v_tile [1] == 9) || (v_tile [1] == 10) || (v_tile [1] == 11) ||
		            (v_tile [1] == 37))
		        {
			        return FALSE; 
		        }
                }
                return TRUE;
        
}
