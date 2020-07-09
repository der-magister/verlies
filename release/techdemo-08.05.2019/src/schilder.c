//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2019 Heiko Wolf
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
//   Kontakt: magister@skywave-2000.de


#pragma bank=12



#include "globals.h"
//#include "engine.h"
//#include "hud.h"
#include "text.h"
#include "lvlstatus.h"

#include "daten/txt/schilder/schluessel.h"
//#include "daten/txt/schilder/tuerzu.h"

UINT8 v_schalter [20];

///setzt Schild
void p_schild (UINT8 l_xk, UINT8 l_yk, unsigned char l_txt [81]) BANKED
{
        if ((l_xk == v_sxk) && (l_yk == v_syk))
        { 
                p_engine_set_txt (l_txt);
                delay (150);
        }
}

///verschlossene Tür
/*void p_schluessel () BANKED
{
  p_hud_hide ();
  p_engine_set_txt (schluessel);
  p_engine_after_txt ();
}*/

///Tür zu
void p_tuerzu () BANKED
{
  p_engine_set_txt (schluessel);
}

///Schalter zum öffnen einer Tür (Koordinaten Schalterlage, Koordinaten Schalteränderung, Koordinaten Türänderung, Questnummer)
void p_schalter_tuer (UINT8 l_smk, UINT8 l_nr) BANKED
{
	if (v_smk == l_smk)
	{
		if (v_schalter [l_nr] == 0)
		{
			++v_schalter [l_nr];
			p_lvl_status ();
		}
	}
}
