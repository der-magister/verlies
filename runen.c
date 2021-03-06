//#pragma bank=12

#include "runen.h"

#include "engine.h"
#include "locations.h"

#include "daten/tilesets/tilesets.h"
#include "daten/txt/locations/locations.h"
#include "daten/lvl/lvldatrotgebirge.h"

void p_portalrune (void) BANKED
{
	if ((v_sstaub >= 1) && (v_keyflag == 2)) {
		//von Mine nach Rotgebirge
		if ((v_lvl >= 205) && (v_lvl <= 236)) {

			p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_12);
			v_keyflag = 1;
			p_engine_loadMap (v_lvl198, BANK_19, BANK_12);
			p_engine_changeLvl (198, 80, 40);
			p_gui_show_location (lrotgebirge);

		}
		--v_sstaub;
	}
} 
