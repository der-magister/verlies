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

//#pragma bank=20

#include "lvlgegner.h"
#include "gegner.h"

//lvl, anzahl, position
/*const UINT8 table_gegner [1][2] = {
        { 2, 0 },
};

const UINT8 table_gegner_dat [2][7] = {

        { 48, 48, 104, 96, MOVE_NORTH, 2, 2 }, //lvl 205
        { 48, 48, 80, 40, MOVE_NORTH, 2, 2}

}; 

void p_gegner_set_table (void) __banked
{
        UINT8 l_anzahl, l_pos;

        l_anzahl = table_gegner [0][0]; l_pos = table_gegner [0][1];

        for (v_i = 0; v_i <= l_anzahl + 1; ++v_i) { 
                p_gegner_set (v_i, table_gegner_dat [l_pos + v_i][0], table_gegner_dat [l_pos + v_i][1], table_gegner_dat [l_pos + v_i][2], table_gegner_dat [l_pos + v_i][3], 
                              table_gegner_dat [l_pos + v_i][4], table_gegner_dat [l_pos + v_i][5], table_gegner_dat [l_pos + v_i][6]);
        }
}*/

///Gegnerinformationen
void p_set_gegner (void) __banked
{
        v_gspeed = 65;

        if (v_lvl == 5)
        {
            v_gspeed = 75;
		p_gegner_set (0, 0, 4, 120, 72, MOVE_NORTH, 1, 1);
	        p_gegner_set (1, 16, 16, 40, 48, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 6)
        {
                p_gegner_set (0, 0, 4, 48, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 16, 16, 136, 72, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 7)
        {
                p_gegner_set (0, 16, 16, 24, 40, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 8)
        {
                p_gegner_set (0, 0, 4, 24, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 0, 4, 120, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 9)
        {
                p_gegner_set (0, 16, 16, 72, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 0, 4, 120, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 0, 4, 24, 32, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 10) { p_gegner_set (0, 16, 16, 120, 72, MOVE_NORTH, 2, 1); }
        else if (v_lvl == 11)
        {
                p_gegner_set (0, 8, 12, 24, 104, MOVE_EAST, 1, 1);
		p_gegner_set (1, 16, 16, 80, 72, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 12) { p_gegner_set (0, 8, 12, 96, 64, MOVE_WEST, 1, 1); }
        else if (v_lvl == 16) {
            p_gegner_set (0, 24, 24, 24, 104, MOVE_EAST, 1, 1);
            p_gegner_set (1, 44, 44, 128, 32, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 17) {
                p_gegner_set (0, 20, 20, 136, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 24, 24, 72, 48, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 18) {
                p_gegner_set (1, 20, 20, 56, 80, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 20)
        {
                v_gspeed = 60;
                p_gegner_set (0, 24, 24, 136, 32, MOVE_WEST, 1, 1);
                p_gegner_set (1, 8, 12, 88, 64, MOVE_EAST, 1, 1);
                p_gegner_set (2, 20, 20, 88, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 21)
        {
                p_gegner_set (0, 24, 24, 88, 64, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 20, 20, 136, 48, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 20, 20, 40, 112, MOVE_NORTH, 1, 1);

        }
        else if (v_lvl == 22)
        {
                p_gegner_set (0, 24, 24, 64, 64, MOVE_EAST, 1 ,1);
                p_gegner_set (1, 20, 20, 104, 96, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 23) { p_gegner_set (0, 8, 12, 64, 64, MOVE_EAST, 1, 1); }
        else if (v_lvl == 24)
        {
                p_gegner_set (0, 24, 24, 24, 40, MOVE_EAST, 1, 1);
                p_gegner_set (1, 20, 20, 96, 64, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 25)
        {
                p_gegner_set (0, 24, 24, 112, 40, MOVE_EAST, 1, 1);
                p_gegner_set (1, 0, 4, 88, 96, MOVE_NORTH, 1, 1);
                p_gegner_set (2, 24, 24, 80, 40, MOVE_WEST, 1, 1);             
        }
        else if (v_lvl == 26)
        {
                p_gegner_set (0, 0, 4, 128, 48, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 24, 24, 24, 40, MOVE_SOUTH, 1, 2);
        }
        else if (v_lvl == 27) { p_gegner_set (0, 28, 32, 128, 64, MOVE_NORTH, 1, 1); }
        else if (v_lvl == 28)
        {
               p_gegner_set (0, 24, 24, 120, 96, MOVE_WEST, 1, 2);
               p_gegner_set (1, 24, 24, 80, 104, MOVE_SOUTH, 1, 2); 
        }
        else if (v_lvl == 29)
        {
                p_gegner_set (0, 28, 32, 32, 56, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 20, 20, 128, 96, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 31) { p_gegner_set (0, 8, 12, 104, 104, MOVE_EAST, 1, 3); }
        else if (v_lvl == 30) { p_gegner_set (0, 24, 24, 80, 80, MOVE_NORTH, 1, 1); }
        else if (v_lvl == 32) { p_gegner_set (0, 24, 24, 56, 72, MOVE_EAST, 1, 1); }
        else if (v_lvl == 33) { p_gegner_set (0, 28, 32, 80, 88, MOVE_NORTH, 1, 1); }
        else if (v_lvl == 34) 
        { 
                p_gegner_set (0, 24, 24, 136, 32, MOVE_WEST, 1, 1);
                p_gegner_set (1, 20, 20, 96, 112, MOVE_EAST, 1, 1); 
        }
        else if (v_lvl == 35) { p_gegner_set (0, 44, 44, 104, 112, MOVE_EAST, 1, 1); }  
        else if (v_lvl == 36)
        {
                p_gegner_set (0, 44, 44, 120, 40, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 44, 44, 32, 96, MOVE_NORTH, 2, 1);
        }
        else if (v_lvl == 37)
        {
                p_gegner_set (0, 44, 44, 136, 32, MOVE_WEST, 1, 1);
                p_gegner_set (1, 44, 44, 32, 96, MOVE_EAST, 1, 1);

        }
        else if (v_lvl == 38)
        {
            p_gegner_set (0, 20, 20, 56, 112, MOVE_NORTH, 1, 1);
            p_gegner_set (1, 20, 20, 120, 32, MOVE_SOUTH, 1, 1); 
        }
        else if (v_lvl == 40) { p_gegner_set (0, 44, 44, 32, 72, MOVE_EAST, 1, 2); }
        else if (v_lvl == 41)
        {
                p_gegner_set (0, 48, 48, 80, 32, MOVE_WEST, 1, 2);
                p_gegner_set (1, 44, 44, 24, 104, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 42)
        {
                p_gegner_set (0, 44, 44, 104, 40, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 4, 0, 40, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 43)
        {
                p_gegner_set (0, 48, 48, 136, 40, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 44, 44, 80, 112, MOVE_WEST, 1, 1);
                p_gegner_set (2, 44, 44, 24, 32, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 44) { p_gegner_set (0, 44, 44, 128, 40, MOVE_WEST, 1, 2); }
        else if (v_lvl == 45)
        {
                p_gegner_set (0, 20, 20, 80, 104, MOVE_WEST, 1, 1);
                p_gegner_set (1, 44, 44, 32, 40, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 46)
        {
                p_gegner_set (0, 44, 44, 112, 112, MOVE_NORTH, 1, 2);
                p_gegner_set (1, 44, 44, 40, 56, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 47)
        {
                p_gegner_set (0, 48, 48, 24, 40, MOVE_EAST, 1, 1);
                p_gegner_set (1, 44, 44, 88, 104, MOVE_WEST, 1, 2);
        }
        else if (v_lvl == 48)
        {
                p_gegner_set (0, 44, 44, 56, 112, MOVE_EAST, 1, 1);
                p_gegner_set (1, 44, 44, 136, 48, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 49)
        {
                p_gegner_set (0, 20, 20, 56, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 44, 44, 120, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 52)
        {
                p_gegner_set (0, 44, 44, 40, 112, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 44, 44, 128, 72, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 53) { p_gegner_set (0, 48, 48, 136, 88, MOVE_SOUTH, 1, 1); }

        else if (v_lvl == 54)
        {
                p_gegner_set (0, 44, 44, 136, 48, MOVE_WEST, 1, 1);
                p_gegner_set (1, 44, 44, 24, 96, MOVE_EAST, 1, 1);
        }

        else if (v_lvl == 56)
        {
                p_gegner_set (0, 20, 20, 24, 40, MOVE_EAST, 1, 1);
                p_gegner_set (1, 44, 44, 112, 96, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 57)
        {
                p_gegner_set (0, 48, 48, 24, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (0, 20, 20, 96, 72, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 58)
        {
                p_gegner_set (0, 44, 44, 112, 32, MOVE_WEST, 1, 2);
                p_gegner_set (1, 44, 44, 24, 112, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 59) { p_gegner_set (0, 20, 20, 88, 104, MOVE_WEST, 1, 1); }
        else if (v_lvl == 61) { p_gegner_set (0, 44, 44, 48, 80, MOVE_NORTH, 1, 2); }
        else if (v_lvl == 63) { p_gegner_set (0, 48, 48, 80, 32, MOVE_EAST, 1, 1); }
        else if (v_lvl == 64) 
        { 
                p_gegner_set (0, 44, 44, 104, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 44, 44, 40, 88, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 78)
        {
                p_gegner_set (0, 44, 44, 80, 72, MOVE_EAST, 2, 1);
                p_gegner_set (1, 20, 20, 136, 32, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 79) { p_gegner_set (0, 44, 44, 72, 80, MOVE_EAST, 2, 1); }        
        else if (v_lvl == 15) { p_gegner_set (0, 48, 48, 104, 32, MOVE_SOUTH, 1, 2); }
        else if (v_lvl == 70)
        {
                p_gegner_set (0, 20, 20, 136, 48, MOVE_WEST, 1, 1);
                p_gegner_set (1, 20, 20, 32, 88, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 72)
        {
                p_gegner_set (0, 24, 24, 72, 88, MOVE_NORTH, 1, 2);
                p_gegner_set (1, 20, 20, 112, 48, MOVE_EAST, 1, 1);
                p_gegner_set (2, 24, 24, 64, 112, MOVE_WEST, 2, 1);
        }
        else if (v_lvl == 73)
        {
                p_gegner_set (0, 24, 24, 96, 72, MOVE_WEST, 2, 1);
                p_gegner_set (1, 20, 20, 136, 40, MOVE_WEST, 1, 1);
                p_gegner_set (2, 20, 20, 24, 112, MOVE_EAST, 1, 1 );
        }
        else if (v_lvl == 74) { p_gegner_set (0, 24, 24, 96, 48, MOVE_SOUTH, 2, 1); }
        else if (v_lvl == 76) {
                p_gegner_set (0, 24, 24, 120, 72, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 20, 20, 32, 64, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 80) {
                p_gegner_set (0, 44, 44, 24, 48, MOVE_EAST, 2, 2);
                p_gegner_set (1, 44, 44, 104, 64, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 81) {
                p_gegner_set (0, 20, 20, 112, 112, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 20, 20, 96, 56, MOVE_WEST, 2, 1);
        }
        else if (v_lvl == 84) {
                p_gegner_set (0, 24, 24, 112, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 24, 24, 24, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 24, 24, 80, 40, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 85) {
                p_gegner_set (0, 20, 20, 136, 104, MOVE_WEST, 2, 1);
                p_gegner_set (1, 24, 24, 24, 32, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 95) p_gegner_set (0, 68, 68, 48, 48, MOVE_EAST, 1, 1);
        else if (v_lvl == 96) p_gegner_set (0, 72, 72, 64, 56, MOVE_EAST, 1, 1);
        else if (v_lvl == 97)
        { 
                p_gegner_set (0, 68, 68, 104, 104, MOVE_NORTH, 1, 2);
                p_gegner_set (1, 72, 72, 136, 48, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 98)
        {
                p_gegner_set (0, 68, 68, 64, 96, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 68, 68, 120, 32, MOVE_SOUTH, 2, 1);
        }
        else if (v_lvl == 99)
        {
                p_gegner_set (0, 68, 68, 120, 96, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 72, 72, 24, 40, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 100)
        {
                p_gegner_set (0, 72, 72, 40, 72, MOVE_EAST, 2, 1);
                p_gegner_set (1, 72, 72, 120, 72, MOVE_WEST, 2, 1);
        }
        else if (v_lvl == 101)
        {
                p_gegner_set (0, 68, 68, 104, 40, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 72, 72, 88, 72, MOVE_WEST, 2, 2);
                p_gegner_set (2, 72, 72, 120, 72, MOVE_EAST, 2, 1);
        }
        else if (v_lvl == 102) { p_gegner_set (0, 68, 68, 72, 96, MOVE_NORTH, 2, 2); }
        else if (v_lvl == 104) p_gegner_set (0, 72, 72, 32, 80, MOVE_EAST, 1, 1);
        else if (v_lvl == 105)
        {
                p_gegner_set (0, 72, 72, 24, 48, MOVE_EAST, 2, 2);
                p_gegner_set (1, 68, 68, 128, 72, MOVE_SOUTH, 2, 1);
                p_gegner_set (2, 72, 72, 80, 112, MOVE_WEST, 2, 1);
        }
        else if (v_lvl == 106)
        {
                p_gegner_set (0, 48, 48, 120, 56, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 72, 72, 48, 80, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 107) { p_gegner_set (0, 72, 72, 80, 72, MOVE_EAST, 3, 2); }
        else if (v_lvl == 108)
        {
                p_gegner_set (0, 68, 68, 112, 56, MOVE_SOUTH, 2, 1);
                p_gegner_set (1, 68, 68, 48, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 109)
        {
                p_gegner_set (0, 72, 72, 136, 40, MOVE_WEST, 2, 1);
                p_gegner_set (1, 68, 68, 40, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 111)
        {
                p_gegner_set (0, 72, 72, 80, 96, MOVE_WEST, 2, 2);
                p_gegner_set (1, 68, 68, 136, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (2, 72, 72, 112, 32, MOVE_EAST, 2, 1);
        }
        else if (v_lvl == 113)
        {
                p_gegner_set (0, 48, 48, 128, 88, MOVE_WEST, 2, 1);
                p_gegner_set (1, 72, 72, 48, 40, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 115)
        {
                p_gegner_set (0, 68, 68, 104, 96, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 72, 72, 128, 96, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 120)
        {
                p_gegner_set (0, 20, 20, 32, 72, MOVE_EAST, 2, 2);
                p_gegner_set (1, 76, 76, 88, 72, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 121)
        {
                p_gegner_set (0, 64, 64, 128, 72, MOVE_WEST, 3, 2);
                p_gegner_set (1, 48, 48, 32, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 24, 24, 120, 104, MOVE_NORTH, 3, 2);
        }
        else if (v_lvl == 123)
        {
                p_gegner_set (0, 20, 20, 32, 72, MOVE_EAST, 2, 2);
                p_gegner_set (1, 76, 76, 128, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (2, 20, 20, 112, 104, MOVE_WEST, 2, 1);
        }
        else if (v_lvl == 124)
        {
                p_gegner_set (0, 76, 76, 64, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 24, 24, 128, 56, MOVE_WEST, 3, 2);
        }
        else if (v_lvl == 125)
        {
                p_gegner_set (0, 20, 20, 32, 88, MOVE_EAST, 2, 2);
                p_gegner_set (1, 48, 48, 112, 40, MOVE_WEST, 3, 2);
        }
        else if (v_lvl == 127)
        {
                p_gegner_set (0, 76, 76, 96, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 64, 64, 32, 104, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 129)
        {
                p_gegner_set (0, 20, 20, 32, 40, MOVE_EAST, 2, 2);
                p_gegner_set (1, 24, 24, 128, 88, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 130) { p_gegner_set (0, 64, 64, 48, 56, MOVE_SOUTH, 2, 2); }
        else if (v_lvl == 131) 
        {
                p_gegner_set (0, 24, 24, 72, 56, MOVE_EAST, 2, 2);
                p_gegner_set (1, 20, 20, 32, 104, MOVE_NORTH, 2, 1);
        }
        else if (v_lvl == 132)
        {
                p_gegner_set (0, 76, 76, 64, 72, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 20, 20, 128, 64, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 133)
        {
                p_gegner_set (0, 24, 24, 112, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 20, 20, 32, 88, MOVE_EAST, 2, 1);
                p_gegner_set (2, 20, 20, 80, 56, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 134)
        {
                p_gegner_set (0, 20, 20, 112, 56,  MOVE_WEST, 2, 2);
                p_gegner_set (1, 76, 76, 96, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 64, 64, 48, 40, MOVE_SOUTH, 1, 2);
        }
        else if (v_lvl == 135)
        {
                p_gegner_set (0, 64, 64, 64, 56, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 76, 76, 128, 104, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 136)
        {
                p_gegner_set (0, 24, 24, 64, 88, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 76, 76, 128, 56, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 139)
        {
                p_gegner_set (0, 64, 64, 48, 40, MOVE_SOUTH, 2, 1);
                p_gegner_set (1, 76 ,76, 120, 104, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 140)
        {
                p_gegner_set (0, 20, 20, 88, 56, MOVE_EAST, 2, 2);
                p_gegner_set (1, 64, 64, 48, 104, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 142)
        {
                p_gegner_set (0, 76, 76, 32, 88, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 64, 64, 112, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 24, 24, 48, 104, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 145)
        {
                v_gspeed = 60;
                p_gegner_set (0, 88, 84, 128, 64, MOVE_DOWN, 125, 1);
                p_gegner_set (1, 60, 60, 80, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 60, 60, 32, 32, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 146)
        {
                p_gegner_set (0, 48, 48, 104, 72, MOVE_WEST, 2, 2);
                p_gegner_set (1, 64, 64, 32, 96, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 48, 48, 128, 48, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 147)
        {
                p_gegner_set (0, 88, 84, 32, 64, MOVE_DOWN, 125, 1);
                p_gegner_set (1, 48, 48, 136, 104, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 148)
        {
                p_gegner_set (0, 88, 84, 32, 56, MOVE_DOWN, 125, 1);
                p_gegner_set (1, 88, 84, 128, 88, MOVE_DOWN, 125, 1);
        }
        else if (v_lvl == 149)
        {
                p_gegner_set (0, 88, 84, 128, 56, MOVE_DOWN, 125, 1);
                p_gegner_set (1, 64, 64, 48, 104, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 150)
        {
                p_gegner_set (0, 4, 0, 40, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 20, 20, 104, 72, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 151)
        {
                p_gegner_set (0, 48, 48, 136, 80, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 152)
        {
                
        }
        else if (v_lvl == 153)
        {
                p_gegner_set (0, 60, 60, 32, 40, MOVE_EAST, 2, 2);
                p_gegner_set (1, 80, 80, 128, 96, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 154)
        {
                p_gegner_set (0, 88, 84, 128, 88, MOVE_DOWN, 125, 1);
        }
        else if (v_lvl == 155)
        {
                p_gegner_set (0, 48, 48, 120, 40, MOVE_WEST, 2, 2);
                p_gegner_set (1, 20, 20, 56, 80, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 156)
        {
                p_gegner_set (0, 48, 48, 24, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 20, 20, 128, 64, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 48, 48, 80, 32, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 157)
        {
                p_gegner_set (0, 60, 60, 56, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 60, 60, 120, 32, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 159)
        {
                p_gegner_set (0, 20, 20, 136, 40, MOVE_EAST, 2, 2);     
        }
        else if (v_lvl == 160)
        {
                p_gegner_set (0, 60, 60, 32, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 80, 80, 128, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 20, 20, 96, 72, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 161)
        {
                p_gegner_set (0, 64, 64, 72, 56, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 80, MOVE_DOWN, 125, 1);
                p_gegner_set (2, 48, 48, 136, 80, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 163)
        {
                p_gegner_set (0, 48, 48, 72, 72, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 168)
        {
                v_gspeed = 75;
                p_gegner_set (0, 92, 92, 40, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 92, 92, 112, 32, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 169)
        {
                p_gegner_set (0, 96, 96, 88, 72, MOVE_EAST, 2, 1);
                p_gegner_set (1, 92, 92, 56, 40, MOVE_SOUTH, 1, 2);
                p_gegner_set (2, 96, 96, 96, 96, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 170)
        {
                p_gegner_set (0, 44, 44, 136, 64, MOVE_WEST, 2, 2);
                p_gegner_set (1, 20, 20, 24, 104, MOVE_EAST, 1, 2);
        }
        else if (v_lvl == 171) { p_gegner_set (0, 92, 92, 104, 40, MOVE_WEST, 2, 2); }
        else if (v_lvl == 172)
        {
                p_gegner_set (0, 96, 96, 32, 112, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 44, 44, 80, 72, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 96, 96, 120, 32, MOVE_SOUTH, 2, 1);
        }
        else if (v_lvl == 173) { p_gegner_set (0, 44, 44, 32, 72, MOVE_EAST, 2, 1); }
        else if (v_lvl == 174) {
                p_gegner_set (0, 48, 48, 136, 80, MOVE_NORTH, 2, 1);
                p_gegner_set (1, 48, 48, 80, 80, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 48, 48, 56, 40, MOVE_WEST, 1, 2);
        }
        else if (v_lvl == 175) {
                p_gegner_set (0, 92, 92, 136, 96, MOVE_WEST, 2, 2);
                p_gegner_set (1, 96, 96, 32, 56, MOVE_EAST, 2, 1);
                p_gegner_set (2, 96, 96, 96, 32, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 176) { p_gegner_set (0, 44, 44, 56, 56, MOVE_EAST, 1, 2); }
        else if (v_lvl == 177) {
                p_gegner_set (0, 20, 20, 104, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 44, 44, 40, 88, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 178) {
                v_gspeed = 75; 
                p_gegner_set (0, 96, 96, 32, 32, MOVE_SOUTH, 2,2); 
        }
        else if (v_lvl == 190) {
                v_gspeed = 70;
                p_gegner_set (0, 92, 92, 136, 96, MOVE_WEST, 2, 2);
                p_gegner_set (1, 92, 92, 24, 48, MOVE_EAST, 2, 2); 
        }
        else if (v_lvl == 191) {
                p_gegner_set (0, 76, 76, 136, 40, MOVE_WEST, 2, 2);
                p_gegner_set (1, 96, 96, 24, 96, MOVE_EAST, 2, 2);
                p_gegner_set (2, 92, 92, 136, 96, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 192) {
                p_gegner_set (0, 20, 20, 136, 88, MOVE_WEST, 2, 1);
                p_gegner_set (1, 24, 24, 32, 64, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 193) {
                p_gegner_set (0, 28, 28, 128, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 60, 60, 128, 48, MOVE_WEST, 2, 2);
                p_gegner_set (2, 96, 96, 24, 64, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 194) {
                p_gegner_set (0, 92, 92, 24, 40, MOVE_EAST, 2, 2);
                p_gegner_set (1, 96, 96, 136, 96, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 195) {
                p_gegner_set (0, 48, 48, 24, 72, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 196) {
                p_gegner_set (0, 60, 60, 24, 40, MOVE_EAST, 2, 2);
                p_gegner_set (1, 96, 96, 136, 104, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 197) {
                p_gegner_set (0, 64, 64, 40, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 92, 92, 128, 96, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 198) {
                if (v_questen [0] != 16) {
                        p_gegner_set (0, 96, 96, 80, 40, MOVE_WEST, 2, 2);
                        p_gegner_set (1, 60, 60, 128, 48, MOVE_SOUTH, 2, 2);
                        p_gegner_set (2, 92, 92, 64, 112, MOVE_NORTH, 2, 2);
                }
        }
        else if (v_lvl == 199) {
                    p_gegner_set (0, 76, 76, 64, 56, MOVE_WEST, 2, 2);
                    p_gegner_set (1, 28, 28, 112, 56, MOVE_EAST, 2, 2);
                    p_gegner_set (2, 92, 92, 80, 104, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 200) {
                p_gegner_set (0, 96, 96, 48, 72, MOVE_EAST, 2, 3);
        }
        else if (v_lvl == 201) {
                p_gegner_set (0, 48, 48, 72, 88, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 48, 48, 32, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 48, 48, 120, 112, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 202) {
                p_gegner_set (0, 96, 96, 80, 104, MOVE_NORTH, 3, 3);
        }
        else if (v_lvl == 203) {
                p_gegner_set (0, 92, 92, 24, 40, MOVE_EAST, 2, 2);
                p_gegner_set (1, 96, 96, 136, 64, MOVE_WEST,  2, 2);
                p_gegner_set (2, 92, 92, 80, 104, MOVE_EAST, 2, 2);
        }
        
        else if (v_lvl == 205) {
                p_gegner_set (0, 48, 48, 104, 96, MOVE_NORTH, 2, 2 );
                p_gegner_set (1, 48, 48, 80, 40, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 206) {
                p_gegner_set (0, 92, 92, 88, 56, MOVE_EAST, 2, 2);
                p_gegner_set (1, 92, 92, 24, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 48, 48, 136, 80, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 207) {
                p_gegner_set (0, 80, 80, 80, 40, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 208) {
                p_gegner_set (0, 48, 48, 128, 64, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 48, 48, 80, 88, MOVE_SOUTH, 2, 2);
                //p_gegner_set (2, 80, 80, 56, 71, MOVE_WEST, 2, 2);    
        }
        else if (v_lvl == 210) {
                p_gegner_set (0, 92, 92, 72, 88, MOVE_WEST, 2, 2);
                p_gegner_set (1, 92, 92, 96, 72, MOVE_EAST, 2, 2);
                p_gegner_set (2, 80, 80, 88, 96, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 211) {
                p_gegner_set (0, 48, 48, 136, 48, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 64, MOVE_DOWN, 127, 3);
                p_gegner_set (2, 80, 80, 112, 96, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 212) {
                p_gegner_set (0, 92, 92, 80, 72, MOVE_SOUTH, 2, 2);   
        }
        else if (v_lvl == 213) {
                p_gegner_set (0, 88, 84, 104, 88, MOVE_DOWN, 127, 3);
                p_gegner_set (1, 80, 80, 80, 64, MOVE_SOUTH, 2, 2);       
        }
        else if (v_lvl == 215) {
                p_gegner_set (0, 48, 48, 24, 64, MOVE_EAST, 2, 2);
                p_gegner_set (1, 88, 84, 32, 104, MOVE_DOWN, 127, 3);
                p_gegner_set (2, 92, 92, 112, 32, MOVE_SOUTH, 2, 2);      
        }
        else if (v_lvl == 216) {
                p_gegner_set (0, 80, 80, 24, 72, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 217) { p_gegner_set (0, 48, 48, 80, 72, MOVE_WEST, 2, 2); }
        else if (v_lvl == 220) { p_gegner_set (0, 24, 24, 24, 88, MOVE_EAST, 2, 2); }
        else if (v_lvl == 221) { 
                p_gegner_set (0, 48, 48, 72, 88, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 92, 92, 136, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 48, 48, 32, 72, MOVE_SOUTH, 2, 2); 
        }
        else if (v_lvl == 222) { p_gegner_set (0, 24, 24, 32, 80, MOVE_EAST, 2, 2); }
        else if (v_lvl == 223) {
                p_gegner_set (0, 48, 48, 128, 88, MOVE_WEST, 2, 2);
                p_gegner_set (1, 92, 92, 48, 32, MOVE_EAST, 2, 2);
                p_gegner_set (2, 92, 92, 24, 112, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 227) {
                p_gegner_set (0, 24, 24, 128, 32, MOVE_WEST, 2, 2);
                p_gegner_set (1, 92, 92, 32, 112, MOVE_EAST, 2, 2);
                p_gegner_set (2, 92, 92, 80, 80, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 228) {
                p_gegner_set (0, 48, 48, 48, 80, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 48, 48, 72, 112, MOVE_EAST, 2, 2);
                p_gegner_set (1, 92, 92, 32, 32, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 229) { p_gegner_set (0, 24, 24, 32, 64, MOVE_EAST, 2, 3);  }
        else if (v_lvl == 230) { 
                p_gegner_set (0, 88, 84, 32, 56, MOVE_DOWN, 125, 3);
                p_gegner_set (1, 92, 92, 72, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 48, 48, 120, 112, MOVE_NORTH,2, 2); 
        }
        else if (v_lvl == 231) { p_gegner_set (0, 88, 84, 128, 56, MOVE_DOWN, 125, 3); }
        else if (v_lvl == 238) { 
                p_gegner_set (0, 24, 24, 136, 104, MOVE_WEST, 2, 2);
                p_gegner_set (1, 20, 20, 24, 56, MOVE_EAST, 2, 2); 
        }
        else if (v_lvl == 239) {
                p_gegner_set (0, 44, 44, 136, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 24, 24, 24, 88, MOVE_EAST, 2, 2);
                p_gegner_set (2, 92, 92, 112, 40, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 240) { p_gegner_set (0, 96, 96, 80, 56, MOVE_SOUTH, 2, 2); }
        else if (v_lvl == 245) {
                p_gegner_set (0, 56, 56, 80, 56, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 128, 64, MOVE_DOWN, 125, 3);
                p_gegner_set (2, 52, 52, 136, 96, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 246) {
                p_gegner_set (0, 48, 48, 104, 72, MOVE_WEST, 2, 2);
                p_gegner_set (1, 92, 92, 72, 112, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 247) {
                p_gegner_set (0, 56, 56, 56, 72, MOVE_WEST, 2, 2);
                p_gegner_set (1, 56, 56, 88, 72, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 249) {
                p_gegner_set (0, 24, 24, 80, 56, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 20, 20, 136, 88, MOVE_WEST, 2, 2);
                p_gegner_set (2, 92, 92, 40, 56, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 250) {
                p_gegner_set (0, 24, 24, 80, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 64, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 253) {
                p_gegner_set (0, 88, 84, 32, 64, MOVE_DOWN, 125, 3);
                p_gegner_set (1, 88, 84, 128, 80, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 254) {
                 p_gegner_set (0, 88, 84, 32, 88, MOVE_DOWN, 125, 3);
                 p_gegner_set (1, 48, 48, 136, 104, MOVE_NORTH, 2, 2);
                 p_gegner_set (2, 48, 48, 64, 32, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 255) {
                p_gegner_set (0, 52, 52, 96, 64, MOVE_WEST, 2, 2);
                p_gegner_set (1, 56, 56, 48, 88, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 260) {
                p_gegner_set (0, 48, 48, 32, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 48, 48, 136, 72, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 261) {
                p_gegner_set (0, 52, 52, 80, 64, MOVE_EAST, 2, 2);
                p_gegner_set (1, 64, 64, 80, 40, MOVE_WEST, 2, 2);
                p_gegner_set (2, 60, 60, 24, 104, MOVE_EAST, 2, 2);
        }
        else if (v_lvl == 262) {
               p_gegner_set (0, 48, 48, 24, 104, MOVE_NORTH, 2, 2);
               p_gegner_set (1, 56, 56, 80, 84, MOVE_EAST, 2, 2); 
        }
        else if (v_lvl == 263) {
                p_gegner_set (0, 20, 20, 40, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 20, 20, 112, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 88, 84, 128, 56, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 264) {
                p_gegner_set (0, 24, 24, 32, 72, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 265) {
                p_gegner_set (0, 92, 92, 56, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 56, MOVE_DOWN, 125, 3);       
        }
        else if (v_lvl == 266) {
                p_gegner_set (0, 80, 80, 104, 64, MOVE_EAST, 2, 2);
                p_gegner_set (1, 48, 48, 32, 64, MOVE_EAST, 2, 2);
                p_gegner_set (2, 52, 52, 80, 112, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 267) {
                p_gegner_set (0, 88, 84, 128, 56, MOVE_DOWN, 125, 3);
                p_gegner_set (1, 56, 56, 72, 80, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 48, 48, 72, 32, MOVE_SOUTH, 2, 2); 
        }
        else if (v_lvl == 268) {
                p_gegner_set (0, 56, 56, 32, 64, MOVE_EAST, 2, 2);

        }
        else if (v_lvl == 269) {
                p_gegner_set (0, 88, 84, 128, 56, MOVE_DOWN, 125, 3); 
                p_gegner_set (1, 88, 84, 32, 56, MOVE_DOWN, 125, 3);    
        }
        else if (v_lvl == 275) {
                p_gegner_set (0, 92, 92, 88, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 56, 56, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 276) {
                p_gegner_set (0, 60, 60, 80, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 128, 56, MOVE_DOWN, 125, 3); 
                p_gegner_set (2, 88, 84, 32, 56, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 277) {
                p_gegner_set (0, 56, 56, 80, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 56, MOVE_DOWN, 125, 3);
                p_gegner_set (2, 48, 48, 136, 40, MOVE_SOUTH, 2, 2);
        }
        else if (v_lvl == 278) {
                p_gegner_set (0, 44, 44, 136, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 56, 56, 24, 88, MOVE_EAST, 2, 2);
                p_gegner_set (2, 20, 20, 112, 64, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 279) {
                p_gegner_set (0, 24, 24, 112, 122, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 24, 24, 56, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 88, 84, 32, 56, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 280) {
                p_gegner_set (0, 88, 84, 128, 56, MOVE_DOWN, 125, 3); 
                p_gegner_set (1, 88, 84, 32, 56, MOVE_DOWN, 125, 3);
                p_gegner_set (2, 44, 44, 136, 96, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 281) {
                p_gegner_set (0, 56, 56, 24, 96, MOVE_EAST, 2, 2);
                p_gegner_set (1, 60, 60, 136, 40, MOVE_WEST, 2, 2);
        }
        else if (v_lvl == 282) {
                p_gegner_set (0, 92, 92, 72, 96, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 60, 60, 40, 32, MOVE_SOUTH, 2, 2);
                p_gegner_set (2, 60, 60, 112, 112, MOVE_NORTH, 2, 2);
        }
        else if (v_lvl == 283) {
                p_gegner_set (0, 52, 52, 24, 40, MOVE_SOUTH, 2, 2);
                p_gegner_set (1, 48, 48, 112, 112, MOVE_NORTH, 2, 2);
                p_gegner_set (2, 88, 84, 128, 72, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 284) {
                p_gegner_set (0, 56, 56, 72, 104, MOVE_NORTH, 2, 2);
                p_gegner_set (1, 88, 84, 128, 72, MOVE_DOWN, 125, 3);
                p_gegner_set (2, 88, 84, 32, 72, MOVE_DOWN, 125, 3);
        }
        else if (v_lvl == 285) {
                p_gegner_set (0, 52, 52, 136, 32, MOVE_WEST, 2, 2); 
                p_gegner_set (1, 88, 84, 128, 72, MOVE_DOWN, 125, 3);
                p_gegner_set (2, 88, 84, 32, 72, MOVE_DOWN, 125, 3);
        }
        
        
        //p_gegner_set_table ();
}
