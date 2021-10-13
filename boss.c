//#pragma bank=14

#include "globals.h"
#include "lvlstatus.h"
#include "gegner.h"
#include "engine.h"
#include "player.h"
#include "text.h"
#include "other.h"
#include "hud.h"

#include "daten/spritesets/v_spriteset_1.h"
#include "daten/spritesets/v_spriteset_2.h"

#include "daten/txt/npcs/ogerboss2.h"
#include "daten/txt/npcs/pilzwesen2.h"

void p_boss_init () BANKED
{
        //for (v_i = 0; v_i != 5; ++v_i) { v_boss [v_i] = 0; }
}

void p_gegner_set_boss (UINT8 v_nr) BANKED
{
        v_stage = 1; v_bossloop = 0; v_count = 0; v_gri [0] = 1;
  
        //Ogerboss
        if (v_nr == 1)
        {
                set_sprite_tile (36, 52);
                set_sprite_tile (37, 53);
                set_sprite_tile (38, 54);
                set_sprite_tile (39, 55);

                v_gxk [0] = 80; v_gyk [0] = 112; v_gtp [0] = 1; 
                p_gegner_move (0); 
                v_glp [0] = 24; v_gspeed = 100; v_boss = 1;
        }
        //pilzwesen
        else if (v_nr == 2)
        {
                p_engine_loadSpriteset (BANK_2, 0, 127, v_spriteset_2, BANK_14);
                set_sprite_tile (36, 0);
                set_sprite_tile (37, 1);
                set_sprite_tile (38, 2);
                set_sprite_tile (39, 3);

                set_sprite_tile (13, 4);
                set_sprite_tile (14, 5);
                set_sprite_tile (15, 6);
                set_sprite_tile (16, 7);

                v_gxk [0] = 80; v_gyk [0] = 40; v_gtp [0] = 2;
                p_gegner_move (0);
                v_glp [0] = 45; v_gspeed = 90; v_boss = 2;
        }

  
}

void p_boss_treffer (void) BANKED
{
        if (v_boss == 2) { 
                v_sxk = 24; v_syk = 40;
                p_spieler_set_sprite ();
        }
}

//Ablauf Kampf gegen Ogerboss
void p_gegner_ogerboss () BANKED
{
        if (v_stage == 1)
        {
                v_gxk [0] = 48; v_gyk [0] = 56; ++v_stage; ++v_count;
                p_gegner_move (0);
                
                if (v_smk == 76) 
                {
                        v_slp = 0;
                        delay (1000);
                }
        }
        else if (v_stage == 2)
        {
                v_gxk [0] = 112; ++v_stage; v_gspeed = 180; ++v_count;
                p_gegner_move (0);

                if (v_smk == 84) 
                {
                        v_slp = 0;
                        delay (1000);
                }
        }
        else if (v_stage == 3)
        {
                v_gxk [0] = 80; v_gyk [0] = 112; v_stage = 1; v_gspeed = 100; ++v_count;
                p_gegner_move (0); 

                if ((v_count == 9) && (v_stein [3] == 1))
                {
                        v_tile [0] = 37; v_stein [3] = 0;
                        p_engine_set_tile (4, 6, LAYER_BKG);
                        p_engine_set_tile (4, 7, LAYER_BKG);
                        p_engine_set_tile (5, 6, LAYER_BKG);
                        p_engine_set_tile (5, 7, LAYER_BKG);

                        if ((v_smk == 112) || (v_smk == 130))
                        {
                                --v_slp; v_syk += 16;
                                p_spieler_set_sprite ();
                        }
                }
                else if (v_count == 18)
                {
                        v_count = 0;

                        if (v_stein [4] == 1)
                        {
                                v_tile [0]= 37; v_stein [4] = 0; 
                                p_engine_set_tile (12, 6, LAYER_BKG);
                                p_engine_set_tile (13, 6, LAYER_BKG);
                                p_engine_set_tile (12, 7, LAYER_BKG);
                                p_engine_set_tile (13, 7, LAYER_BKG);

                                if ((v_smk == 120) || (v_smk == 138))
                                {
                                        --v_slp; v_syk += 16;
                                        p_spieler_set_sprite ();
                                }
                        }
                }
        }
}

void p_gegner_ogerboss_end () BANKED
{
        v_questen [2] = 2;
        p_engine_set_txt (ogerboss2);
        p_engine_A ();
        p_engine_after_txt ();
        v_tile [0] = 4;
        p_engine_set_tile (8, 2, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (8, 3, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (9, 2, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (9, 3, LAYER_BKG);
}

void p_gegner_pilzwesen (void) BANKED
{
        if (v_stage == 1)
        {
                v_gxk [0] = 80; v_gyk [0] = 104; ++v_stage; ++v_count;

                if ((v_count == 2) || (v_count == 6))
                {
                        v_bosseffectloop = 85;
                }
        } 
        else if (v_stage == 2)
        {
                v_gxk [0] = 80; v_gyk [0] = 72; ++v_stage;

                if (v_count == 4)
                {
                        v_bosseffectloop= 85;
                }
                else if (v_count == 9)
                {
                        v_bosseffectloop = 85;
                        v_count = 0;
                }
        }
        else if (v_stage == 3)
        {
               v_gxk [0] = 136; v_gyk [0] = 40; ++v_stage;
        }
        else if (v_stage == 4)
        {
                v_gxk [0] = 24; v_gyk [0] = 96; ++v_stage;
        }        
        else if (v_stage == 5)
        {
                v_gxk [0] = 80; v_gyk [0] = 40; v_stage = 1;

        }
        p_gegner_move (0);
}

void p_boss_effect_pilzwesen (void) BANKED
{
        move_sprite (13, v_gxk [0] - 8, v_gyk [0]);
        move_sprite (14, v_gxk [0] - 8, v_gyk [0] + 8);
        move_sprite (15, v_gxk [0] + 16, v_gyk [0]);
        move_sprite (16, v_gxk [0] + 16, v_gyk [0] + 8);
        --v_bosseffectloop;
       
       	//treffereffekt sporen 
	//mitte links
        if (((v_sxk + 8 == v_gxk [0] - 8 ) && (v_syk == v_gyk [0])) ||
	   //oben links
           ((v_sxk + 8 == v_gxk [0] - 8) && (v_syk + 8 == v_gyk [0])) ||
	   //unten links
	   ((v_sxk + 8 == v_gxk [0] - 8) && (v_syk == v_gyk [0] + 8)) ||
	   //mitte rechts
	   ((v_sxk == v_gxk [0] + 16) && (v_syk == v_gyk [0])) ||
	   //oben rechts
	   ((v_sxk == v_gxk [0] + 16) && (v_syk + 8 == v_gyk [0])) ||
	   ((v_sxk == v_gxk [0] + 16) && (v_syk == v_gyk [0] + 8)))  
        {       
            --v_slp;
                p_spieler_blink ();
                p_boss_treffer ();
		            p_hud_showLP ();
        }
} 

void p_gegner_pilzwesen_end (void) BANKED
{
        v_questen [0] = 11;
        p_engine_set_txt (pilzwesen2);
        p_engine_A ();
        p_engine_after_txt ();
        v_tile [0] = 12;
        p_engine_set_tile (0, 6, LAYER_BKG);
	       p_engine_set_tile (16, 6, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (0, 7, LAYER_BKG);
	       p_engine_set_tile (16, 7, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (1, 6, LAYER_BKG);
  	     p_engine_set_tile (17, 6, LAYER_BKG);
        ++v_tile [0];
        p_engine_set_tile (1, 7, LAYER_BKG);
	       p_engine_set_tile (17, 7, LAYER_BKG);
        p_engine_loadSpriteset (BANK_2, 0, 127, v_spriteset_1, BANK_14);
}

//Dorgan
/* void p_gegner_bosskampf1 () BANKED
{
  if (v_gflag [1] == 9)
  {
    if (v_stage == 1)
    {
      if (v_set == FALSE)
      {
        move_sprite (10, 80, 40);
        v_gxk [1] = 80; v_gyk [1] = 40;
        v_gxk [2] = v_gxk [1];
        v_gyk [2] = v_gyk [1];
        v_gspeed = 5; 
        v_gflag [2] = 9;
        v_set = TRUE;
      }
      else if (v_set == TRUE)
      {
        v_gmk [2] = ((v_gxk [2] - 8) / 8) + 20 * ((v_gyk [2] - 16) / 8);
          
        if (v_leveldaten [v_gmk [2] + 20] != 0x0E)
        {
          v_gyk [2] += 8;
          move_sprite (11, v_gxk [2], v_gyk [2]);
        }
        else
        {
          move_sprite (11, 0, 0);
          v_stage = 2; v_gspeed = 50; v_gflag [2] = 0;
          v_gmk [2] = 0;
        }
      }
    }
    else if (v_stage == 2)
    {
      move_sprite (10, 104, 64);
      v_gxk [1] = 104; v_gyk [1] = 64;
      v_stage = 3;
      v_gspeed = 60;
    }
    else if (v_stage == 3)
    {
      move_sprite (10, 56, 64);
      v_gxk [1] = 56; v_gyk [1] = 64;
      v_stage = 1; v_set = FALSE; 
    }
  }
  //wenn Boss besiegt
  else 
  {
    v_bosskampf = FALSE;
    v_bossloop = 255;
    move_sprite (10, 0, 0);
    move_sprite (11, 0, 0);
    v_questen [3] = 1;
    p_lvl_status ();
    v_gflag [11] = 0;
  }
}

//Zorgus
void p_gegner_bosskampf2 () BANKED
{
  if (v_gflag [5] == 9)
  {
    if (v_stage == 1)
    {
      v_gxk [5] = 144; v_gyk [5] = 56;
      move_sprite (14, v_gxk [5], v_gyk [5]);
      v_stage = 2; v_gspeed = 70;
    }
    else if (v_stage == 2)
    {
      v_gxk [5] = 80; v_gyk [5] = 96;
      move_sprite (14, v_gxk [5], v_gyk [5]);
      v_stage = 3;
    }
    else if (v_stage == 3)
    {
      v_gxk [5] = 16; v_gyk [5] = 56;
      move_sprite (14, v_gxk [5], v_gyk [5]);
      v_stage = 4;
    }
    else if (v_stage == 4)
    {
      v_gxk [5] = 80; v_gyk [5] = 24;
      move_sprite (14, v_gxk [5], v_gyk [5]);
      v_stage = 5; 
    }
    else if (v_stage == 5)
    {
      v_gxk [5] = 80; v_gyk [5] = 56;
      move_sprite (14, v_gxk [5], v_gyk [5]);
      v_stage = 1;  v_gspeed = 140;
    }
  }
  else
  {
    for (v_i = 1; v_i <= 5; v_i++)
    {
      move_sprite (9 + v_i, 0, 0);
      v_gflag [v_i] = 0;
    }
    v_bosskampf = FALSE; v_kampf = FALSE;
    v_bossloop = 255;
    v_questen [4] = 1;
    p_lvl_status ();
  }
}

//Varos
void p_gegner_bosskampf3 () BANKED
{
  if (v_gflag [1] == 9)
  {
    if (v_stage == 1)
    {
      v_gxk [1] = 32; v_gyk [1] = 72;
      move_sprite (10, v_gxk [1], v_gyk [1]);
      v_stage = 2; v_gspeed = 50;
    }
    else if (v_stage == 2)
    {
      v_gxk [1] = 16;
      move_sprite (10, v_gxk [1], v_gyk [1]);
      v_stage = 3;
    }
    else if (v_stage == 3)
    {
      move_sprite (11, 24, 72);

      if (v_set == FALSE)
      {
        v_gxk [2] = v_gxk [1] + 8;
        v_gyk [2] = v_gyk [1];
        v_gxk [3] = v_gxk [1];
        v_gyk [3] = v_gyk [1] - 8;
        v_gxk [4] = v_gxk [1];
        v_gyk [4] = v_gyk [1] + 8;
       
        v_gspeed = 5; 
        v_set = TRUE;

        for (v_i = 1; v_i <= 3; v_i++)
        {
          v_gflag [1 + v_i] = 9;
          move_sprite (10 + v_i, v_gxk [1 + v_i], v_gyk [1 + v_i]);
        } 
      }
      else if (v_set == TRUE)
      {  
        for (v_i = 1; v_i <= 3; v_i++)
        {  
          v_gmk [1 + v_i] = ((v_gxk [1 + v_i] - 8) / 8) + 20 * ((v_gyk [1 + v_i] - 16) / 8);

          if (v_leveldaten [v_gmk [1 + v_i] + 1] != 14)
          {
            v_gxk [1 + v_i] += 8;
            move_sprite (10 + v_i, v_gxk [1 + v_i], v_gyk [1 + v_i]);
          }
          else
          {
            for (v_i = 1; v_i <= 3; v_i++)
            {  
              move_sprite (10 + v_i, 0, 0);
              v_gmk [1 + v_i] = 0;
              v_gxk [1 + v_i] = 0; v_gyk [1 + v_i] = 0;
              v_gflag [1 + v_i] = 0;
            }
            v_stage = 1; v_gspeed = 80; v_set = FALSE;
          }
        }
      } 
    }
  }
  //wenn Boss besiegt
  else 
  {
    v_bosskampf = FALSE; v_bossloop = 255;  v_questen [6] = 1;
    p_lvl_status ();

    for (v_i = 1; v_i <= 5; v_i ++)
    {
      move_sprite (9 + v_i, 0, 0);
      v_gxk [v_i] = 0; v_gyk [v_i] = 0; 
      v_gmk [v_i] = 0; v_gflag [v_i] = 0;
    } 
  }
}*/
