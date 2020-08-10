
//#pragma bank=8

#include "portale.h"
#include "engine.h"
#include "text.h"
#include "hud.h"
#include "globals.h"
#include "other.h"
#include "locations.h"

#include "daten/txt/portale/portalfeensee.h"
#include "daten/txt/portale/portalfelsengrund.h"
#include "daten/txt/portale/portaleichenwald.h"
#include "daten/txt/portale/portal.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/locations/locations.h"

#include "daten/lvl/lvldatfelsengrund.h"
#include "daten/lvl/lvldatdorfseefeen.h"
#include "daten/lvl/lvldateichenwald.h"

void p_portal_setup (void) __banked
{
	v_aktion = TRUE;
	p_engine_rahmen ();
	move_win (7, 96);
	v_win = TRUE;
}

void p_portal (UINT8 l_smk) __banked
{
	BOOLEAN l_quit = FALSE;

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
	        }
	        if (v_portal [3] == 1)
	        {
	        	//set_win_tiles (1, 3, 18, 1, portal3);

	        }

	        SHOW_WIN;
	        delay (160);

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
		        		p_engine_loadTileset (BANK_2, 8, 29, felsengrund_1, BANK_8);
	                        	p_engine_loadTileset (BANK_2, 4, 15, felsengrund_2, BANK_8);
	                        	p_engine_loadMap (v_lvl1b, BANK_5, BANK_8);
	                        	p_engine_changeLvl (2, 48, 32);
	                        	p_gui_show_location (lfelsengrund);
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
		        		p_engine_loadTileset (BANK_2, 4, 33, feensee_1, BANK_8);
                        		p_engine_loadMap (v_lvl91, BANK_6, BANK_8);
                        		p_engine_changeLvl (91, 40, 32);
                        		p_gui_show_location (lseefeendorf);
	                        	l_quit = TRUE;
	                        }
	        		
	        	}
	        	else if ((joypad () & J_LEFT) && (v_portal [2] == 1))
	        	{
	        		if (v_lvl == 138)
	        		{
	        			l_quit = TRUE;
	        		}
	        		else 
	        		{
	        			p_engine_loadTileset (BANK_2, 4, 38, eichenwald, BANK_8);
                			p_engine_loadMap (v_lvl138, BANK_6, BANK_8);
                			p_engine_changeLvl (138, 128, 104);
                			p_gui_show_location (leichenwald);
                			l_quit = TRUE;
	        		}
	        	}
	        }
	        p_engine_after_txt ();
	}
	 
}

