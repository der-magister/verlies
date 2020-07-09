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

#pragma bank=11

#include "globals.h"
#include "engine.h"
#include "schilder.h"


#include "lvl1.h" 
#include "l_stadtgefaengnis.h"

void p_lvl_whichLvL () BANKED
{
	if (v_lvl == 1) p_lvl1 ();
        else if (v_lvl == 2) p_lvl2 ();
        else if (v_lvl == 3) p_lvl3 ();
	else if (v_lvl == 5) p_lvl5 ();
	else if (v_lvl == 6) p_lvl6 ();
	else if (v_lvl == 7) p_lvl7 ();
	else if (v_lvl == 8) p_lvl8 ();
	else if (v_lvl == 9) p_lvl9 ();
	else if (v_lvl == 10) p_lvl10 ();
	else if (v_lvl == 11) p_lvl11 ();
	else if (v_lvl == 12) p_lvl12 ();
	else if (v_lvl == 13) p_lvl13 ();
}

void p_lvl_status () BANKED
{
	if (v_lvl == 1)
	{
		if (v_questen [0] != 0)
		{
			v_tile [0] = 38;
                        p_engine_set_tile (15, 2, 1);
                        p_engine_set_tile (15, 3, 1);
		}
                if (v_questen [0] == 3)
                {
                        v_tile [0] = 42;
                        p_engine_set_tile (10, 1, 1);
                        v_tile [0] = 41;
                        p_engine_set_tile (10, 2, 1);
                        v_tile [0] = 40;
                        p_engine_set_tile (11, 1, 1);
                        v_tile [0] = 39;
                        p_engine_set_tile (11, 2, 1);
                }
                if (v_stein [0] == 1)
                {
                        v_tile [0] = 38;
                        p_engine_set_tile (3, 6, 1);
                        p_engine_set_tile (4, 6, 1);
                        p_engine_set_tile (3, 7, 1);
                        p_engine_set_tile (4, 7, 1);

                        if (v_questen [1] == 0) ++v_questen [1];

                }
	}
	else if (v_lvl == 10)
	{
		p_schalter_status ();
                

	}
	else if (v_lvl == 13)
	{
		if (v_questen [0] >= 2)
		{
			v_tile [0] = 38;
			p_engine_set_tile (15, 7, 1);
			p_engine_set_tile (16, 7, 1);
			p_engine_set_tile (15, 8, 1);
			p_engine_set_tile (16, 8, 1);
		}
	}
}
