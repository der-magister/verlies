#include "zwergenheim.h"

#include "engine.h"
#include "umgebung.h"
#include "truhen.h"

#include "daten/lvl/lvldatzwergenheim.h"

void p_lvl185 (void) BANKED {
	p_stein (188, 34);
	p_truhe_karte (188, 8, 55);

	if (v_smk == 90) {

		p_engine_loadMap (v_lvl186, BANK_18, BANK_17);
		p_engine_changeLvl (186, 144, 64);
	}

}

void p_lvl186 (void) BANKED {
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl185, BANK_18, BANK_17);
		p_engine_changeLvl (185, 16, 64);
	}
	else if (v_smk == 5) {
		p_engine_loadMap (v_lvl187, BANK_18, BANK_17);
		p_engine_changeLvl (187, 56, 120);
	}
}

void p_lvl187 (void) BANKED {
	if (v_smk == 221) {
		p_engine_loadMap (v_lvl186, BANK_18, BANK_17);
		p_engine_changeLvl (186, 56, 24);
	}
}
