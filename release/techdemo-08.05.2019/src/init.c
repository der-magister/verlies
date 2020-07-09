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

#include "init.h"
#include "engine.h"
#include "hud.h"
#include "player.h"
#include "locations.h"
#include "gegner.h"
#include "other.h"

#include "daten/tilesets/v_felsengrund_1.h"
#include "daten/spritesets/v_spriteset_1.h"

#include "daten/txt/locations/felsengrund.h"

#include "daten/lvl/v_lvl1a.h"

UINT8 v_lvl;
UINT8 v_questen [100];
UINT8 v_aktion;



void p_init_game1 () NONBANKED
{
        SPRITES_8x8;
        //HIDE_BKG;
        //HIDE_SPRITES;
        //HIDE_WIN;
  
        //laden der ersten Tiles und Sprites
        p_engine_loadTileset (2, 0, 127, v_felsengrund_1, 0);
        p_engine_loadSpriteset (4, 0, 127, v_spriteset_1, 0);
   
	DISPLAY_ON;
        SHOW_BKG;
   
	p_intro ();
   
        v_lvl = 1; v_info = FALSE;

        p_spieler_init ();

        //for (v_a = 0; v_a != 100; ++v_a) v_questen [v_a] = 0;
        
}

void p_init_game2 () NONBANKED
{
        for (v_i = 0; v_i != 41; ++v_i)
        {
                move_sprite (v_i, 0, 0);
        }

        p_hud_init ();
        p_hud_show ();

        //p_gegner_init ();

        p_engine_loadMap (v_lvl1a, 5);
        p_engine_changeLvl (1, 112, 96);
	p_gui_show_location (lfelsengrund);
	SHOW_SPRITES;
}
