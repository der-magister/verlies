//   Verlies - ein Adventure/RPG im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
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
//   Kontakt: projekte@kabelmail.net


//#pragma bank=12

#include "runen.h"

#include "engine.h"
#include "locations.h"

#include "daten/tilesets/tilesets.h"
#include "daten/txt/locations/locations.h"
#include "daten/lvl/lvldatrotgebirge.h"

void p_portalrune (void) __banked
{
	if ((v_sstaub != 0) && (v_keyflag == 2)) {
		//von Mine nach Rotgebirge
		if (v_region = 12) {

			p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_12);
			v_keyflag = 1;
			p_engine_loadMap (v_lvl198, BANK_19, BANK_12);
			p_engine_changeLvl (198, 80, 40);
			p_gui_show_location (lrotgebirge);
			v_kampf = TRUE;
			v_region = 11;

		}
		--v_sstaub;
	}
} 
