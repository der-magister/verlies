#pragma bank=11

#include "globals.h"
#include "lvlstatus.h"

UINT8 v_stage;
UINT8 v_bossloop;
UINT8 v_bosskampf;
UINT8 v_set;


void p_gegner_set_boss (UINT8 v_nr) BANKED
{
  v_bosskampf = TRUE;
  
  v_stage = 1; v_set = FALSE;
  v_bossloop = 0;
  
  if (v_nr == 1)
  {
    v_kampf = FALSE;
    set_sprite_tile (10, 48);
    move_sprite (10, 80, 40);
    v_gxk [1] = 80, v_gyk [1] = 40;
    set_sprite_tile (11, 0x34);
    v_gflag [1] = 9; v_glp [1] = 12; 
    v_mg = 2; v_gtp [1] = 1;
  }
  else if (v_nr == 2)
  {
    set_sprite_tile (14, 48);
    move_sprite (14, 80, 56);
    v_gxk [5] = 80; v_gyk [5] = 56;
    v_gflag [5] = 9; v_glp [5] = 24;
    v_gspeed = 70; v_mg = 5;
  }
  else if (v_nr == 3)
  {
    set_sprite_tile (10, 48);
    set_sprite_tile (11, 57);
    set_sprite_tile (12, 57);
    set_sprite_tile (13, 57);
    move_sprite (10, 16, 72);
    v_gxk [1] = 16; v_gyk [1] = 72;
    v_gflag [1] = 9; v_glp [1] = 48; v_gtp [1] = 3;
    v_gtp [2] = 2; v_gtp [3] = 2; v_gtp [4] = 2;
    v_gspeed = 80; v_mg = 4;
  }
}

//Dorgan
void p_gegner_bosskampf1 () BANKED
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
}
