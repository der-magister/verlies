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
//   Kontakt: magister@kabelmail.de

#include "init.h"
#include "engine.h"
#include "hud.h"
#include "player.h"
#include "locations.h"
#include "gegner.h"
#include "other.h"

//tmp
#include "items.h"
//

#include "daten/tilesets/felsengrund_1-8-37.h"
#include "daten/tilesets/grundtiles-38-81.h"
#include "daten/tilesets/font-82-127.h"
#include "daten/spritesets/v_spriteset_1.h"

#include "daten/txt/locations/felsengrund.h"

#include "daten/lvl/v_lvl1a.h"

UINT8 v_lvl;
UINT8 v_questen [100];
UINT8 v_aktion;



void p_init_game1 () NONBANKED
{
        SPRITES_8x8;
  
        //laden der ersten Tiles und Sprites
        p_engine_loadTileset (2, 8, 37, felsengrund_1, 0);
        p_engine_loadTileset (2, 38, 81, grundtiles, 0);
        p_engine_loadTileset (2, 82, 127, font, 0); 
        p_engine_loadSpriteset (2, 0, 127, v_spriteset_1, 0);
   
	DISPLAY_ON;
        SHOW_BKG;
   
	//p_intro ();
   
        v_lvl = 1; v_info = FALSE;

        p_spieler_init ();
        HIDE_BKG;
        
}

void p_init_game2 () NONBANKED
{
        for (v_i = 0; v_i != 41; ++v_i)
        {
                move_sprite (v_i, 0, 0);
        }

        p_hud_init ();

        SHOW_BKG;
        p_hud_show ();

        p_engine_loadMap (v_lvl1a, 5);
        p_engine_changeLvl (1, 112, 96);
	p_gui_show_location (lfelsengrund);
	SHOW_SPRITES;


        //tmp für tests
        
        /*v_questen [0] = 2; v_sgo = 4;
        v_spr = 4;*/
        
}
