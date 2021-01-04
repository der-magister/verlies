#include "tempel.h"

#include "engine.h"
#include "umgebung.h"
#include "schilder.h"
#include "truhen.h"
#include "locations.h"

#include "daten/lvl/lvldattempel.h"


void p_lvl245 (void) BANKED
{
	p_stein (44, 50);
	
	if (v_smk == 124) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl246, BANK_17);
		p_engine_loadMap (v_lvl246, BANK_19, BANK_17);
		p_engine_changeLvl (246, 16, 72);
		v_ks = 1;
	}
	else if (v_smk == 8) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl249, BANK_17);
		p_engine_loadMap (v_lvl249, BANK_19, BANK_17);
		p_engine_changeLvl (249, 80, 120);
	}
}


void p_lvl246 (void) BANKED
{
	if (v_smk == 124) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl247, BANK_17);
		p_engine_loadMap (v_lvl247, BANK_19, BANK_17);
		p_engine_changeLvl (247, 16, 72);
	}
	else if (v_smk == 108) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl245, BANK_17);
		p_engine_loadMap (v_lvl245, BANK_19, BANK_17);
		p_engine_changeLvl (245, 144, 72);
		v_ks=3;
	}
}

void p_lvl247 (void) BANKED
{
	if (v_smk == 108) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl246, BANK_17);
		p_engine_loadMap (v_lvl246, BANK_19, BANK_17);
		p_engine_changeLvl (246, 144, 72);
	}
	else if (v_smk == 124) {
		p_engine_loadTileset (BANK_19, 0, 7, v_tiles_lvl248, BANK_17);
		p_engine_loadMap (v_lvl248, BANK_19, BANK_17);
		p_engine_changeLvl (248, 16, 72);
	}
}

void p_lvl248 (void) BANKED
{
	p_truhe_proviant (195, 79, 2);
	p_truhe_karte (37, 12, 80);
	
	if (v_smk == 108) {
		p_engine_loadTileset (BANK_19, 0, 4, v_tiles_lvl247, BANK_17);
		p_engine_loadMap (v_lvl247, BANK_19, BANK_17);
		p_engine_changeLvl (247, 144, 72);
	}
}

void p_lvl249 (void) BANKED
{
	if (v_smk == 224) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl245, BANK_17);
		p_engine_loadMap (v_lvl245, BANK_19, BANK_17);
		p_engine_changeLvl (245, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl250, BANK_17);
		p_engine_loadMap (v_lvl250, BANK_19, BANK_17);
		p_engine_changeLvl (250, 80, 120);
	}
}

void p_lvl250 (void) BANKED
{
	if (v_smk == 108) {
		if ((v_tuer [4] == 0) && (v_ske == 0)) {
			p_tuerzu ();
                }
                else if ((v_tuer [4] == 0) && (v_ske == 1)) {
			v_tuer [4] = 1;
                        --v_ske;
                } 
                if (v_tuer [4] == 1)
                {
			p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl251, BANK_17);
			p_engine_loadMap (v_lvl251, BANK_19, BANK_17);
			p_engine_changeLvl (251, 144, 72);
		}
	}
	else if (v_smk == 224) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl249, BANK_17);
		p_engine_loadMap (v_lvl249, BANK_19, BANK_17);
		p_engine_changeLvl (249, 80, 24);
	}
	else if (v_smk == 8) {
		p_engine_loadTileset (BANK_19, 0, 5, v_tiles_lvl252, BANK_17);
		p_engine_loadMap (v_lvl252, BANK_19, BANK_17);
		p_engine_changeLvl (252, 80, 120);
	}
}

void p_lvl251 (void) BANKED
{
	if (v_smk == 124) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl250, BANK_17);
		p_engine_loadMap (v_lvl250, BANK_19, BANK_17);
		p_engine_changeLvl (250, 16, 72);
	}
}

void p_lvl252 (void) BANKED
{
	if (v_smk == 224) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl250, BANK_17);
		p_engine_loadMap (v_lvl250, BANK_19, BANK_17);
		p_engine_changeLvl (250, 80, 24);
	}
	else if (v_smk == 124) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl253, BANK_17);
		p_engine_loadMap (v_lvl253, BANK_19, BANK_17);
		p_engine_changeLvl (253, 16, 72);
	}
}

void p_lvl253 (void) BANKED
{
	p_stein (176, 51);
	
	if (v_smk == 108) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl252, BANK_17);
		p_engine_loadMap (v_lvl252, BANK_19, BANK_17);
		p_engine_changeLvl (252, 144, 72);
	}
	else if (v_smk == 178) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl254, BANK_17);
		p_engine_loadMap (v_lvl254, BANK_19, BANK_17);
		p_engine_changeLvl (254, 16, 96);
	}
}

void p_lvl254 (void) BANKED
{
	p_truhe_schluessel (195, 81);
	
	if (v_smk == 162) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl253, BANK_17);
		p_engine_loadMap (v_lvl253, BANK_19, BANK_17);
		p_engine_changeLvl (253, 144, 96);
	}
	else if (v_smk == 221) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl255, BANK_17);
		p_engine_loadMap (v_lvl255, BANK_19, BANK_17);
		p_engine_changeLvl (255, 56, 24);
	}
}

void p_lvl255 (void) BANKED
{
	if (v_smk == 5) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl254, BANK_17);
		p_engine_loadMap (v_lvl254, BANK_19, BANK_17);
		p_engine_changeLvl (254, 56, 120);
	}
	else if (v_smk == 90) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl256, BANK_17);
		p_engine_loadMap (v_lvl256, BANK_19, BANK_17);
		p_engine_changeLvl (256, 144, 64);
	}
}

void p_lvl256 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadTileset (BANK_19, 0, 9, v_tiles_lvl255, BANK_17);
		p_engine_loadMap (v_lvl255, BANK_19, BANK_17);
		p_engine_changeLvl (255, 24, 64);
	}
}
