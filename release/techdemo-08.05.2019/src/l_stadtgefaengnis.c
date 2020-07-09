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

#pragma bank=16

#include "engine.h"
#include "locations.h"
#include "truhen.h"
#include "schilder.h"
#include "l_stadtgefaengnis.h"
#include "gegner.h"
#include "lvlstatus.h"
#include "text.h"
#include "other.h"

#include "daten/tilesets/v_felsengrund_1.h"
#include "daten/txt/locations/felsengrund.h"

#include "daten/lvl/v_lvl1a.h"
#include "daten/lvl/v_lvl5.h"
#include "daten/lvl/v_lvl6.h"
#include "daten/lvl/v_lvl7.h"
#include "daten/lvl/v_lvl8.h"
#include "daten/lvl/v_lvl9.h"
#include "daten/lvl/v_lvl10.h"
#include "daten/lvl/v_lvl11.h"
#include "daten/lvl/v_lvl12.h"
#include "daten/lvl/v_lvl13.h"

#include "daten/txt/npcs/phobetxt1.h"
#include "daten/txt/npcs/phobetxt2.h"
#include "daten/txt/npcs/phobetxt3.h"
#include "daten/other/techend.h"

void p_lvl5 () BANKED
{
	//Truhe mit Schwert
	p_truhe_schwert (37, 1);

	//Raumwechsel
	if (v_smk == 33)
	{
		p_engine_loadTileset (2, 0, 127, v_felsengrund_1, 16);
		p_engine_loadMap (v_lvl1a, 5, 16);
		p_engine_changeLvl (1, 136, 32);
		p_gui_show_location (lfelsengrund);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl6, 5, 16);
		p_engine_changeLvl (6, 16, 72);
                p_gegner_set (0, 4, 48, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 8, 136, 72, MOVE_WEST, 1, 1);
	}

}

void p_lvl6 () BANKED
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl5, 5, 16);
                p_engine_changeLvl (5, 144, 72);
                p_gegner_set (0, 4, 120, 72, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 8, 40, 48, MOVE_SOUTH, 1, 1);
        }
        else if (v_smk == 224)
        {
		p_engine_loadMap (v_lvl7, 5, 16);
                p_engine_changeLvl (7, 80, 24);
                p_gegner_set (0, 8, 24, 40, MOVE_EAST, 1, 1);
	}
}

///Ablauf Raum 7 (Stadtgefängnis)
void p_lvl7 () BANKED
{
	//Truhe mit Karte
	p_truhe_karte (51, 1, 2);

	//Levelwechsel
	if (v_smk == 8)
	{
		p_engine_loadMap (v_lvl6, 5, 16);
		p_engine_changeLvl (6, 80, 120);
                p_gegner_set (0, 4, 48, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 8, 136, 72, MOVE_WEST, 1, 1);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl8, 5, 16);
		p_engine_changeLvl (8, 144, 72);
                p_gegner_set (0, 4, 24, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 4, 120, 112, MOVE_NORTH, 1, 1);
	}
}

//Ablauf Raum 8
void p_lvl8 () BANKED
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl7, 5, 16);
		p_engine_changeLvl (7, 16, 72);
                p_gegner_set (0, 8, 24, 40, MOVE_EAST, 1, 1);
	}
	else if (v_smk == 223)
	{
		p_engine_loadMap (v_lvl9, 5, 16);
		p_engine_changeLvl (9, 72, 24);
                p_gegner_set (0, 8, 72, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 4, 120, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 4, 24, 32, MOVE_SOUTH, 1, 1);
	}
}

///Ablauf Raum 9
void p_lvl9 () BANKED
{
        //Truhe mit 2 Gold
        p_truhe_gold (195, 3, 2);

	//Raumwechsel
	if (v_smk == 7)
	{
		p_engine_loadMap (v_lvl8, 5, 16);
		p_engine_changeLvl (8, 72, 120);
                p_gegner_set (0, 4, 24, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (1, 4, 120, 112, MOVE_NORTH, 1, 1);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl10, 5, 16);
		p_engine_changeLvl (10, 16, 72);
                p_gegner_set (0, 8, 120, 72, MOVE_NORTH, 2, 1);
	}
}

///Ablauf Raum 10
void p_lvl10 () BANKED
{
	p_schalter_tuer (29, 1);
	
        if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl9, 5, 16);
                p_engine_changeLvl (9, 144, 72);
                p_gegner_set (0, 8, 72, 104, MOVE_NORTH, 1, 1);
                p_gegner_set (1, 4, 120, 32, MOVE_SOUTH, 1, 1);
                p_gegner_set (2, 4, 24, 32, MOVE_SOUTH, 1, 1);
        }
        else if (v_smk == 124)
        {
		if (v_schalter [1] == 0)
		{
			p_tuerzu ();	
		}
		else 
		{
			p_engine_loadMap (v_lvl11, 5, 16);
			p_engine_changeLvl (11, 16, 72);
			p_gegner_set (0, 4, 24, 104, MOVE_EAST, 1, 1);
			p_gegner_set (1, 8, 80, 72, MOVE_NORTH, 1, 1);
		}
        }
}

///Ablauf Raum 11
void p_lvl11 () BANKED
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl10, 5, 16);
		p_engine_changeLvl (10, 144, 72);
                p_gegner_set (0, 8, 120, 72, MOVE_NORTH, 2, 1);
	}
	else if (v_smk == 8)
	{
		p_engine_loadMap (v_lvl12, 5, 16);
		p_engine_changeLvl (12, 80, 120);
                p_gegner_set (0, 4, 96, 64, MOVE_WEST, 1, 1);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl13, 5, 16);
		p_engine_changeLvl (13, 16, 72);
	}
}

///Ablauf Raum 12
void p_lvl12 () BANKED
{
	p_truhe_proviant (44, 4, 1);
	
	if (v_smk == 224)
	{
		p_engine_loadMap (v_lvl11, 5, 16);
		p_engine_changeLvl (11, 80, 24);
                p_gegner_set (0, 4, 24, 104, MOVE_EAST, 1, 1);
                p_gegner_set (1, 8, 80, 72, MOVE_NORTH, 1, 1);
	}
}

///Ablauif Raum 13
void p_lvl13 () BANKED
{
	//erste Begegnung mit Phobe
	if ((v_smk == 120) && (v_questen [1] == 1))
	{
		p_engine_set_txt (phobetxt1);
                p_engine_down ();
                p_engine_set_txt (phobetxt2);
                p_engine_down ();
                p_engine_set_txt (phobetxt3);
                ++v_questen [1];
		delay (250);
                p_lvl_status ();
	}
	
	if (v_smk == 108)
	{
		if (v_questen [1] == 2)
		{
			p_engine_set_txt (techend);
			v_gameover = TRUE;
			v_quit = TRUE;
		}
		else
		{
			p_engine_loadMap (v_lvl11, 5, 16);
			p_engine_changeLvl (11, 144, 72);
			p_gegner_set (0, 4, 24, 104, MOVE_EAST, 1, 1);
			p_gegner_set (1, 8, 80, 72, MOVE_NORTH, 1, 1);
		}
	}
}
