//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2021 Heiko Wolf
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
#include "daten/txt/npcs/provianthaendler.h"
#include "daten/txt/npcs/fiona-1.h"
#include "daten/txt/npcs/max-1.h"
#include "daten/txt/npcs/ausdauerverkaeuferin.h"
#include "daten/txt/npcs/heiltrankverkaeuferin.h"
#include "daten/txt/npcs/zauberstaubhaendler1.h"
#include "daten/txt/npcs/zauberstaubhaendler2.h"
#include "daten/txt/npcs/kraeuterhaendler.h"

#include "daten/txt/other/handelnichtmoeglich.h"
#include "daten/txt/npcs/vanyra.h"
#include "daten/txt/npcs/zylra-1.h"
#include "daten/txt/npcs/hueterin.h"
#include "daten/txt/npcs/others.h"
#include "daten/txt/npcs/xaver.h"

///Heiler
void p_npc_heiler (UINT8 l_mk) BANKED
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

void p_fiona (void) BANKED
{
        if (v_keyflag == 1)
        {
                p_engine_set_txt (fiona1);
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_zylra (void) BANKED
{
        if (v_keyflag == 1)
        {
                p_engine_set_txt (zylratxt1);
                p_engine_A ();
                p_engine_after_txt ();
        }
}


void p_max (void) BANKED
{
        if (v_keyflag == 1)
        {
                p_engine_set_txt (max1);
                p_engine_A ();
                p_engine_after_txt ();
        }
}

///Provianthändler
void p_provianthaendler (void) BANKED
{
        static BOOLEAN l_quit;

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
void  p_ausdauerhandlerin (void) BANKED
{
        static BOOLEAN l_quit;

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

void p_heiltrankhaendlerin (void) BANKED
{
        static BOOLEAN l_quit;

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

void p_zauberstaubhaendler (void) BANKED
{
        static BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (zauberstaubhaendler1);

                while (l_quit == FALSE) 
                {

                        if (joypad () & J_A)
                        {
                                if ((v_sstaub != v_smstaub) && (v_sgo > 3))
                                {
                                        ++v_sstaub;
                                        v_sgo -= 4;
                                        p_engine_set_txt (zauberstaubhaendler2);
                                        p_engine_A ();
                                        p_engine_after_txt ();
                                        l_quit = TRUE;
                                        p_hud_showStaub ();
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

///Kraeuterhaendler
void p_kraeuterhandler (void) __banked
{
        static BOOLEAN l_quit;

        l_quit = FALSE;

        if (v_keyflag == 1)
        {
                p_engine_set_txt (kraeuterhaendler1);

                while (l_quit == FALSE) 
                {
                        if (joypad () & J_A)
                        {
                                if ((v_shk != v_smhk) && (v_sgo > 1))
                                {
                                        ++v_shk;
                                        v_sgo -= 2;
                                        p_engine_set_txt (kraeuterhaendler2);
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

void p_vanyra (void) BANKED 
{
        if (v_questen [0] == 13) {
                p_engine_set_txt (vanyratxt1);
                p_engine_down ();
                p_engine_set_txt (vanyratxt2);
                p_engine_down ();
                p_engine_set_txt (vanyratxt3);
                p_engine_down ();
                p_engine_set_txt (vanyratxt4);
                v_questen [0] = 14;
        }
        else if (v_questen [0] == 14) {
                p_engine_set_txt (vanyratxt4);
        }
        p_engine_A ();
        p_engine_after_txt ();
}

void p_waechter_zwergenheim (void) BANKED 
{
        if (v_questen [0] == 13) {
                p_engine_set_txt (waechtertxt1);
        }
        p_engine_A ();
        p_engine_after_txt ();
}

void p_hueterin (void) BANKED 
{
        if (v_smk == 152)
        {
                if (v_questen [0] == 14) {
                        p_engine_set_txt (hueterintxt);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_questen [0] = 15;
                        p_lvl_status ();
                }
               
               
        }
} 

void p_xaver_rotgebirge (void) BANKED
{
        if (v_questen [0] == 16) { 
                if ((v_smk == 59) || (v_smk == 21)) {
                        p_engine_set_txt (xavertxt23);
                        p_engine_down ();
                        p_engine_set_txt (xavertxt24);
                        p_engine_down ();
                        p_engine_set_txt (xavertxt25);
                        p_engine_down ();
                        p_engine_set_txt (xavertxt26);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_questen [0] = 17;
                        p_lvl_status ();
                        
                }
        }
}

void p_xaver_tempel (void) BANKED
{
    if (v_questen [0] == 17) {
        if ((v_smk == 138) || (v_smk == 104) || (v_smk == 176)) {
                p_engine_set_txt (xavertxt28);
                p_engine_down ();
                p_engine_set_txt (xavertxt29);
                p_engine_down ();
                p_engine_set_txt (xavertxt30);
                p_engine_A ();
                p_engine_after_txt ();
                v_questen [0] = 18;
                p_lvl_status ();
        }
    }
}
