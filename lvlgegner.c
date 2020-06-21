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
//   Kontakt: magister@kabelmail.de

#pragma bank=13

#include "lvlgegner.h"
#include "gegner.h"

///Gegnerinformationen
void p_set_gegner (void) BANKED
{
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
                p_gegner_set (1, 24, 24, 136, 104, MOVE_WEST, 1, 1);
                p_gegner_set (2, 24, 24, 24, 40, MOVE_SOUTH, 1, 2);
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
        else if (v_lvl == 76)
        {
                p_gegner_set (0, 24, 24, 120, 72, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 20, 20, 32, 64, MOVE_SOUTH, 1, 1);
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
                p_gegner_set (0, 20, 20, 56, 80, MOVE_EAST, 2, 2);
        }
        
}