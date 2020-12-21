//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "minen2.h"

#include "engine.h"
#include "schilder.h"
#include "truhen.h"
#include "umgebung.h"
#include "locations.h"

#include "daten/lvl/lvldatminen-1.h"
#include "daten/lvl/lvldatminen-2.h"
#include "daten/lvl/lvldatminen-3.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/schilder/schildertxt.h"
#include "daten/txt/locations/locations.h"

void p_lvl220 (void) BANKED
{
	p_schild (75, schildtxt14);

	if (v_smk == 223) {
		p_engine_loadMap (v_lvl221, BANK_19, BANK_17);
		p_engine_changeLvl (221, 72, 24);
	}
}

void p_lvl221 (void) BANKED
{
	p_truhe_proviant (195, 66, 2);
	p_stein (187, 46);

	if (v_smk == 7) {
		p_engine_loadMap (v_lvl220, BANK_19, BANK_17);
		p_engine_changeLvl (220, 72, 120);
	}
	else if (v_smk == 223) {
		p_engine_loadMap (v_lvl222, BANK_19, BANK_17);
		p_engine_changeLvl (222, 72, 24);
	}
}

void p_lvl222 (void) BANKED
{
	p_truhe_karte (182, 11, 67);

	if (v_smk == 7) {
		p_engine_loadMap (v_lvl221, BANK_19, BANK_17);
		p_engine_changeLvl (221, 72, 120);
	}
	else if (v_smk == 160) {
		p_engine_loadMap (v_lvl223, BANK_19, BANK_17);
		p_engine_changeLvl (223, 16, 88);
	}
	else if (v_smk == 126) {
		p_engine_loadMap (v_lvl227, BANK_19, BANK_17);
		p_engine_changeLvl (227, 144, 80);
	}
}

void p_lvl223 (void) BANKED
{
	p_schild (194, schildtxt15);

	if (v_smk == 144) {
		p_engine_loadMap (v_lvl222, BANK_19, BANK_17);
		p_engine_changeLvl (222, 144, 88);
	}
	else if (v_smk == 160) {
		p_engine_loadMap (v_lvl224, BANK_19, BANK_17);
		p_engine_changeLvl (224, 16, 88);
	}
}

void p_lvl224 (void) BANKED
{
	p_truhe_gold (183, 68, 2);
	p_truhe_gold (195, 69, 2);
	p_truhe_gold (37, 70, 1);
	p_truhe_erz (49, 75);

	if (v_smk == 144) {
		p_engine_loadMap (v_lvl223, BANK_19, BANK_17);
		p_engine_changeLvl (223, 144, 88);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl225, BANK_19, BANK_17);
		p_engine_changeLvl (225, 80, 120);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl226, BANK_19, BANK_17);
		p_engine_changeLvl (226, 80, 24);
	}
}

void p_lvl225 (void) BANKED
{
	p_truhe_heiltrank (37, 71);
	p_truhe_heiltrank (51, 72);

	if (v_smk == 224) {
		p_engine_loadMap (v_lvl224, BANK_19, BANK_17);
		p_engine_changeLvl (224, 80, 24);
	}
}

void p_lvl226 (void) BANKED
{
	p_truhe_ausdauertrank (184, 73);
	p_truhe_proviant (191, 74, 2);

	if (v_smk == 8) {
		p_engine_loadMap (v_lvl224, BANK_19, BANK_17);
		p_engine_changeLvl (224, 80, 120);
	}
}

void p_lvl227 (void) BANKED
{
	if (v_smk == 142) {
		p_engine_loadMap (v_lvl222, BANK_19, BANK_17);
		p_engine_changeLvl (222, 16, 80);
	}
	else if (v_smk == 198) {
		p_engine_loadMap (v_lvl228, BANK_19, BANK_17);
		p_engine_changeLvl (228, 144, 112);
	}
}

void p_lvl228 (void) BANKED
{
	if (v_smk == 214) {
		p_engine_loadMap (v_lvl227, BANK_19, BANK_17);
		p_engine_changeLvl (227, 16, 112);
	}
	else if (v_smk == 220) {
		p_engine_loadMap (v_lvl229, BANK_19, BANK_17);
		p_engine_changeLvl (229, 48, 24);
	}
}

void p_lvl229 (void) BANKED
{
	p_stein (104, 47);

	if (v_smk == 4) {
		p_engine_loadMap (v_lvl228, BANK_19, BANK_17);
		p_engine_changeLvl (228, 48, 120);
	}
	else if (v_smk == 106) {
		p_engine_loadMap (v_lvl230, BANK_19, BANK_17);
		p_engine_changeLvl (230, 16, 64);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl231, BANK_19, BANK_17);
		p_engine_changeLvl (231, 144, 64);
	}

}

void p_lvl230 (void) BANKED
{
	if (v_smk == 90) {
		p_engine_loadMap (v_lvl229, BANK_19, BANK_17);
		p_engine_changeLvl (229, 144, 64);
	}
}

void p_lvl231 (void) BANKED
{
	p_umgebung_loch (57, 2);

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl229, BANK_19, BANK_17);
		p_engine_changeLvl (229, 16, 64);
	}
	else if (v_smk == 57) {
		if (v_loch [2] == 1) {
			p_engine_loadTileset (BANK_2, 1, 37, mine3, BANK_17);
			p_engine_loadMap (v_lvl233, BANK_19, BANK_17);
			p_engine_changeLvl (233, v_sxk, v_syk);
			p_gui_show_location (lmine3);
		}
	}
}
