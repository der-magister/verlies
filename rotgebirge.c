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

#include "daten/txt/schilder/schildertxt.h"

void p_lvl190 (void) BANKED
{
	p_schild (164, schildtxt10);
	p_schild (55, schildtxt11);

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
	p_busch (195, 5);
	p_truhe_karte (195, 9, 60); 

	if (v_smk == 220)
	{
		p_engine_loadMap (v_lvl190, BANK_19, BANK_17);
		p_engine_changeLvl (190, 48, 24);
	}
	else if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl193, BANK_19, BANK_17);
		p_engine_changeLvl (193, 144, 64);
	}
	else if (v_smk == 106) {
		p_engine_loadMap (v_lvl203, BANK_19, BANK_17);
		p_engine_changeLvl (203, 16, 64);
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

void p_lvl194 (void) BANKED
{
	p_stein (110, 35);
	p_stein (83, 36);
	p_stein (45, 37);
	p_stein (47, 38);
	p_stein (49, 39);

	if (v_smk == 227) {
		p_engine_loadMap (v_lvl193, BANK_19, BANK_17);
		p_engine_changeLvl (193, 104, 24);
	}
	else if (v_smk == 108) {
		p_engine_loadMap (v_lvl195, BANK_19, BANK_17);
		p_engine_changeLvl (195, 144, 72);
	}
	else if (v_smk == 11) {
		p_engine_loadMap (v_lvl196, BANK_19, BANK_17);
		p_engine_changeLvl (196, 104, 120);
	}
}

void p_lvl195 (void) BANKED
{
	p_truhe_heiltrank (181, 57);

	p_stein (120, 41);
	p_stein (112, 42);

	if (v_smk == 124) {
		p_engine_loadMap (v_lvl194, BANK_19, BANK_17);
		p_engine_changeLvl (194, 16, 72);
	}
}

void p_lvl196 (void) BANKED
{
	if (v_smk == 227) {
		p_engine_loadMap (v_lvl194, BANK_19, BANK_17);
		p_engine_changeLvl (194, 104, 24);
	}
	else if (v_smk == 5) {
		p_engine_loadMap (v_lvl197, BANK_19, BANK_17);
		p_engine_changeLvl (197, 56, 120);
	}
}

void p_lvl197 (void) BANKED
{
	p_truhe_gold (39, 58, 2);

	if (v_smk == 221) {
		p_engine_loadMap (v_lvl196, BANK_19, BANK_17);
		p_engine_changeLvl (196, 56, 24);
	}
	else if (v_smk == 88) {
		p_engine_loadMap (v_lvl198, BANK_19, BANK_17);
		p_engine_changeLvl (198, 16, 56);
	}
}

void p_lvl198 (void) BANKED
{
	p_schild (65, schildtxt12);

	if (v_smk == 72) {
		p_engine_loadMap (v_lvl197, BANK_19, BANK_17);
		p_engine_changeLvl (197, 144, 56);
	}
	else if (v_smk == 88) {
		p_engine_loadMap (v_lvl199, BANK_19, BANK_17);
		p_engine_changeLvl (199, 16, 56);
	}
}

void p_lvl199 (void) BANKED
{
	if (v_smk == 72) {
		p_engine_loadMap (v_lvl198, BANK_19, BANK_17);
		p_engine_changeLvl (198, 144, 56);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl200, BANK_19, BANK_17);
		p_engine_changeLvl (200, 80, 24);
	}
}

void p_lvl200 (void) BANKED
{
	p_busch (110, 6);

	if (v_smk == 8) {
		p_engine_loadMap (v_lvl199, BANK_19, BANK_17);
		p_engine_changeLvl (199, 80, 120);
	}
	else if (v_smk == 108) {
		p_engine_loadMap (v_lvl201, BANK_19, BANK_17);
		p_engine_changeLvl (201, 144, 72);
	}
	else if (v_smk == 220) {
		p_engine_loadMap (v_lvl202, BANK_19, BANK_17);
		p_engine_changeLvl (202, 48, 24);
	}
}

void p_lvl201 (void) BANKED
{
	p_stein (187, 40);

	if ((v_keyflag == 1) && (v_smk == 187))
	{
		p_truhe_kraeuterbeutel ();
	} 

	if (v_smk == 124) {
		p_engine_loadMap (v_lvl200, BANK_19, BANK_17);
		p_engine_changeLvl (200, 16, 72);
	}
}

void p_lvl202 (void) BANKED
{
	p_truhe_gold (181, 59, 1);

	if (v_smk == 4) {
		p_engine_loadMap (v_lvl200, BANK_19, BANK_17);
		p_engine_changeLvl (200, 48, 120);
	}
	else if (v_smk == 224) {
		p_engine_loadMap (v_lvl203, BANK_19, BANK_17);
		p_engine_changeLvl (203, 80, 24);
	}
}

void p_lvl203 (void) BANKED
{
	if (v_smk == 8) {
		p_engine_loadMap (v_lvl202, BANK_19, BANK_17);
		p_engine_changeLvl (202, 80, 120);
	}
	else if (v_smk == 90) {
		p_engine_loadMap (v_lvl192, BANK_19, BANK_17);
		p_engine_changeLvl (192, 144, 64);
	}
}
