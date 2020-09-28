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

#include "globals.h"
#include "init.h"
#include "player.h"
#include "hud.h"
#include "text.h"
#include "lvlstatus.h"
#include "other.h"
#include "engine.h"

#include "felsengrund.h"
#include "gegner.h"
#include "boss.h"
#include "items.h"

void main (void) NONBANKED
{
        p_init_game1 (); v_quit = 0; 
  
        do
        {
                p_init_game2 ();
                v_looptime = 7;  v_gameover = FALSE; v_attack = 0; v_bossloop = 255;
                v_win = 0; gloop = 0;  v_itemlooptime = 255; v_kampflooptime = 255; v_aktion = FALSE;
                p_lvl_status (); v_ausdauertimer = 0;
                
    
                //game loop
                while (v_gameover == FALSE)
                {
                        if ((v_kampf == TRUE) && (v_win == FALSE) && (v_info == FALSE))
                        {
                                if (gloop == v_gspeed)
                                {
                                        p_gegner_move_horizontal ();
                                        p_gegner_move_vertical ();
                                        //p_gegner_stachel ();
                                        p_gegner_speer ();
                                               
                                        gloop = 0;
                                }     
                                p_gegner_koli_player ();   
                        }              
      
                        if ((v_kampf == TRUE) || (v_bosskampf == TRUE)) p_gegner_koli_player ();
      
    
                        if (v_looptime == 7)
                        {
                                if (v_walk == TRUE) {
                                        if ((joypad () & J_UP)) p_spieler_move (MOVE_NORTH);
                                        else if ((joypad () & J_RIGHT)) p_spieler_move (MOVE_EAST);
                                        else if ((joypad () & J_DOWN)) p_spieler_move (MOVE_SOUTH);
                                        else if ((joypad () & J_LEFT)) p_spieler_move (MOVE_WEST);
                                        else if ((joypad () & J_SELECT) && (v_info == FALSE) && (v_win == FALSE)) p_changeItem ();
                                }
                                if ((v_slp == 1) || (v_spr == 1)) p_hud_blink ();
                                
                                if (v_kampf == TRUE) p_gegner_koli_player ();

                                v_looptime = 0;
                        }
                        
                        if (joypad () & J_START) 
                        {
                                if (v_info == FALSE) p_gui_show_infoscreen ();
                                else if (v_info == TRUE) p_gui_hide_infoscreen ();
                        }

                        if ((joypad () & J_A) && (v_attack == 0))
                        { 
                                v_keyflag = 1;

                                if ((v_info == FALSE) && (v_win == FALSE)) p_lvl_whichLvL ();
                                
                                if ((v_aktion == FALSE) && (v_stp != 0) && (v_kampflooptime == 255))
                                {
                                        if ((v_kampf == TRUE) || (v_bosskampf == TRUE)) p_spieler_attack ();
                                }
                        }

                        if ((joypad () & J_B) && (v_attack == 0) && (v_sused == FALSE) && (v_aktion == FALSE) && (v_itemlooptime == 255)) 
                        {
                                v_keyflag = 2;
                                
                                if (v_selectItem == 1) { p_use_heiltrank (); }
                                else if (v_selectItem == 2) { p_use_ausdauertrank (); }
                                else if (v_selectItem == 4) { p_use_item (); }
                                else if (v_selectItem == 5) { p_use_item (); }

                                if ((v_info == FALSE) && (v_win == FALSE)) p_lvl_whichLvL ();
                        }
                         
                        if (v_kampflooptime == 8) 
                        {
				p_spieler_hideAttack ();
                                v_kampflooptime = 255;
                                v_attack = 0;
                        }

                        if (v_itemlooptime == 8)
                        {
                                p_hide_item ();
                                v_itemlooptime = 255;
                                v_sused = FALSE;
                        }
    
                        if ((v_bossloop == v_gspeed) && (v_bosskampf == TRUE))
                        {
                                if (v_lvl == 66)
                                {
                                        p_gegner_ogerboss ();
                                        v_bossloop = 0;
                                }
                                else if (v_lvl == 165)
                                {
                                        p_gegner_pilzwesen ();
                                        v_bossloop = 0;
                                }
                        }

                        if ((v_bosseffectloop > 0) && (v_bosskampf == TRUE)) 
                        {
                                p_boss_effect_pilzwesen ();
                        }
                        else if ((v_bosseffectloop == 0) && (v_bosskampf == TRUE))
                        {
                                move_sprite (13, 0, 0);
                                move_sprite (14, 0, 0);
                                move_sprite (15, 0, 0);
                                move_sprite (16, 0, 0);
                        }
        
			if (v_bossloop < 255) ++v_bossloop;
      
			if (v_kampflooptime < 255) ++v_kampflooptime;

			if (v_itemlooptime < 255) ++v_itemlooptime;

			if (v_timer == 255) 
			{   
				v_timer = 0; ++v_ausdauertimer;
				if (v_ausdauertimer == 5) p_spieler_inc_ausdauer ();
			}

			v_aktion = FALSE; v_keyflag = 0;

			if (v_kampf == TRUE) ++gloop;

			++v_looptime; ++v_timer;

			if (v_slp <= 0) { p_gameover (); }

                        v_walk = TRUE;

			wait_vbl_done ();

		}	
	}

        

	while (v_quit == 0); 
}
