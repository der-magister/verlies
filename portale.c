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

//#pragma bank=8

#include "portale.h"
#include "engine.h"
#include "text.h"
#include "hud.h"
#include "globals.h"
#include "other.h"
#include "locations.h"
#include "player.h"

#include "daten/txt/portale/portalfeensee.h"
#include "daten/txt/portale/portalfelsengrund.h"
#include "daten/txt/portale/portaleichenwald.h"
#include "daten/txt/portale/portalzwergenheim.h"
#include "daten/txt/portale/portal.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/locations/locations.h"

#include "daten/lvl/lvldatfelsengrund.h"
#include "daten/lvl/lvldatdorfseefeen.h"
#include "daten/lvl/lvldateichenwald.h"
#include "daten/lvl/lvldatzwergenheim.h"


void p_portal_init (void) __banked
{
	for (v_i = 0; v_i != 4; ++v_i) v_portal [v_i] = 0;

	v_use_portal = FALSE;
}

void p_portal_setup (void) __banked
{
	v_aktion = TRUE;
	p_engine_rahmen ();
	move_win (7, 96);
	v_win = TRUE;
}

void p_portal (UINT8 l_smk) __banked
{
	BOOLEAN l_quit;

	l_quit = FALSE;

	if (l_smk == v_smk)
	{  
		if ((v_portal [0] == 0) && (v_lvl == 2))
		{
			p_engine_set_txt (portalfelsengrund);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_portal [0] = 1;
                        return;
		}
		else if ((v_portal [1] == 0) && (v_lvl == 91)) 
		{
			p_engine_set_txt (portalfeensee);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_portal [1] = 1;                        
                        return;
		}
		//Portal im Eichenwald aktivieren
		else if ((v_portal [2] == 0) && (v_lvl == 138)) 
		{
			p_engine_set_txt (portaleichenwald);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_portal [2] = 1;
                        return;
		}
		//Portal im Zwergenheim aktivieren
                else if ((v_portal [3] == 0) && (v_lvl == 187))
                {
                        p_engine_set_txt (portalzwergenheim);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_portal [3] = 1;
                        return;
                }

                if (v_use_portal == TRUE) {
			p_portal_setup ();
			
			//Felsengrund anzeigen, wenn Portal entdeckt
			if (v_portal [0] == 1) 
			{
		        	set_win_tiles (1, 1, 18, 1, portal1);
		        }

		        //Feensee anzeigen, wenn Portal entdeckt
		        if (v_portal [1] == 1) 
		        {
		        	set_win_tiles (1, 2, 18, 1, portal2);
		        }
		        //Hain anzeigen, wenn entdeckt
		        if (v_portal [2] == 1)
		        {

		        	set_win_tiles (1, 3, 18, 1, portal3);
		        	if (v_syk >= 104) for (v_i = 0; v_i != 4; ++v_i) { move_sprite (v_i, 0, 0); }
		        }
		        //Zwergenheim anzeigen, wenn entdeckt
		        if (v_portal [3] == 1)
		        {
		        	set_win_tiles (1, 4, 18, 1, portal4);

		        }

		        SHOW_WIN;
		  			
		        while (l_quit == FALSE)
		        {
		        	if ((joypad () & J_UP) && (v_portal [0] == 1)) 
		        	{
		        		if (v_lvl == 2)
		    			{
		        			l_quit = TRUE;
		        		}
		        		else
		      			{
		      				p_engine_loadTileset (2, 8, 37, felsengrund_1, BANK_8);
        					p_engine_loadTileset (2, 38, 81, grundtiles, BANK_8);
        					p_engine_loadTileset (2, 82, 127, font, BANK_8); 
		                        	p_engine_loadTileset (BANK_2, 4, 15, felsengrund_2, BANK_8);
		                        	p_engine_loadMap (v_lvl1b, BANK_5, BANK_8);
		                        	p_engine_changeLvl (2, 48, 32);

		                        	p_gui_show_location (lfelsengrund);
		                        	v_region = 1;
		                        	l_quit = TRUE;
		                        }
		        	}
		        	else if ((joypad () & J_DOWN) && (v_portal [1] == 1))
		        	{
		        		if (v_lvl == 91)
		        		{
		        			l_quit = TRUE;
	                        		
		        		}
		        		else
		        		{	
		        			p_engine_loadTileset (2, 8, 37, felsengrund_1, BANK_8);
        					p_engine_loadTileset (2, 38, 81, grundtiles, BANK_8);
        					p_engine_loadTileset (2, 82, 127, font, BANK_8); 
			        		p_engine_loadTileset (BANK_2, 4, 33, feensee_1, BANK_8);
	                        		p_engine_loadMap (v_lvl91, BANK_6, BANK_8);
	                        		p_engine_changeLvl (91, 40, 32);
	                        		p_gui_show_location (lseefeendorf);
		                        	v_region = 5;
		                        	l_quit = TRUE;
		                        	
		                        }
		        		
		        	}
		        	else if ((joypad () & J_LEFT) && (v_portal [2] == 1))
		        	{
		        		if (v_lvl == 138)
		        		{
		        			l_quit = TRUE;
		        			if (v_syk >= 104) p_spieler_set_sprite ();
		        		}
		        		else 
		        		{
		        			p_engine_loadTileset (2, 8, 37, felsengrund_1, BANK_8);
        					p_engine_loadTileset (2, 38, 81, grundtiles, BANK_8);
        					p_engine_loadTileset (2, 82, 127, font, BANK_8); 
		        			p_engine_loadTileset (BANK_2, 4, 38, eichenwald, BANK_8); 
	                			p_engine_loadMap (v_lvl138, BANK_18, BANK_8);
	                			p_engine_changeLvl (138, 128, 104);
	                			p_gui_show_location (leichenwald);
	                			v_region = 7;
	                			l_quit = TRUE;
	                			
		        		}
		        	}
		        	else if ((joypad () & J_RIGHT) && (v_portal [3] == 1))
		        	{
		        		if (v_lvl == 187)
		        		{
		        			l_quit = TRUE;
		        			if (v_syk >= 104) p_spieler_set_sprite ();
		        		}
		        		else 
		        		{
		        			p_engine_loadTileset (2, 8, 37, felsengrund_1, BANK_8);
        					p_engine_loadTileset (2, 38, 81, grundtiles, BANK_8);
        					p_engine_loadTileset (2, 82, 127, font, BANK_8); 
        					p_engine_loadTileset (BANK_2, 3, 34, zwergenheim, BANK_8);
		        			p_engine_loadMap (v_lvl187, BANK_18, BANK_8);
                				p_engine_changeLvl (187, 136, 32);
	                			p_gui_show_location (lzwergenheim);
	                			v_region = 10;
	                			l_quit = TRUE;
	                			
		        		}
		        	}
		        }
		        p_engine_after_txt ();
		}
	}
}
