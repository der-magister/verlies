//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
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


//#pragma bank=16

#include "eichenwald.h"

#include "feensee.h"
#include "engine.h"
#include "locations.h"
#include "truhen.h"
#include "npc.h"
#include "text.h"
#include "other.h"
#include "schilder.h"
#include "umgebung.h"
#include "lvlstatus.h"
#include "portale.h"

#include "daten/lvl/lvldatwiesen.h"
#include "daten/lvl/lvldateichenwald.h"

#include "daten/txt/locations/locations.h"

#include "daten/txt/schilder/schildertxt.h"

#include "daten/tilesets/tilesets.h"


///Ablauf Raum 120
void p_lvl120 (void) __banked
{
	p_schild (192, schildtxt6);

	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl121, BANK_18, BANK_16);
                p_engine_changeLvl (121, 16, 72);
	}
	else if (v_smk == 10)
	{
		p_engine_loadMap (v_lvl123, BANK_18, BANK_16);
		p_engine_changeLvl (123, 96, 120);
	}
	else if (v_smk == 225)
	{
		p_engine_loadTileset (BANK_2, 3, 34, wiesen_1, BANK_16);
		p_engine_loadMap (v_lvl81, BANK_5, BANK_16);
		p_engine_changeLvl (81, 88, 24);
		p_gui_show_location (lwiesen);
		v_region = 3;
	}
}

///Ablauf Raum 121
void p_lvl121 (void) __banked
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl120, BANK_18, BANK_16);
		p_engine_changeLvl (120, 144, 72);
	}
	else if (v_smk == 160)
	{
		p_engine_loadMap (v_lvl122, BANK_18, BANK_16);
		p_engine_changeLvl (122, 16, 88);
	}
}

///Ablauf Raum 122
void p_lvl122 (void) __banked
{
	p_truhe_karte (62, 6, 36);
	
	if (v_smk == 144)
	{
		p_engine_loadMap (v_lvl121, BANK_18, BANK_16);
		p_engine_changeLvl (121, 144, 88);
	}
}

///Ablauf Raum 123
void p_lvl123 (void) __banked
{
	p_truhe_proviant (68, 37, 2);

	if (v_smk == 226)
	{
		p_engine_loadMap (v_lvl120, BANK_18, BANK_16);
		p_engine_changeLvl (120, 96, 24);
	}
	else if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl124, BANK_18, BANK_16);
		p_engine_changeLvl (124, 16, 56);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl127, BANK_18, BANK_16);
		p_engine_changeLvl (127, 144, 72);
	}
}

///Ablauf Raum 124
void p_lvl124 (void) __banked
{
	if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl123, BANK_18, BANK_16);
		p_engine_changeLvl (123, 144, 56);
	}
	else if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl125, BANK_18, BANK_16);
		p_engine_changeLvl (125, 64, 120);
	}
}

///Ablauf Raum 125
void p_lvl125 (void) __banked
{
	p_stein (40, 20);
	p_stein (42, 21);
	p_stein (44, 22);

	if (v_smk == 222)
	{
		p_engine_loadMap (v_lvl124, BANK_18, BANK_16);
		p_engine_changeLvl (124, 64, 24);
	}
	else if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl126, BANK_18, BANK_16);
		p_engine_changeLvl (126, 64, 120);
	}
}

///Ablauf Raum 126
void p_lvl126 (void) __banked
{
	if (v_smk == 98)
	{
		p_truhe_brotfach_2 ();
	}
	p_truhe_proviant (194, 38, 1);

	if (v_smk == 222)
	{
		p_engine_loadMap (v_lvl125, BANK_18, BANK_16);
		p_engine_changeLvl (125, 64, 24);
	}
}

///Ablauf Raum 127
void p_lvl127 (void) __banked
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl123, BANK_18, BANK_16);
		p_engine_changeLvl (123, 16, 72);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl128, BANK_18, BANK_16);
		p_engine_changeLvl (128, 144, 72);
	}
	else if (v_smk == 12)
	{
		p_engine_loadMap (v_lvl129, BANK_18, BANK_16);
		p_engine_changeLvl (129, 112, 120);
	}
}

///Ablauf Raum 128
void p_lvl128 (void) __banked
{
	p_truhe_gold (56, 39, 2);

	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl127, BANK_18, BANK_16);
		p_engine_changeLvl (127, 16, 72);
	}

}

///Ablauf Raum 129
void p_lvl129 (void) __banked
{
	if (v_smk == 228)
	{
		p_engine_loadMap (v_lvl127, BANK_18, BANK_16);
		p_engine_changeLvl (127, 112, 24);
	}

	if (v_smk == 4)
	{
		p_engine_loadMap (v_lvl130, BANK_18, BANK_16);
		p_engine_changeLvl (130, 48, 120);
	}
}

///Ablauf Raum 130
void p_lvl130 (void) __banked
{
	if (v_smk == 220)
	{
		p_engine_loadMap (v_lvl129, BANK_18, BANK_16);
		p_engine_changeLvl (129, 48, 24);
	}
	else if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl131, BANK_18, BANK_16);
		p_engine_changeLvl (131, 144, 56);
	}
}

///Ablauf Raum 131
void p_lvl131 (void) __banked
{
	if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl130, BANK_18, BANK_16);
		p_engine_changeLvl (130, 16, 56);
	}
	else if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl132, BANK_18, BANK_16);
		p_engine_changeLvl (132, 64, 120);
	}
}

///Ablauf Raum 132
void p_lvl132 (void) __banked
{
	if (v_smk == 222)
	{
		p_engine_loadMap (v_lvl131, BANK_18, BANK_16);
		p_engine_changeLvl (131, 64, 24);
	}
	else if (v_smk == 12)
	{
		p_engine_loadMap (v_lvl133, BANK_18, BANK_16);
		p_engine_changeLvl (133, 112, 120);
	}
}

///Ablauf Raum 133
void p_lvl133 (void) __banked
{
	p_truhe_heiltrank (58, 40);

	if (v_smk == 228)
	{
		p_engine_loadMap (v_lvl132, BANK_18, BANK_16);
		p_engine_changeLvl (132, 112, 24);
	}
	else if  (v_smk == 160)
	{
		p_engine_loadMap (v_lvl134, BANK_18, BANK_16);
		p_engine_changeLvl (134, 16, 88);
	}
}

///Ablauf Raum 134
void p_lvl134 (void) __banked
{
	if (v_smk == 144)
	{
		p_engine_loadMap (v_lvl133, BANK_18, BANK_16);
		p_engine_changeLvl (133, 144, 88);
	}
	else if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl135, BANK_18, BANK_16);
		p_engine_changeLvl (135, 16, 56);
	}
}

///Ablauf Raum 135
void p_lvl135 (void) __banked
{
	p_schild (186, schildtxt8);

	if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl134, BANK_18, BANK_16);
		p_engine_changeLvl (134, 144, 56);
	}
	else if (v_smk == 222)
	{	
		p_engine_loadMap (v_lvl136, BANK_18, BANK_16);
		p_engine_changeLvl (136, 64, 24);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl140, BANK_18, BANK_16);
		p_engine_changeLvl (140, 16, 72);
	}
}

///Ablauf Raum 136
void p_lvl136 (void) __banked
{
	if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl135, BANK_18, BANK_16);
		p_engine_changeLvl (135, 64, 120);
	}
	else if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl137, BANK_18, BANK_16);
		p_engine_changeLvl (137, 144, 56);
	}
	else if (v_smk == 222)
	{
		p_engine_loadMap (v_lvl138, BANK_18, BANK_16);
		p_engine_changeLvl (138, 64, 24);
		p_gui_show_location (lelfenhain);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl139, BANK_18, BANK_16);
		p_engine_changeLvl (139, 16, 72);
	}
}


///Ablauf Raum 137
void p_lvl137 (void) __banked
{
	p_truhe_kraut (56, 43); //Truhe mit Kraut

	if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl136, BANK_18, BANK_16);
		p_engine_changeLvl (136, 16, 56);
	}
}
