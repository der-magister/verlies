//   Verlies - ein Adventure im Retrodesign
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

#pragma bank=17

#include "alte-baum.h"

#include "engine.h"
#include "truhen.h"
#include "umgebung.h"
#include "schilder.h"

#include "daten/lvl/v_lvl145.h"
#include "daten/lvl/v_lvl146.h"
#include "daten/lvl/v_lvl147.h"
#include "daten/lvl/v_lvl148.h"
#include "daten/lvl/v_lvl149.h"
#include "daten/lvl/v_lvl150.h"
#include "daten/lvl/v_lvl151.h"
#include "daten/lvl/v_lvl152.h"
#include "daten/lvl/v_lvl153.h"
#include "daten/lvl/v_lvl154.h"
#include "daten/lvl/v_lvl155.h"
#include "daten/lvl/v_lvl156.h"
#include "daten/lvl/v_lvl157.h"
#include "daten/lvl/v_lvl158.h"
#include "daten/lvl/v_lvl159.h"
#include "daten/lvl/v_lvl160.h"
#include "daten/lvl/v_lvl161.h"
#include "daten/lvl/v_lvl162.h"
#include "daten/lvl/v_lvl163.h"
#include "daten/lvl/v_lvl164.h"
#include "daten/lvl/v_lvl165.h"

void p_lvl145 (void) BANKED
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl146, BANK_18, BANK_17);
		p_engine_changeLvl (146, 16, 72);
	}
}

void p_lvl146 (void) BANKED
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl145, BANK_18, BANK_17);
		p_engine_changeLvl (145, 144, 72);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl147, BANK_18, BANK_17);
		p_engine_changeLvl (147, 16, 72);
	}
}

void p_lvl147 (void) BANKED
{
	p_truhe_proviant (195, 44, 2);
	p_busch (186, 3);

	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl146, BANK_18, BANK_17);
		p_engine_changeLvl (146, 144, 72);
	}
	else if (v_smk == 222)
	{
		p_engine_loadMap (v_lvl148, BANK_18, BANK_17);
		p_engine_changeLvl (148, 64, 24);
	}
}

void p_lvl148 (void) BANKED
{
	if (v_smk == 6)
	{
		p_engine_loadMap (v_lvl147, BANK_18, BANK_17);
		p_engine_changeLvl (147, 64, 120);
	}
	else if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl149, BANK_18, BANK_17);
		p_engine_changeLvl (149, 144, 64);
	}
	else if (v_smk == 178)
	{
		p_engine_loadMap (v_lvl150, BANK_18, BANK_17);
		p_engine_changeLvl (150, 16, 96);
	}
}

void p_lvl149 (void) BANKED
{
	p_truhe_schluessel (188, 45);

	if (v_smk == 106)
	{
		p_engine_loadMap (v_lvl148, BANK_18, BANK_17);
		p_engine_changeLvl (148, 16, 64);
	}
}

void p_lvl150 (void) BANKED
{
	if (v_keyflag == 1)
        {
                if (v_smk == 11)
                {
                        if ((v_tuer [3] == 0) && (v_ske == 0)) 
                        {
                                p_tuerzu ();
                        }
                        else if ((v_tuer [3] == 0) && (v_ske == 1))
                        {
                                v_tuer [3] = 1;
                                --v_ske;
                        } 
                        if (v_tuer [3] == 1)
                        {
                                p_engine_loadMap (v_lvl151, BANK_18, BANK_17);
				p_engine_changeLvl (151, 104, 120);
                        }
                }
		else if (v_smk == 162)
		{
			p_engine_loadMap (v_lvl148, BANK_18, BANK_17);
			p_engine_changeLvl (148, 144, 96);
		}
	}
}

void p_lvl151 (void) BANKED
{
	p_stein (136, 23);

	if (v_smk == 227)
	{
		p_engine_loadMap (v_lvl150, BANK_18, BANK_17);
		p_engine_changeLvl (150, 104, 24);
	}
	else if (v_smk == 100)
	{
		p_engine_loadMap (v_lvl152, BANK_18, BANK_17);
		p_engine_changeLvl (152, v_sxk, v_syk);
	}
}

void p_lvl152 (void) BANKED
{
	if (v_smk == 100)
	{
		p_engine_loadMap (v_lvl151, BANK_18, BANK_17);
		p_engine_changeLvl (151, v_sxk, v_syk);
	}
	else if (v_smk == 36)
	{
		p_engine_loadMap (v_lvl153, BANK_18, BANK_17);
		p_engine_changeLvl (153, 144, 40);
	}
}

void p_lvl153 (void) BANKED
{
	if (v_smk == 52)
	{
		p_engine_loadMap (v_lvl152, BANK_18, BANK_17);
		p_engine_changeLvl (152, 16, 40);
	}
	else if (v_smk == 162)
	{
		p_engine_loadMap (v_lvl154, BANK_18, BANK_17);
		p_engine_changeLvl (154, 144, 96);
	}

}

void p_lvl154 (void) BANKED
{
	p_truhe_gold (37, 46, 2);

	if (v_smk == 178)
	{
		p_engine_loadMap (v_lvl153, BANK_18, BANK_17);
		p_engine_changeLvl (153, 16, 96);
	}
	else if (v_smk == 223)
	{
		p_engine_loadMap (v_lvl155, BANK_18, BANK_17);
		p_engine_changeLvl (155, 72, 24);
	}
}

void p_lvl155 (void) BANKED
{
	p_busch (104, 4);

	if (v_smk == 7)
	{
		p_engine_loadMap (v_lvl154, BANK_18, BANK_17);
		p_engine_changeLvl (154, 72, 120);
	}
	else if (v_smk == 106)
	{
		p_engine_loadMap (v_lvl156, BANK_18, BANK_17);
		p_engine_changeLvl (156, 16, 64);
	}
}

void p_lvl156 (void) BANKED
{
	p_schalter_tuer (181, 5);

	if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl155, BANK_18, BANK_17);
		p_engine_changeLvl (155, 144, 64);
	}
	else if (v_smk == 106)
	{
		p_engine_loadMap (v_lvl157, BANK_18, BANK_17);
		p_engine_changeLvl (157, 16, 64);
	}
}

void p_lvl157 (void) BANKED
{
	if (v_smk == 90)
	{
		p_engine_loadMap (v_lvl156, BANK_18, BANK_17);
		p_engine_changeLvl (156, 144, 64);
	}
	else if (v_smk == 213)
	{
		p_engine_loadMap (v_lvl158, BANK_18, BANK_17);
		p_engine_changeLvl (158, v_sxk, v_syk);
	}
}

void p_lvl158 (void) BANKED
{
	if (v_smk == 213)
	{
		p_engine_loadMap (v_lvl157, BANK_18, BANK_17);
		p_engine_changeLvl (157, v_sxk, v_syk);
	}
	else if (v_smk == 7)
	{
		p_engine_loadMap (v_lvl159, BANK_18, BANK_17);
		p_engine_changeLvl (159, 72, 120);
	}
}

void p_lvl159 (void) BANKED
{
	p_truhe_ausdauertrank (51, 47);

	if (v_smk == 223)
	{
		p_engine_loadMap (v_lvl158, BANK_18, BANK_17);
		p_engine_changeLvl (158, 72, 24);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl160, BANK_18, BANK_17);
		p_engine_changeLvl (160, 144, 72);
	}	
}

void p_lvl160 (void) BANKED
{
	p_stein (110, 24);

	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl159, BANK_18, BANK_17);
		p_engine_changeLvl (159, 16, 72);
	}
	else if (v_smk == 223)
	{
		p_engine_loadMap (v_lvl161, BANK_18, BANK_17);
		p_engine_changeLvl (161, 72, 24);
	}
	else if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl163, BANK_18, BANK_17);
		p_engine_changeLvl (163, 144, 72);
	}
}

void p_lvl161 (void) BANKED
{
	if (v_smk == 144)
	{
		p_engine_loadMap (v_lvl162, BANK_18, BANK_17);
		p_engine_changeLvl (162, 144, 88);
	}
	else if (v_smk == 7)
	{
		p_engine_loadMap (v_lvl160, BANK_18, BANK_17);
		p_engine_changeLvl (160, 72, 120);
	}
}

void p_lvl162 (void) BANKED
{
	p_truhe_proviant (44, 48, 2);

	if (v_smk == 160)
	{
		p_engine_loadMap (v_lvl161, BANK_18, BANK_17);
		p_engine_changeLvl (161, 16, 88);
	}
}

void p_lvl163 (void) BANKED
{
	if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl160, BANK_18, BANK_17);
		p_engine_changeLvl (160, 16, 72);
	}
	else if (v_smk == 57)
	{
		p_engine_loadMap (v_lvl164, BANK_18, BANK_17);
		p_engine_changeLvl (164, v_sxk, v_syk);
	}
}

void p_lvl164 (void) BANKED
{
	if (v_smk == 57)
	{
		p_engine_loadMap (v_lvl163, BANK_18, BANK_17);
		p_engine_changeLvl (163, v_sxk, v_syk);
	}
	else if (v_smk == 124)
	{
		p_engine_loadMap (v_lvl165, BANK_18, BANK_17);
		p_engine_changeLvl (165, 16, 72);
	}
}