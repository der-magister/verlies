//#pragma bank=4
//init.c

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

#include "init.h"
#include "engine.h"
#include "hud.h"
#include "player.h"
#include "locations.h"
#include "gegner.h"
#include "other.h"
#include "boss.h"
#include "umgebung.h"
#include "schilder.h"

//tmp
#include "items.h"

#include "daten/tilesets/felsengrund_1-8-37.h"
#include "daten/tilesets/grundtiles-38-81.h"
#include "daten/tilesets/font-82-127.h"
#include "daten/spritesets/v_spriteset_1.h"

#include "daten/txt/locations/locations.h"

#include "daten/lvl/lvldatfelsengrund.h"


//tmp
#include "daten/tilesets/alte-baum-4-38.h"
#include "daten/lvl/v_lvl145.h"

void p_init_game1 (void) __banked
{
        p_boss_init ();
        p_schalter_init ();

        SPRITES_8x8;
  
        //laden der ersten Tiles und Sprites
        p_engine_loadTileset (2, 8, 37, felsengrund_1, 4);
        p_engine_loadTileset (2, 38, 81, grundtiles, 4);
        p_engine_loadTileset (2, 82, 127, font, 4); 
        p_engine_loadSpriteset (2, 0, 127, v_spriteset_1, 4);
   
	DISPLAY_ON;
        SHOW_BKG;
   
	p_intro ();
   
        v_info = FALSE;

        p_spieler_init ();
        p_umgebung_init ();
        HIDE_BKG;

        v_timer = 0;

        //tmp
        //p_engine_loadTileset (BANK_2, 4, 33, altebaum, BANK_4);
}

void p_init_game2 (void) __banked
{
        for (v_i = 0; v_i != 41; ++v_i)
        {
                move_sprite (v_i, 0, 0);
        }
        p_hud_init ();

        SHOW_BKG;
       
        v_keyflag = 1;
        p_engine_loadMap (v_lvl1a, BANK_5, BANK_4);
        p_engine_changeLvl (1, 112, 96);
        v_keyflag = 0;
	p_gui_show_location (lfelsengrund);
        

	SHOW_SPRITES;
        
        //tmp für tests
        
        /*v_keyflag = 1;
        p_engine_loadMap (v_lvl145, BANK_18, BANK_4);
        p_engine_changeLvl (145, 16, 72);
        v_keyflag = 0;
        p_gui_show_location (laltebaum);
        
        v_questen [0] = 9; v_sgo = 0; v_stp = 1;
        v_spr = 4; v_slp = 3; v_questen [2] = 2;
        v_spitzhacke = TRUE; v_sichel = TRUE; v_slp = 4; v_smlp = 4;

        v_nomobs = FALSE;*/
        //end tmp

        p_hud_show ();
}
