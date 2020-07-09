//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "globals.h"
#include "init.h"
#include "player.h"
#include "hud.h"
#include "text.h"
#include "lvlstatus.h"
#include "other.h"

#include "lvl1.h"
#include "gegner.h"
/*#include "boss.h"*/
#include "items.h"


volatile UINT8 v_quit;
volatile UINT8 v_looptime;
volatile UINT8 v_gameover;

void main ()
{
        p_init_game1 (); v_quit = 0; 
  
        do
        {
                p_init_game2 ();
                v_looptime = 7; v_1 = 1; v_gameover = FALSE; v_attack = 0; //v_aktion2 = FALSE; v_bossloop = 255;  
                v_win = 0; gloop = 0;  v_itemlooptime = 255; v_kampflooptime = 255; v_aktion = FALSE;
                p_lvl_status ();
                
    
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
                                               
                                        gloop = 0;
                                }        
                        }              
                                
                        
      
                        if (v_kampf == TRUE) p_gegner_koli_player ();
      
    
                        if (v_looptime == 7)
                        {
                                if ((joypad () & J_UP) && (v_info == FALSE) && (v_win == FALSE)) p_spieler_move (MOVE_NORTH);
                                else if ((joypad () & J_RIGHT) && (v_info == FALSE) && (v_win == FALSE)) p_spieler_move (MOVE_EAST);
                                else if ((joypad () & J_DOWN) && (v_info == FALSE) && (v_win == FALSE)) p_spieler_move (MOVE_SOUTH);
                                else if ((joypad () & J_LEFT) && (v_info == FALSE) && (v_win == FALSE)) p_spieler_move (MOVE_WEST);

                                if ((joypad () & J_SELECT) && (v_info == FALSE) && (v_win == FALSE)) p_changeItem ();
    
                                p_hud_blink ();
                                v_looptime = 0;

                               
                        }
                        
                        if (v_kampf == TRUE) p_gegner_koli_player ();


                        if (joypad () & J_START) 
                        {
                                if (v_info == FALSE) p_gui_show_infoscreen ();
                                else if (v_info == TRUE) p_gui_hide_infoscreen ();
                        }

                        if ((joypad () & J_A) && (v_attack == 0))
                        { 
                                v_keyflag = 1;
                                if ((v_info == FALSE) && (v_win == FALSE)) p_lvl_whichLvL ();
                                
                                if ((v_aktion == FALSE) && (v_stp != 0) && (v_kampf == TRUE) && (v_kampflooptime == 255))
                                {
                                        p_spieler_attack ();
                                }
                        }

                        if ((joypad () & J_B) && (v_attack == 0) && (v_sused == FALSE) && (v_aktion == FALSE) && (v_itemlooptime == 255)) 
                        {
                                v_keyflag = 2;
                                if (v_selectItem == 1) { p_use_heiltrank (); }
                                else if (v_selectItem == 2) { p_use_ausdauertrank (); }
                                else if (v_selectItem == 4) { p_use_spitzhacke (); }
                                if ((v_info == FALSE) && (v_win == FALSE)) p_lvl_whichLvL ();
                        }
                         

                        if (v_kampflooptime == 7) 
                        {
                                move_sprite (5, 0, 0);
                                move_sprite (6, 0, 0);
                                move_sprite (7, 0, 0);
                                move_sprite (8, 0, 0);
                                v_kampflooptime = 255;
                                v_attack = 0;
                        }

                        //if (joypad () & J_SELECT)  p_changeItem ();

                        if (v_itemlooptime == 8)
                        {
                                p_hide_spitzhacke ();
                                v_itemlooptime = 255;
                                v_sused = FALSE;
                        }
    
      /*if ((v_bossloop == v_gspeed) && (v_bosskampf == TRUE)
      {
        if (v_lvl == 8)
        {
          p_gegner_bosskampf1 ();
          v_bossloop = 0;
        }
        else if (v_lvl == 23)
        {
          p_gegner_bosskampf2 ();
          v_bossloop = 0;
        } p_engine_drawMap (v_lvl1a, 5);
        else if (v_lvl == 33)
        {
          p_gegner_bosskampf3 ();
          v_bossloop = 0;
        }
      }
      
      if (v_trefferlooptime == 10)
      {
        
        v_trefferlooptime = 255;
        v_stref = FALSE;
      }
        
    /*
      
      if (v_bossloop < 255) ++v_bossloop;*/
      
      if (v_slp <= 0)
      { 
	      p_gameover ();
      }

        //if (v_trefferlooptime < 255) ++v_trefferlooptime;
        if (v_kampflooptime < 255) ++v_kampflooptime;

        if (v_itemlooptime < 255) ++v_itemlooptime;
      
        v_aktion = FALSE; v_keyflag = 0;

      if (v_kampf == TRUE) ++gloop;

       ++v_looptime;

      wait_vbl_done ();
    }
  }
  while (v_quit == 0); 
}
