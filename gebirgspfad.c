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
#include "locations.h"
#include "umgebung.h"
#include "schilder.h"
#include "truhen.h"

#include "daten/tilesets/wiesen_1-4-37.h"

#include "daten/lvl/lvldatgebirgspfad.h"
#include "daten/lvl/lvldatwiesen.h"

#include "daten/txt/locations/locations.h"

#include "daten/txt/schilder/schildtxt9.h"
#include "daten/txt/schilder/schildtxt10.h"

void p_lvl168 (void) __banked
{
	p_schild (49, schildtxt9);
	p_truhe_karte (44, 7, 54);

        if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl169, BANK_18, BANK_17);
                p_engine_changeLvl (169, 144, 72);
        }
        else if (v_smk == 124)
        {
        	p_engine_loadTileset (2, 4, 33, wiesen_1, BANK_17);
                p_engine_loadMap (v_lvl86, 5, BANK_17);
               	p_engine_changeLvl (86, 16, 72);
               	p_gui_show_location (lwiesen);
        }
}

void p_lvl169 (void) __banked
{
	p_truhe_proviant (195, 51, 2);

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
	p_stein (41, 25);
	p_truhe_gold (41, 52, 2);


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
	p_stein (188, 26);

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
		p_engine_changeLvl (175, 56, 120);
	}
}

void p_lvl174 (void) __banked
{
	p_stein (46, 27);
	p_stein (31, 28);
	p_stein (177, 29);
	p_stein (206, 30);
	p_stein (98, 31);
	p_stein (37, 32);

	if (v_smk == 37) { p_truhe_geldkatze2 (); }

	if (v_smk == 8)
	{
		p_engine_loadMap (v_lvl173, BANK_18, BANK_17);
		p_engine_changeLvl (173, 80, 120);
	}
}

void p_lvl175 (void) __banked
{
	if (v_smk == 221)
	{
		p_engine_loadMap (v_lvl173, BANK_18, BANK_17);
		p_engine_changeLvl (173, 104, 24);
	}
	else if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl176, BANK_18, BANK_17);
		p_engine_changeLvl (176, 144, 56);
	}
}

void p_lvl176 (void) __banked
{
	if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl175, BANK_18, BANK_17);
		p_engine_changeLvl (175, 16, 56);
	}
	else if (v_smk == 72)
	{
		p_engine_loadMap (v_lvl177, BANK_18, BANK_17);
		p_engine_changeLvl (177, 144, 56);
	}

}

void p_lvl177 (void) __banked
{
	if (v_smk == 88)
	{
		p_engine_loadMap (v_lvl176, BANK_18, BANK_17);
		p_engine_changeLvl (176, 16, 56);
	}
	else if (v_smk == 3)
	{
		p_engine_loadMap (v_lvl178, BANK_18, BANK_17);
		p_engine_changeLvl (178, 40, 120);
	}
}	

void p_lvl178 (void) __banked
{
	p_stein (92, 33);
	if (v_smk == 219)
	{
		p_engine_loadMap (v_lvl177, BANK_18, BANK_17);
		p_engine_changeLvl (177, 40, 24);
	}
	else if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl179, BANK_18, BANK_17);
		p_engine_changeLvl (179, 144, 64);
	}
}

void p_lvl179 (void) __banked
{
	p_schild (39, schildtxt10);
	if (v_smk == 106)
	{
		p_engine_loadMap (v_lvl178, BANK_18, BANK_17);
		p_engine_changeLvl (178, 16, 64);
	}
}
