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

#include "minen.h"

#include "engine.h"

#include "daten/lvl/lvldatminen-1.h"

void p_lvl205 (void) BANKED
{
	if (v_smk == 72) {
		p_engine_loadMap (v_lvl206, BANK_19, BANK_17);  
        	p_engine_changeLvl (206, 144, 56);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl207, BANK_19, BANK_17);
		p_engine_changeLvl (207, 80, 120);
	}
}

void p_lvl206 (void) BANKED
{
	if (v_smk == 88) {
		p_engine_loadMap (v_lvl205, BANK_19, BANK_17);
		p_engine_changeLvl (205, 16, 56);
	}
}

void p_lvl207 (void) BANKED
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl205, BANK_19, BANK_17);
		p_engine_changeLvl (205, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		p_engine_changeLvl (208, 80, 120);
	}
}

void p_lvl208 (void) BANKED
{
	if (v_smk == 108) {
		p_engine_loadMap (v_lvl209, BANK_19, BANK_17);
		p_engine_changeLvl (209, 144, 72);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl207, BANK_19, BANK_17);
		p_engine_changeLvl (207, 80, 24);
	}
	else if (v_smk == 160) {
		p_engine_loadMap (v_lvl210, BANK_19, BANK_17);
		p_engine_changeLvl (210, 16, 88);
	}
}

void p_lvl209 (void) BANKED
{
	if (v_smk == 124) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		p_engine_changeLvl (208, 16, 72);
	}
}

void p_lvl210 (void) BANKED
{
	
}