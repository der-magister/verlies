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

#include "minen3.h"

#include "engine.h"
#include "truhen.h"
#include "umgebung.h"
#include "npc.h"

#include "daten/lvl/lvldatminen-3.h"

void p_lvl233 (void) BANKED {
	p_stein (104, 48);

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl234, BANK_19, BANK_17);
		p_engine_changeLvl (234, 16, 64);
	}
}

void p_lvl234 (void) BANKED {
	if (v_smk == 90) {
		p_engine_loadMap (v_lvl233, BANK_19, BANK_17);
		p_engine_changeLvl (233, 144, 64);
	}
	else if (v_smk == 220) {
		p_engine_loadMap (v_lvl235, BANK_19, BANK_17);
		p_engine_changeLvl (235, 48, 24);
	}
	else if (v_smk == 106) {
		p_engine_loadMap (v_lvl236, BANK_19, BANK_17);
		p_engine_changeLvl (236, 16, 64);
	}
	
}

void p_lvl235 (void) BANKED {
	p_truhe_zauberstaub (49, 95);
	p_truhe_portalrune (186, 76);

	if (v_smk == 4) {
		p_engine_loadMap (v_lvl234, BANK_19, BANK_17);
		p_engine_changeLvl (234, 48, 120);
	}
	
}

void p_lvl236 (void) BANKED {
	p_hueterin ();
	p_truhe_aspekt_berg ();

	if (v_smk == 90) {
		p_engine_loadMap (v_lvl234, BANK_19, BANK_17);
		p_engine_changeLvl (234, 144, 64);
	}
}

