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

#include "tempel-e2.h"

#include "engine.h"
#include "truhen.h"
#include "locations.h"
#include "npc.h"
#include "text.h"
#include "other.h"


#include "daten/tilesets/tilesets.h"
#include "daten/lvl/lvldattempel-E1.h"
#include "daten/lvl/lvldattempel-E2.h"
#include "daten/txt/locations/locations.h"
#include "daten/txt/other/alpha.h"

void p_lvl290 (void) __banked
{
	if (v_smk == 8) {
		p_engine_loadMap (v_lvl291, BANK_20, BANK_17);
		p_engine_changeLvl (291, 80, 120);
	}
	else if (v_smk == 121) {
		p_engine_loadMap (v_lvl286, BANK_20, BANK_17);
		p_engine_changeLvl (286, v_sxk, v_syk);
		p_gui_show_location (ltempelE1);
	}
}

void p_lvl291 (void) __banked
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl290, BANK_20, BANK_17);
		p_engine_changeLvl (290, 80, 24);
	}
	else if (v_smk == 124) {
		p_engine_loadMap (v_lvl292, BANK_20, BANK_17);
		p_engine_changeLvl (292, 16, 72);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl293, BANK_20, BANK_17);
		p_engine_changeLvl (293, 80, 120);
	}
}

void p_lvl292 (void) __banked
{
	p_truhe_proviant (182, 92, 2);
	p_xaver_tempel ();

	if (v_smk == 108) {
		p_engine_loadMap (v_lvl291, BANK_20, BANK_17);
		p_engine_changeLvl (291, 144, 72);
	}
}

void p_lvl293 (void) __banked
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl291, BANK_20, BANK_17);
		p_engine_changeLvl (291, 80, 24);
	}
	else if (v_smk == 108) {
		p_engine_loadMap (v_lvl294, BANK_20, BANK_17);
		p_engine_changeLvl (294, 144, 72);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl295, BANK_20, BANK_17);
		p_engine_changeLvl (295, 80, 120);
	}
}

void p_lvl294 (void) __banked
{
	p_truhe_ausdauertrank (38, 93);
	p_truhe_heiltrank (194, 94);

	p_npc_heiler (111); 

	if (v_smk == 124) {
		p_engine_loadMap (v_lvl293, BANK_20, BANK_17);
		p_engine_changeLvl (293, 16, 72);
	}
}

void p_lvl295 (void) __banked
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl293, BANK_20, BANK_17);
		p_engine_changeLvl (293, 80, 24);
	}

	else if (v_smk == 8)
	{
		p_engine_set_txt (alpha);
        	p_engine_A ();
        	p_engine_after_txt ();
	}
}
