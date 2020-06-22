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

//#pragma bank=17

#include "eichenwald2.h"

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

#include "daten/lvl/v_lvl135.h"
#include "daten/lvl/v_lvl136.h"
#include "daten/lvl/v_lvl139.h"
#include "daten/lvl/v_lvl140.h"
#include "daten/lvl/v_lvl141.h"
#include "daten/lvl/v_lvl142.h"
#include "daten/lvl/v_lvl143.h"
#include "daten/lvl/v_lvl145.h"

#include "daten/txt/locations/locations.h"

#include "daten/txt/schilder/schildtxt7.h"

#include "daten/txt/npcs/ranartxt1.h"
#include "daten/txt/npcs/ranartxt2.h"
#include "daten/txt/npcs/ranartxt3.h"
#include "daten/txt/npcs/ranartxt4.h"
#include "daten/txt/npcs/ranartxt5.h"

#include "daten/tilesets/alte-baum-4-38.h"

///Ablauf Raum 138
void p_lvl138 (void) __banked
{
	p_portal (194);

	if (v_smk == 76) p_provianthaendler ();

	if ((v_smk == 86) && (v_keyflag == 1))
	{
		if (v_questen [0] == 9)
		{
			p_engine_set_txt (ranartxt1);
                        p_engine_down ();
			p_engine_set_txt (ranartxt2);
                        p_engine_down ();
			p_engine_set_txt (ranartxt3);
                        p_engine_down ();
			p_engine_set_txt (ranartxt4);
                        p_engine_down ();
			p_engine_set_txt (ranartxt5);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_questen [0] = 10;
		}
		else if (v_questen [0] == 10)
		{
			p_engine_set_txt (ranartxt5);
                        p_engine_A ();
                        p_engine_after_txt ();
		}

	}


	if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl136, BANK_6, BANK_17);
		p_engine_changeLvl (136, 64, 120);
		p_gui_show_location (leichenwald);
	}
}

///Ablauf Raum 139
void p_lvl139 (void) __banked
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl136, BANK_6, BANK_17);
		p_engine_changeLvl (136, 144, 72);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl142, BANK_6, BANK_17);
		p_engine_changeLvl (142, 16, 72);
	}
}

///Ablauf Raum 140
void p_lvl140 (void) __banked
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl135, BANK_6, BANK_17);
		p_engine_changeLvl (135, 144, 72);
	}
	else if (v_smk == 52)
	{
		p_engine_loadMap (v_lvl141, BANK_6, BANK_17);
		p_engine_changeLvl (141, 16, 40);
	}
}

///Ablauf Raum 141
void p_lvl141 (void) __banked
{
	p_npc_heiler (84);

	if (v_smk == 36)
	{
		p_engine_loadMap (v_lvl140, BANK_6, BANK_17);
		p_engine_changeLvl (140, 144, 40);
	}
	else if (v_smk == 224)
	{
		p_engine_loadMap (v_lvl142, BANK_6, BANK_17);
		p_engine_changeLvl (142, 80, 24);
	}
}

///Ablauf Raum 142
void p_lvl142 (void) __banked
{
	p_schild (192, schildtxt7);

	if (v_smk == 8)
	{
		p_engine_loadMap (v_lvl141, BANK_6, BANK_17);
		p_engine_changeLvl (141, 80, 120);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl139, BANK_6, BANK_17);
		p_engine_changeLvl (139, 144, 72);
	}
	else if (v_smk == 224)
	{
		p_engine_loadMap (v_lvl143, BANK_6, BANK_17);
		p_engine_changeLvl (143, 80, 24);

	}
	else if (v_smk == 124)
	{
		p_engine_loadTileset (BANK_2, 4, 33, altebaum, BANK_17);
		p_engine_loadMap (v_lvl145, BANK_18, BANK_17);
		p_engine_changeLvl (145, 16, 72);
		p_gui_show_location (laltebaum);
	}
}

///Ablauf Raum 143
void p_lvl143 (void) __banked
{
	p_truhe_gold (98, 41, 1);

	if (v_smk == 8)
	{
		p_engine_loadMap (v_lvl142, BANK_6, BANK_17);
		p_engine_changeLvl (142, 80, 120);
	}
}
