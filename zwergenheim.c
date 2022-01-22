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

#include "zwergenheim.h"

#include "engine.h"
#include "umgebung.h"
#include "truhen.h"
#include "npc.h"
#include "portale.h"
#include "locations.h"

#include "daten/lvl/lvldatzwergenheim.h"
#include "daten/lvl/lvldatgebirgspfad.h"
#include "daten/lvl/lvldatrotgebirge.h"

#include "daten/tilesets/tilesets.h"
#include "daten/txt/locations/locations.h"

void p_lvl185 (void) __banked {
	p_stein (188, 34);
	p_truhe_karte (188, 8, 55);

	if (v_smk == 31) {
		p_provianthaendler (); 
	}

	if (v_smk == 90) {

		p_engine_loadMap (v_lvl186, BANK_18, BANK_17);
		p_engine_changeLvl (186, 144, 64);
	}
        else if (v_smk == 106)
        {
                p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_17);
                p_engine_loadMap (v_lvl179, BANK_18, BANK_17);
                p_engine_changeLvl (179, 16, 64);
                p_gui_show_location (lgebirgspfad);
        }

}

void p_lvl186 (void) __banked {
	if ((v_smk == 55) || (v_smk == 93) || (v_smk == 127)) {
		p_vanyra ();
	}

        if (v_smk ==210) { p_zylra (); }

	if (v_smk == 106) {
		p_engine_loadMap (v_lvl185, BANK_18, BANK_17);
		p_engine_changeLvl (185, 16, 64);
	}
	else if (v_smk == 5) {
		p_engine_loadMap (v_lvl187, BANK_18, BANK_17);
		p_engine_changeLvl (187, 56, 120);
	}
}

void p_lvl187 (void) __banked {
	p_npc_heiler (109);

        p_portal (33);

	if ((v_smk == 80) || (v_smk == 42) || (v_smk == 46)) {
		p_waechter_zwergenheim ();
	}

	if (v_smk == 211) {
		p_ausdauerhandlerin ();
	}

	if (v_smk == 221) {
		p_engine_loadMap (v_lvl186, BANK_18, BANK_17);
		p_engine_changeLvl (186, 56, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_17);
		p_engine_loadMap (v_lvl190, BANK_19, BANK_17);
		p_engine_changeLvl (190, 56, 120);
		p_gui_show_location (lrotgebirge);
		v_region = 11;
	}
}
