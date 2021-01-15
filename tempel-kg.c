//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2021 Heiko Wolf
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

#include "tempel-kg.h"

#include "engine.h"
#include "umgebung.h"
#include "schilder.h"
#include "truhen.h"
#include "locations.h"

#include "daten/tilesets/tilesets.h"
#include "daten/lvl/lvldattempel-tg.h"
#include "daten/txt/locations/locations.h"
#include "daten/lvl/lvldattempel-kg.h"
#include "daten/txt/schilder/schildertxt.h"

void p_lvl260 (void) BANKED
{
	p_truhe_karte (51, 13, 82);
	
	if (v_smk == 90) {
		p_engine_loadMap (v_lvl261, BANK_20, BANK_17);
		p_engine_changeLvl (261, 144, 64);
	}
	
}

void p_lvl261 (void) BANKED
{
	p_stein (188, 52);
	
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl260, BANK_20, BANK_17);
		p_engine_changeLvl (260, 16, 64);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl262, BANK_20, BANK_17);
		p_engine_changeLvl (262, 80, 120);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl265, BANK_20, BANK_17);
		p_engine_changeLvl (265, 80, 24);
	} 
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl268, BANK_20, BANK_17);
		p_engine_changeLvl (268, 144, 64);
	}
}

void p_lvl262 (void) BANKED
{
	p_truhe_proviant (181, 83, 1);
	
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl261, BANK_20, BANK_17);
		p_engine_changeLvl (261, 80, 24);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl263, BANK_20, BANK_17);
		p_engine_changeLvl (263, 144, 64);
	}
}

void p_lvl263 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl262, BANK_20, BANK_17);
		p_engine_changeLvl (262, 16, 64);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl264, BANK_20, BANK_17);
		p_engine_changeLvl (264, 144, 64); 
	} 
}

void p_lvl264 (void) BANKED
{
	p_truhe_schluessel (110, 84);
	
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl263, BANK_20, BANK_17);
		p_engine_changeLvl (263, 16, 64);
	}
}

void p_lvl265 (void) BANKED
{
	if (v_smk == 8) {
		p_engine_loadMap (v_lvl261, BANK_20, BANK_17);
		p_engine_changeLvl (261, 80, 120);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl266, BANK_20, BANK_17);
		p_engine_changeLvl (266, 144, 64);
	}
}

void p_lvl266 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl265, BANK_20, BANK_17);
		p_engine_changeLvl (265, 16, 64);
	}
	
	else if (v_smk == 90) {
		if (v_schalter [7] == 0) {
			p_tuerzu ();
		}
		else if (v_schalter [7] == 1) {
			p_engine_loadMap (v_lvl267, BANK_20, BANK_17);
			p_engine_changeLvl (267, 144, 64);
		}
	}
}

void p_lvl267 (void) BANKED
{
	p_truhe_stoff (133, 85);
	
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl266, BANK_20, BANK_17);
		p_engine_changeLvl (266, 16, 64);
	}
}

void p_lvl268 (void) BANKED
{
	p_schalter_tuer (181, 7);
	
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl261, BANK_20, BANK_17);
		p_engine_changeLvl (261, 16, 64); 
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl269, BANK_20, BANK_17);
		p_engine_changeLvl (269, 144, 64);
	}
}

void p_lvl269 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl268, BANK_20, BANK_17);
		p_engine_changeLvl (268, 16, 64);
	}
	else if (v_smk == 90) {
		if ((v_tuer [5] == 0) && (v_ske == 0)) {
			p_tuerzu ();
                }
                else if ((v_tuer [5] == 0) && (v_ske == 1)) {
			v_tuer [5] = 1;
                        --v_ske;
                } 
                if (v_tuer [5] == 1)
                {
			p_engine_loadMap (v_lvl270, BANK_20, BANK_17);
			p_engine_changeLvl (270, 144, 64);
		} 
	}
}

void p_lvl270 (void) BANKED
{
	p_schild (134, schildtxt17);
	p_schild (65, schildtxt18);
	p_schild (173, schildtxt19);
	p_schild (91, schildtxt20);
	p_schild (127, schildtxt21);
	
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl269, BANK_20, BANK_17);
		p_engine_changeLvl (269, 24, 64);
	}
}
