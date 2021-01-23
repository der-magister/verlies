#include "tempel-e1.h"

#include "engine.h"
#include "umgebung.h"
#include "truhen.h"
#include "locations.h"

#include "daten/tilesets/tilesets.h"
#include "daten/lvl/lvldattempel-tg.h"
#include "daten/lvl/lvldattempel-E1.h"
#include "daten/txt/locations/locations.h"

void p_lvl275 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl276, BANK_20, BANK_17);
		p_engine_changeLvl (276, 16, 64);
	}
}

void p_lvl276 (void) BANKED
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

void p_lvl277 (void) BANKED
{
	if (v_smk == 90) {
		p_engine_loadMap (v_lvl276, BANK_20, BANK_17);
		p_engine_changeLvl (276, 144, 64);
	} 
	else if (v_smk == 8) {
		p_engine_loadMap (v_lvl278, BANK_20, BANK_17);
		p_engine_changeLvl (278, 80, 120);
	}
}

void p_lvl278 (void) BANKED
{	
	if (v_smk == 224) {
		p_engine_loadMap (v_lvl277, BANK_20, BANK_17);
		p_engine_changeLvl (277, 80, 24);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl279, BANK_20, BANK_17);
		p_engine_changeLvl (279, 144, 64);
	}
}

void p_lvl279 (void) BANKED
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

void p_lvl280 (void) BANKED
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

void p_lvl281 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl280, BANK_20, BANK_17);
		p_engine_changeLvl (280, 16, 64);
	}
	else if (v_smk == 223) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
		p_engine_changeLvl (282, 72, 24);
	}
}

void p_lvl282 (void) BANKED
{
	if (v_smk == 7) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
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

void p_lvl283 (void) BANKED
{
	if (v_smk == 7) {
		p_engine_loadMap (v_lvl282, BANK_20, BANK_17);
		p_engine_changeLvl (282, 72, 120);
	}
	else if (v_smk == 142) {
		p_engine_loadMap (v_lvl284, BANK_20, BANK_17);
		p_engine_changeLvl (284, 16, 80);
	}
}

void p_lvl284 (void) BANKED
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

void p_lvl285 (void) BANKED
{
	if (v_smk == 126) {
		p_engine_loadMap (v_lvl284, BANK_17, BANK_20);
		p_engine_changeLvl (284, 144, 80);
	}
	else if (v_smk == 142) {
		p_engine_loadMap (v_lvl286, BANK_20, BANK_17);
		p_engine_changeLvl (286, 16, 80);
	}
	
}
