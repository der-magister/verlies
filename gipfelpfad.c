//pragma bank=17

//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "gipfelpfad.h"

#include "engine.h"
#include "truhen.h"
#include "umgebung.h"
#include "schilder.h"
#include "locations.h"

#include "daten/tilesets/tilesets.h"
#include "daten/lvl/lvldatgipfelpfad.h"
#include "daten/lvl/lvldatrotgebirge.h"
#include "daten/lvl/lvldattempel-tg.h"
#include "daten/txt/schilder/schildertxt.h"
#include "daten/txt/locations/locations.h"

void p_lvl238 (void) __banked
{
	if (v_smk == 8) {
		p_engine_loadMap (v_lvl239, BANK_19, BANK_17);
		p_engine_changeLvl (239, 80, 120);
	}
	else if (v_smk == 224) {
		p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_17);
		p_engine_loadMap (v_lvl199, BANK_19, BANK_17);
		p_engine_changeLvl (199, 80, 24);
		p_gui_show_location (lrotgebirge);
		v_region = 11;
	}
}

void p_lvl239 (void) __banked
{
	p_truhe_proviant (51, 78, 2);

	if (v_smk == 224) {
		p_engine_loadMap (v_lvl238, BANK_19, BANK_17);
		p_engine_changeLvl (238, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl240, BANK_19, BANK_17);
		p_engine_changeLvl (240, 80, 120);
	}

}

void p_lvl240 (void) __banked
{
	p_stein (44, 49);

	if (v_smk == 224) {
		p_engine_loadMap (v_lvl239, BANK_19, BANK_17);
		p_engine_changeLvl (239, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl241, BANK_19, BANK_17);
		p_engine_changeLvl (241, 80, 120);
	}		
}

void p_lvl241 (void) __banked
{
	p_schild (59, schildtxt16);

	if (v_smk == 224) {
		p_engine_loadMap (v_lvl240, BANK_19, BANK_17);
		p_engine_changeLvl (240, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl245, BANK_17);
		p_engine_loadMap (v_lvl245, BANK_19, BANK_17);
		p_engine_changeLvl (245, 80, 120);
		p_gui_show_location (ltempeleg);
		v_region = 14;
	}
}
