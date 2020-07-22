//pragma bank=17

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

#include "gebirgspfad.h"

#include "engine.h"

#include "daten/lvl/lvldatgebirgspfad.h"

void p_lvl168 (void) __banked
{
        if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl169, BANK_18, BANK_17);
                p_engine_changeLvl (169, 144, 72);
        }
}

void p_lvl169 (void) __banked
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl168, BANK_18, BANK_17);
		p_engine_changeLvl (168, 16, 72);
	}
	else if (v_smk == 5)
	{
		p_engine_loadMap (v_lvl170, BANK_18, BANK_17);
		p_engine_changeLvl (170, 56, 120);
	}
}

void p_lvl170 (void) __banked
{
	if (v_smk == 221)
	{
		p_engine_loadMap (v_lvl169, BANK_18, BANK_17);
		p_engine_changeLvl (169, 56, 24);
	}
	else if (v_smk == 5)
	{
		p_engine_loadMap (v_lvl171, BANK_18, BANK_17);
		p_engine_changeLvl (171, 56, 120);
	}
}

void p_lvl171 (void) __banked
{
	if (v_smk == 221)
	{
		p_engine_loadMap (v_lvl170, BANK_18, BANK_17);
		p_engine_changeLvl (170, 56, 24);
	}
	else if (v_smk == 54)
	{
		p_engine_loadMap (v_lvl172, BANK_18, BANK_17);
		p_engine_changeLvl (172, 144, 48);
	}
}

void p_lvl172 (void) __banked
{
	if (v_smk == 70)
	{
		p_engine_loadMap (v_lvl171, BANK_18, BANK_17);
		p_engine_changeLvl (171, 16, 48);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl173, BANK_18, BANK_17);
		p_engine_changeLvl (173, 144, 72); 
	}
}

void p_lvl173 (void) __banked
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl172, BANK_18, BANK_17);
		p_engine_changeLvl (172, 16, 72);
	}
	else if (v_smk == 224)
	{
		p_engine_loadMap (v_lvl174, BANK_18, BANK_17);
		p_engine_changeLvl (174, 80, 24);
	}
	else if (v_smk == 11)
	{
		p_engine_loadMap (v_lvl175, BANK_18, BANK_17);
		p_engine_changeLvl (175, 104, 120);
	}
}
