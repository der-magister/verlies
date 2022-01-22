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

#include "tempel-e1.h"

#include "engine.h"
#include "umgebung.h"
#include "truhen.h"
#include "locations.h"
#include "schilder.h"

#include "daten/tilesets/tilesets.h"
#include "daten/lvl/lvldattempel-tg.h"
#include "daten/lvl/lvldattempel-E1.h"
#include "daten/lvl/lvldattempel-E2.h"
#include "daten/txt/locations/locations.h"

void p_lvl275 (void) __banked
{
	p_stein (104, 53);

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl276, BANK_20, BANK_17);
		p_engine_changeLvl (276, 16, 64);
	}
	else if (v_smk == 93) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl256, BANK_17);
		p_engine_loadMap (v_lvl256, BANK_19, BANK_17);
		p_engine_changeLvl (256, v_sxk, v_syk);
		p_gui_show_location (ltempeleg);
	}
}

void p_lvl276 (void) __banked
{
	if (v_smk == 90) {
		p_engine_loadMap (v_lvl275, BANK_20, BANK_17);
		p_engine_changeLvl (275, 144, 64);
	}
	else if (v_smk == 106) {
		p_engine_loadMap (v_lvl277, BANK_20, BANK_17);
		p_engine_changeLvl (277, 16, 64);
	}
}

void p_lvl277 (void) __banked
{
	p_truhe_proviant (51, 86, 1);
	p_truhe_karte (181, 14, 87);

	if (v_smk == 90) {
		p_engine_loadMap (v_lvl276, BANK_20, BANK_17);
		p_engine_changeLvl (276, 144, 64);
	} 
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl278, BANK_20, BANK_17);
		p_engine_changeLvl (278, 80, 120);
	}
}

void p_lvl278 (void) __banked
{	
	p_schalter_tuer (51, 8);

	if (v_smk == 224) {
		p_engine_loadMap (v_lvl277, BANK_20, BANK_17);
		p_engine_changeLvl (277, 80, 24);
	}
	else if (v_smk == 90) {
		if (v_schalter [8] == 0) {
			p_tuerzu ();
		}
		else if (v_schalter [8] == 1) {
			p_engine_loadMap (v_lvl279, BANK_20, BANK_17);
			p_engine_changeLvl (279, 144, 64);
		}
	}
}

void p_lvl279 (void) __banked
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl278, BANK_20, BANK_17);
		p_engine_changeLvl (278, 16, 64);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl280, BANK_20, BANK_17);
		p_engine_changeLvl (280, 144, 64);
	}
}

void p_lvl280 (void) __banked
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl279, BANK_20, BANK_17);
		p_engine_changeLvl (279, 16, 64);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl281, BANK_20, BANK_17);
		p_engine_changeLvl (281, 144, 64);
	}
}

void p_lvl281 (void) __banked
{
	p_stein (187, 54);

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl280, BANK_20, BANK_17);
		p_engine_changeLvl (280, 16, 64);
	}
	else if (v_smk == 223) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
		p_engine_changeLvl (282, 72, 24);
	}
}

void p_lvl282 (void) __banked
{
	p_stein (90, 55);

	if (v_smk == 7) {
		p_engine_loadMap (v_lvl281, BANK_20, BANK_17);
		p_engine_changeLvl (281, 72, 120);
	}
	else if (v_smk == 223) {
		p_engine_loadMap (v_lvl283, BANK_20, BANK_17);
		p_engine_changeLvl (283, 72, 24);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl287, BANK_20, BANK_17);
		p_engine_changeLvl (287, 144, 64);
	}
}

void p_lvl283 (void) __banked
{
	p_truhe_gold (37, 91, 2);

	if (v_smk == 7) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
		p_engine_changeLvl (282, 72, 120);
	}
	else if (v_smk == 142) {
		p_engine_loadMap (v_lvl284, BANK_20, BANK_17);
		p_engine_changeLvl (284, 16, 80);
	}
}

void p_lvl284 (void) __banked
{
	if (v_smk == 126) {
		p_engine_loadMap (v_lvl283, BANK_20, BANK_17);
		p_engine_changeLvl (283, 144, 80);
	}
	else if (v_smk == 142) {
		p_engine_loadMap (v_lvl285, BANK_20, BANK_17);
		p_engine_changeLvl (285, 16, 80);
	}
}

void p_lvl285 (void) __banked
{
	if (v_smk == 126) {
		p_engine_loadMap (v_lvl284, BANK_20, BANK_17);
		p_engine_changeLvl (284, 144, 80);
	}
	else if (v_smk == 142) {
		p_engine_loadMap (v_lvl286, BANK_20, BANK_17);
		p_engine_changeLvl (286, 16, 80);
	}
	
}

void p_lvl286 (void) __banked
{
	if (v_smk == 126) {
		p_engine_loadMap (v_lvl285, BANK_20, BANK_17);
		p_engine_changeLvl (285, 144, 80);
	}
	else if (v_smk == 121) {
		p_engine_loadMap (v_lvl290, BANK_20, BANK_17);
		p_engine_changeLvl (290, v_sxk, v_syk);
		p_gui_show_location (ltempelE2);
	}

}

void p_lvl287 (void) __banked
{
	p_truhe_lebenskristall (37, 88);
	p_truhe_heiltrank (51, 89);
	p_truhe_ausdauertrank (188, 90);  

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
		p_engine_changeLvl (282, 16, 64);
	}
}
