//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
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
//   Kontakt: projekte@kabelmail.net

//#pragma bank=15

#include "hud.h"
#include "engine.h"
#include "npc.h"
#include "schilder.h"
#include "felsengrund.h"
#include "text.h"
#include "locations.h"
#include "other.h"
#include "truhen.h"
#include "lvlstatus.h"
#include "umgebung.h"
#include "items.h"
#include "portale.h"

#include "stadtgefaengnis.h"

#include "daten/txt/schilder/schildertxt.h"

#include "daten/txt/npcs/xaver.h"
#include "daten/txt/npcs/sara.h"
#include "daten/txt/npcs/hugo.h"

#include "daten/lvl/lvldatfelsengrund.h"
#include "daten/lvl/lvldatstadtgefaengnis.h"
#include "daten/lvl/lvldatwiesen.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/locations/locations.h"

#include "daten/other/techend.h"

///Ablauf Raum 1
void p_lvl1 (void) __banked
{

        //Heiler
        p_npc_heiler (201);
        
        //Truhe mit Karte
        p_truhe_karte (188, 0, 0);

        p_stein (92, 0);

        //Schilder
        p_schild (211, schildtxt1);
        p_schild (85, schildtxt1b);

        //Aufgabenstellerin Sara Spitzhacke
        if ((v_smk == 96) || (v_smk == 58) || (v_smk == 130) || (v_smk == 92))
        {
                if (v_keyflag == 1)
                {
                        if (v_questen [1] == 0)
                        {
                                p_engine_set_txt (saratxt1);
                                p_engine_down ();
                                p_engine_set_txt (saratxt2);
                                p_engine_down ();
                                p_engine_set_txt (saratxt3);
                                p_engine_A ();
                                p_engine_after_txt ();
                                v_questen [1] = 1;
                        }
                        else if ((v_questen [1] == 1) && (v_stein [0] == 0))
                        {
                                p_engine_set_txt (saratxt4);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                        else if ((v_questen [1] == 1) && (v_stein [0] == 1))
                        {
                                p_engine_set_txt (saratxt5);
                                p_engine_down ();
                                p_engine_set_txt (saratxt6);
                                p_engine_down ();
                                p_engine_set_txt (saratxt7);
                                p_engine_A ();
                                p_engine_after_txt ();
                                v_questen [1] = 2;
                                v_sgo += 2;
                        }
                        else if (v_questen [1] == 2)
                        {
                                p_engine_set_txt (saratxt7);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                }
        }

        //Aufgabensteller Seher Xaver
        if ((v_smk == 118) || (v_smk == 84) || (v_smk == 46) || (v_smk == 80))
        {
                if (v_keyflag == 1)
                {
                        if (v_questen [0] == 0)
                        {
                                p_engine_set_txt (xavertxt1);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt2);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt3);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt4);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt5);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt6);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt7);
                                p_engine_A ();
                                p_engine_after_txt ();
                                v_questen [0] = 1;
                                p_lvl_status ();
                        }
                        else if (v_questen [0] == 1)
                        {
                                p_engine_set_txt (xavertxt7);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                        else if (v_questen [0] == 2)
                        {
                                p_engine_set_txt (xavertxt8);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt9);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt10);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt11);
                                p_engine_A ();
                                p_engine_after_txt ();
                                v_questen [0] = 3;
                                p_lvl_status ();
                                v_spitzhacke = TRUE;
                        }
                        else if ((v_questen [0] == 3) && (v_questen [2] != 3))
                        {
                                p_engine_set_txt (xavertxt11);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                        else if ((v_questen [2] == 3) && (v_questen [3] == 0))
                        {
                                p_engine_set_txt (xavertxt12);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt13);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt14);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt15);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt16);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt17);
                                p_engine_A ();
                                p_engine_after_txt ();
                                ++v_questen [3];
                                ++v_questen [0];
                        }
                        else if ((v_questen [0] == 4) || (v_questen [0] == 5) || (v_questen [0] == 6)) {
                                p_engine_set_txt (xavertxt31);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                        else if (v_questen [0] == 8)
                        {
                                p_engine_set_txt (xavertxt18);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt19);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt20);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt21);
                                p_engine_down ();
                                p_engine_set_txt (xavertxt22);
                                p_engine_A ();
                                p_engine_after_txt ();  
                                v_questen [0] = 9;
                        }
                        v_aktion = TRUE;
                }
	}

        if (v_keyflag == 1)
        {
                //Levelwechsel zu Raum 2 (Handwerksviertel)
                if (v_smk == 9)
                {
                        if (v_questen [0] < 2)
                        {
                                p_tuerzu ();
                        }
                        else
                        {
                                p_engine_loadTileset (BANK_2, 4, 15, felsengrund_2, 15);
                                p_engine_loadMap (v_lvl1b, 5, 15);
                                p_engine_changeLvl (2, 88, 120);
                        }
                }
                //Levelwechsel Raum 3 (Marktviertel)
                else if (v_smk == 90)
                {
                        p_engine_loadTileset (2, 4, 15, felsengrund_3, 15);
                        p_engine_loadMap (v_lvl1c, 5, 15);
                        p_engine_changeLvl (3, 144, 64); 
                }
                //Levelwechsel Stadtgefängnis
                else if ((v_sxk == 136) && (v_syk == 32))
                {
                        p_engine_loadTileset (2, 14, 23, stadtgefaengnis, 15);
                        p_engine_loadMap (v_lvl5, 5, 15);
                        p_engine_changeLvl (5, 136, 32);
                        p_gui_show_location (lstadtgefaengnis);
                        v_region = 2;
                }
        }
}

///Ablauf Raum 2
void p_lvl2 (void) __banked
{
        p_portal (22);

        //Schilder
        p_schild (152, schildtxt1c);
        p_schild (56, schildtxt1d);

        //NPC Schmiedin Fiona 
        if (v_smk == 67)
        {
                p_fiona ();
        }

        //NPC Schneider Max
        if ((v_smk == 211) || (v_smk == 177))
        {
                p_max ();
        }

        //Raumwechsel 1 (Hafen)
	if (v_smk == 225)
	{
		p_engine_loadTileset (2, 8, 29, felsengrund_1, 15);
		p_engine_loadMap (v_lvl1a, 5, 15);
		p_engine_changeLvl (1, 88, 24);
	}
}

void p_lvl3 (void) __banked
{
        //Schild
        p_schild (195, schildtxt1e);

        //Provianthaendler
        if (v_smk == 202) p_provianthaendler ();

        //Ausdauerverkäuferin
        if (v_smk == 31) p_ausdauerhandlerin ();

        if (v_smk  == 148) p_heiltrankhaendlerin ();

        //Aufgabe Wächter Hugo
        if (v_keyflag == 1)
        {
                if ((v_smk == 92) || (v_smk == 58) || (v_smk == 20))
                {
                        if (v_questen [2] == 0)
                        {
                                p_engine_set_txt (hugotxt1);
                                p_engine_down ();
                                p_engine_set_txt (hugotxt2);
                                p_engine_down ();
                                p_engine_set_txt (hugotxt3);
                                p_engine_A ();
                                p_engine_after_txt ();
                                v_questen [2] = 1;
                                v_tuer [6] = 1;
                                p_lvl_status ();
                        }
                        else if (v_questen [2] == 1)
                        {
                                p_engine_set_txt (hugotxt4);
                                p_engine_A ();
                                p_engine_after_txt ();
                        }
                        else if (v_questen [2] == 2)
                        {       
                                p_engine_set_txt (hugotxt5);
                                p_engine_down ();
                                p_engine_set_txt (hugotxt6);
                                p_engine_down ();
                                p_engine_set_txt (hugotxt7);
                                p_engine_down ();
                                p_engine_set_txt (hugotxt8);
                                p_engine_A ();
                                p_engine_after_txt ();

                                v_questen [2] = 3;
                                v_sichel = TRUE;
                        }
                }
        }

        if (v_keyflag == 1)
        {
                if (v_smk == 90) {
                        if (v_tuer [6] == 0) {
                                p_tuerzu ();
                }
                else if (v_tuer [6] == 1) {
                        
                        p_engine_loadTileset (2, 3, 34, wiesen_1, 15);
                        p_engine_loadMap (v_lvl20, 5, 15);
                        p_engine_changeLvl (20, 144, 64);
                        p_gui_show_location (lwiesen);
                        v_region = 3;
                        }
                }

                //Levelwechsel Raum 1 (Hafen)
                else if (v_smk == 106)
                {
                        p_engine_loadTileset (2, 8, 29, felsengrund_1, 15);
                        p_engine_loadMap (v_lvl1a, 5, 15);
                        p_engine_changeLvl (1, 16, 64);
                }
        }
}

