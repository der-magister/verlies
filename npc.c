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
//   Kontakt: heiko.wolf.mail@gmail.com

//#pragma bank=12

#include "npc.h"
#include "engine.h"
#include "hud.h"
#include "lvlstatus.h"
#include "text.h" 
#include "other.h"

#include "daten/txt/npcs/heilertxt.h"
#include "daten/txt/npcs/provianthaendler1.h"
#include "daten/txt/npcs/provianthaendler2.h"
#include "daten/txt/npcs/fiona-1.h"
#include "daten/txt/npcs/max-1.h"
#include "daten/txt/npcs/ausdauerverkaeuferin1.h"
#include "daten/txt/npcs/ausdauerverkaeuferin2.h"
#include "daten/txt/npcs/heiltrankverkaeuferin1.h"
#include "daten/txt/npcs/heiltrankverkaeuferin2.h"
#include "daten/txt/npcs/zauberstaubhaendler1.h"
#include "daten/txt/npcs/zauberstaubhaendler2.h"

#include "daten/txt/other/handelnichtmoeglich.h"


/*void p_nicht_genug_gold () __banked
{
  p_engine_set_txt (nichtgold);
  p_engine_A ();
  delay (120);
  p_hud_show ();
}*/

///Heiler
void p_npc_heiler (UINT8 l_mk) __banked
{
	if ((l_mk == v_smk) && (v_keyflag == 1))
	{
		if (v_slp < v_smlp)
		{
			p_engine_set_txt (heilertxt1);
                        p_engine_A ();
                        p_engine_after_txt ();
			v_slp = v_smlp;
                        v_tile [0] = 69;
                        set_bkg_tiles (1, 16, 1, 1, v_tile); 
			p_hud_showLP ();
		}
		else
		{
			p_engine_set_txt (heilertxt2);
                        p_engine_A ();
                        p_engine_after_txt ();
		}
	}
}

void p_fiona () __banked
{
        if (v_keyflag == 1)
        {
                p_engine_set_txt (fiona1);
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_max () __banked
{
        if (v_keyflag == 1)
        {
                p_engine_set_txt (max1);
                p_engine_A ();
                p_engine_after_txt ();
        }
}

///Provianthändler
void p_provianthaendler () __banked
{
        BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (provianthaendler1);

                while (l_quit == FALSE) 
                {

                        if (joypad () & J_A)
                        {
                                if ((v_spr != v_smpr) && (v_sgo != 0))
                                {
                                        ++v_spr;
                                        --v_sgo;
                                        p_engine_set_txt (provianthaendler2);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                        p_hud_showPR ();
                                }
                                else 
                                {
                                        p_engine_set_txt (handelnichtmoeglich);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                        }
                        else if (joypad () & J_B) 
                        { 
                                p_engine_after_txt ();
                                l_quit = TRUE; 
                        }
                }
                
        }
}

///Ausdauertrankverkäuferin
void  p_ausdauerhandlerin () __banked
{
        BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (ausdauerverkaeuferin1);

                while (l_quit == FALSE) 
                {

                        if (joypad () & J_A)
                        {
                                if ((v_sat != v_smat) && (v_sgo > 1))
                                {
                                        ++v_sat;
                                        v_sgo -= 2;
                                        p_engine_set_txt (ausdauerverkaeuferin2);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                                else 
                                {
                                        p_engine_set_txt (handelnichtmoeglich);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                        }
                        else if (joypad () & J_B) 
                        { 
                                p_engine_after_txt ();
                                l_quit = TRUE; 
                        }
                }
                
        }
}

void p_heiltrankhaendlerin () __banked
{
 BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (heiltrankverkaeuferin1);

                while (l_quit == FALSE) 
                {

                        if (joypad () & J_A)
                        {
                                if ((v_sht != v_smht) && (v_sgo > 2))
                                {
                                        ++v_sht;
                                        v_sgo -= 3;
                                        p_engine_set_txt (heiltrankverkaeuferin2);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                                else 
                                {
                                        p_engine_set_txt (handelnichtmoeglich);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                        }
                        else if (joypad () & J_B) 
                        { 
                                p_engine_after_txt ();
                                l_quit = TRUE; 
                        }
                }
                
        }
}

void p_zauberstaubhaendler () __banked
{
        BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (zauberstaubhaendler1);

                while (l_quit == FALSE) 
                {

                        if (joypad () & J_A)
                        {
                                if ((v_sat != v_smat) && (v_sgo > 1))
                                {
                                        ++v_sat;
                                        v_sgo -= 2;
                                        p_engine_set_txt (zauberstaubhaendler2);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                                else 
                                {
                                        p_engine_set_txt (handelnichtmoeglich);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                }
                        }
                        else if (joypad () & J_B) 
                        { 
                                p_engine_after_txt ();
                                l_quit = TRUE; 
                        }
                }
                
        }
}



///NPC Helfer XK, YK, Typ: 1 Heiltrank x 1, 2 Proviant x 2, 3 Gold x 5, Questnr
/*void p_npc_helfer (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_ntyp, UINT8 v_nqnr) __banked
{
 if (((v_nxk == v_sxk ) && (v_nyk == v_syk + 8)) ||
      ((v_nxk == v_sxk ) && (v_nyk == v_syk - 8)) ||
      ((v_nxk == v_sxk + 8) && (v_nyk == v_syk)) ||
      ((v_nxk == v_sxk - 8) && (v_nyk == v_syk)))
  {
    p_hud_hide (); 
    
    p_engine_set_txt (npctxt1);
    p_engine_down ();
   
    //Heiltrank
    if (v_ntyp == 1)
    {
      p_engine_set_txt (npctxt2);
      p_engine_down ();

      if (v_sht < v_smht) 
      {
          ++v_sht;
      }
      
      v_questen [v_nqnr] = 1;
      p_engine_set_txt (npctxt3);
      p_engine_after_txt ();
      v_aktion = TRUE;
    }
  }
}*/

///Questgeber
/*void p_npc_questgeber1 (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_qnr) __banked
{
  if (((v_nxk == v_sxk ) && (v_nyk == v_syk + 8)) ||
      ((v_nxk == v_sxk ) && (v_nyk == v_syk - 8)) ||
      ((v_nxk == v_sxk + 8) && (v_nyk == v_syk)) ||
      ((v_nxk == v_sxk - 8) && (v_nyk == v_syk)))
  {
    if (v_questen [7] < 3) p_hud_hide ();
    
    if (v_questen [7] == 0)
    {
      p_engine_set_txt (questtxt1); 
      v_questen [7] = 1;
    } 
    else if (v_questen [7] == 1)
    {
      p_engine_set_txt (questtxt1b); 
    }
    else if (v_questen [7] == 2)
    {
      p_engine_set_txt (questtxt1c);
      v_questen [v_qnr] = 3;
      ++v_ske;
    }
    v_aktion = TRUE;
    p_engine_A ();
    delay (150);
    p_lvl_status ();
    p_hud_show ();
  }
}*/

///Tauscher Gold gegen Proviant
/*void p_npc_tausch_proviant (UINT8 nxk, UINT8 nyk) __banked
{
  UINT8 quit = FALSE;

  if (((nxk == v_sxk ) && (nyk == v_syk + 8)) ||
      ((nxk == v_sxk ) && (nyk == v_syk - 8)) ||
      ((nxk == v_sxk + 8) && (nyk == v_syk)) ||
      ((nxk == v_sxk - 8) && (nyk == v_syk)))
  {
    p_hud_hide ();
    p_engine_set_txt (tausch1);
    p_engine_down ();
    p_engine_set_txt (tausch2);

    while (quit == FALSE)
    {
      if (joypad () & J_A)
      {
        delay (120);
        p_hud_show ();
        quit = TRUE;
      }
      else if (joypad () & J_B)
      {
        if (v_sgo >= 1)
        {
          if (v_spr < v_smpr)
          {
            ++v_spr;
            --v_sgo;
            p_engine_set_txt (tausch3);
            p_engine_A ();
            quit = TRUE;
            delay (120);
            p_hud_show ();
          }
          else if (v_spr >= v_smpr)
          {
            p_engine_set_txt (proviantvolltxt);
            p_engine_A ();
            quit = TRUE;
            delay (120);
            p_hud_show ();
          }
        }
        else if (v_sgo < 1)
        {
          p_nicht_genug_gold ();
          quit = TRUE;
        }
      }
    }
  }
}*/

