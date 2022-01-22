//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "minen.h"

#include "engine.h"
#include "truhen.h"
#include "schilder.h"
#include "umgebung.h"
#include "locations.h"

#include "truhen.h" 
#include "gegner.h"
#include "lvlstatus.h"
#include "player.h"
#include "hud.h"
#include "lvlgegner.h"

#include "daten/tilesets/tilesets.h"

#include "daten/lvl/lvldatminen-1.h"
#include "daten/lvl/lvldatminen-2.h"
#include "daten/lvl/lvldatrotgebirge.h"

#include "daten/txt/schilder/schildertxt.h"
#include "daten/txt/locations/locations.h"

void p_lvl205 (void) __banked
{
	p_schild (173, schildtxt13);
	p_stein (74, 43);

	if (v_smk == 72) {
		p_engine_loadMap (v_lvl206, BANK_19, BANK_17);  
        	p_engine_changeLvl (206, 144, 56);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl207, BANK_19, BANK_17);
		p_engine_changeLvl (207, 80, 120);
	}
	else if (v_smk == 224) {
		p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_17);
		p_engine_loadMap (v_lvl198, BANK_19, BANK_17);
		p_engine_changeLvl (198, 80, 24);
		p_gui_show_location (lrotgebirge);
		v_region = 11;
	}
}

void p_lvl206 (void) __banked
{
	p_truhe_karte (181, 10, 62);

	if (v_smk == 88) {
		p_engine_loadMap (v_lvl205, BANK_19, BANK_17);
		p_engine_changeLvl (205, 16, 56);
	}
}

void p_lvl207 (void) __banked
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl205, BANK_19, BANK_17);
		p_engine_changeLvl (205, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		//p_engine_changeLvl (206, 80, 120);
		//v_lvl = 208;
		v_keyflag = 0;
                p_gegner_stop ();
                delay (150);
                v_aktion = TRUE;
                v_lvl = 208;
                set_bkg_tiles (1, 1, 18, 14, v_leveldaten);
                p_truhe_status ();
                v_sxk = 80, v_syk = 120;
                p_spieler_set_sprite ();
                p_lvl_status ();
                p_hud_showLvl ();
                p_set_gegner ();
                DISPLAY_ON;
	}
}

void p_lvl208 (void) __banked
{
	if ((v_smk == 8) && (v_keyflag == 1)) {
		if (v_schalter [6] == 0) {
			p_tuerzu ();
		}
	}

	p_truhe_proviant (176, 63, 2);

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
	else if ((v_smk == 8) && (v_schalter [6] == 1)) {
		p_engine_loadMap (v_lvl212, BANK_19, BANK_17);
		p_engine_changeLvl (212, 80, 120);
	}
}

void p_lvl209 (void) __banked
{
	if (v_smk == 124) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		//p_engine_changeLvl (208, 16, 72);
		v_keyflag = 0;
                p_gegner_stop ();
                delay (150);
                v_aktion = TRUE;
                v_lvl = 208;
                set_bkg_tiles (1, 1, 18, 14, v_leveldaten);
                p_truhe_status ();
                v_sxk = 16, v_syk = 72;
                p_spieler_set_sprite ();
                p_lvl_status ();
                p_hud_showLvl ();
                p_set_gegner ();
                DISPLAY_ON;
	}
}

void p_lvl210 (void) __banked
{
	if (v_smk == 144) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		//p_engine_changeLvl (208, 144, 88);
		v_keyflag = 0;
                p_gegner_stop ();
                delay (150);
                v_aktion = TRUE;
                v_lvl = 208;
                set_bkg_tiles (1, 1, 18, 14, v_leveldaten);
                p_truhe_status ();
                v_sxk = 144, v_syk = 88;
                p_spieler_set_sprite ();
                p_lvl_status ();
                p_hud_showLvl ();
                p_set_gegner ();
                DISPLAY_ON;
	}
	else if (v_smk == 124) {
		p_engine_loadMap (v_lvl211, BANK_19, BANK_17);
		p_engine_changeLvl (211, 16, 72);
	}
}

void p_lvl211 (void) __banked
{
	p_stein (159, 44);
	p_schalter_tuer (195, 6);

	if (v_smk == 108) {
		p_engine_loadMap (v_lvl210, BANK_19, BANK_17);
		p_engine_changeLvl (210, 144, 72);
	}

}

void p_lvl212 (void) __banked
{
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl208, BANK_19, BANK_17);
		//p_engine_changeLvl (208, 80, 24);
		v_keyflag = 0;
                p_gegner_stop ();
                delay (150);
                v_aktion = TRUE;
                v_lvl = 208;
                set_bkg_tiles (1, 1, 18, 14, v_leveldaten);
                p_truhe_status ();
                v_sxk = 80, v_syk = 24;
                p_spieler_set_sprite ();
                p_lvl_status ();
                p_hud_showLvl ();
                p_set_gegner ();
                DISPLAY_ON;
	}
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl213, BANK_19, BANK_17);
		p_engine_changeLvl (213, 80, 120);
	}
}

void p_lvl213 (void) __banked
{
	p_truhe_gold (193, 64, 2);
	p_stein (92, 45);

	if (v_smk == 90) {
		p_engine_loadMap (v_lvl214, BANK_19, BANK_17);
		p_engine_changeLvl (214, 144, 64);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl212, BANK_19, BANK_17);
		p_engine_changeLvl (212, 80, 24);
	}
	else if (v_smk == 34) {
		p_engine_loadMap (v_lvl217, BANK_19, BANK_17);
		p_engine_changeLvl (217, 16, 32);
	}

}

void p_lvl214 (void) __banked
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl213, BANK_19, BANK_17);
		p_engine_changeLvl (213, 16, 64);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl215, BANK_19, BANK_17);
		p_engine_changeLvl (215, 80, 24);
	}
}

void p_lvl215 (void) __banked
{
	if (v_smk == 8) {
		p_engine_loadMap (v_lvl214, BANK_19, BANK_17);
		p_engine_changeLvl (214, 80, 120);
	}
	else if (v_smk == 198) {
		p_engine_loadMap (v_lvl216, BANK_19, BANK_17);
		p_engine_changeLvl (216, 144, 112);
	}
}

void p_lvl216 (void) __banked
{
	p_truhe_schaufel ();

	if (v_smk == 214) {
		p_engine_loadMap (v_lvl215, BANK_19, BANK_17);
		p_engine_changeLvl (215, 16, 112);
	}
}

void p_lvl217 (void) __banked
{
	p_umgebung_loch (85, 1);

	if (v_smk == 18) {
		p_engine_loadMap (v_lvl213, BANK_19, BANK_17);
		p_engine_changeLvl (213, 144, 32);
	}
	else if (v_smk == 85) {
		if (v_loch [1] == 1) {
			p_engine_loadTileset (BANK_2, 1, 37, mine2, BANK_17);
			p_engine_loadMap (v_lvl220, BANK_19, BANK_17);
			p_engine_changeLvl (220, v_sxk, v_syk);
			p_gui_show_location (lmine2);
		}
	}	
}
