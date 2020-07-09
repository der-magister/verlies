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

#pragma bank=13

#include "lvlgegner.h"
#include "gegner.h"

///Gegnerinformationen der Räume 5 bis 12
void p_set_gegner () BANKED
{
        if (v_lvl == 5)
        {
                v_gspeed = 75;
		p_gegner_set (0, 4, 120, 72, MOVE_NORTH, 1, 1);
	        p_gegner_set (1, 8, 40, 48, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 6)
        {
                p_gegner_set (0, 4, 48, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 8, 136, 72, MOVE_WEST, 1, 1);
        }
        else if (v_lvl == 7)
        {
                p_gegner_set (0, 8, 24, 40, MOVE_EAST, 1, 1);
        }
        else if (v_lvl == 8)
        {
                p_gegner_set (0, 4, 24, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 4, 120, 112, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 9)
        {
                p_gegner_set (0, 8, 72, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 4, 120, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 4, 24, 32, MOVE_SOUTH, 1, 1);
        }
        else if (v_lvl == 10) { p_gegner_set (0, 8, 120, 72, MOVE_NORTH, 2, 1); }
        else if (v_lvl == 11)
        {
                p_gegner_set (0, 4, 24, 104, MOVE_EAST, 1, 1);
		p_gegner_set (1, 8, 80, 72, MOVE_NORTH, 1, 1);
        }
        else if (v_lvl == 12) { p_gegner_set (0, 4, 96, 64, MOVE_WEST, 1, 1); }
}
