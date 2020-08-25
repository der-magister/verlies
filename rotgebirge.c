#include "rotgebirge.h"

#include "engine.h"
#include "umgebung.h"
#include "truhen.h"
#include "npc.h"
#include "portale.h"
#include "locations.h"
#include "schilder.h"

#include "daten/lvl/lvldatzwergenheim.h"
#include "daten/lvl/lvldatrotgebirge.h"

#include "daten/txt/schilder/schildtxt10.h"

void p_lvl190 (void) BANKED
{
	p_schild (164, schildtxt10);

	if (v_smk == 124) {
		p_engine_loadMap (v_lvl191, BANK_19, BANK_17);
		p_engine_changeLvl (191, 16, 72);
	}
	else if (v_smk == 4) 
	{
		p_engine_loadMap (v_lvl192, BANK_19, BANK_17);
		p_engine_changeLvl (192, 48, 120);
	}

}

void p_lvl191 (void) BANKED
{
	p_truhe_proviant (51, 56, 2); 

	if (v_smk == 108) {
		p_engine_loadMap (v_lvl190, BANK_19, BANK_17);
		p_engine_changeLvl (190, 144, 72);
	}
}

void p_lvl192 (void) BANKED
{
	if (v_smk == 221)
	{
		p_engine_loadMap (v_lvl190, BANK_19, BANK_17);
		p_engine_changeLvl (190, 56, 24);
	}
	else if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl193, BANK_19, BANK_17);
		p_engine_changeLvl (193, 144, 64);
	}
}

void p_lvl193 (void) BANKED
{
	if (v_smk == 106) {
		p_engine_loadMap (v_lvl192, BANK_19, BANK_17);
		p_engine_changeLvl (192, 16, 64);
	}
	else if (v_smk == 11) {
		p_engine_loadMap (v_lvl194, BANK_19, BANK_17);
		p_engine_changeLvl (194, 104, 120);
	}
}
