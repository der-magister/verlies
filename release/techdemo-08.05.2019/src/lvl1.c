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

#pragma bank=15

#include "hud.h"
#include "engine.h"
#include "npc.h"
#include "schilder.h"
#include "gegner.h"
#include "lvl1.h"
#include "text.h"
#include "locations.h"
#include "other.h"

#include "daten/txt/schilder/schildtxt1.h"
#include "daten/txt/schilder/schildtxt1b.h"

#include "daten/txt/npcs/xavertxt1.h"
#include "daten/txt/npcs/xavertxt2.h"
#include "daten/txt/npcs/xavertxt3.h"
#include "daten/txt/npcs/xavertxt4.h"
#include "daten/txt/npcs/xavertxt5.h"
#include "daten/txt/npcs/xavertxt6.h"
#include "daten/txt/npcs/xavertxt7.h"
#include "daten/txt/npcs/xavertxt8.h"
#include "daten/txt/npcs/saratxt1.h"
#include "daten/txt/npcs/saratxt2.h"
#include "daten/txt/npcs/saratxt3.h"
#include "daten/txt/npcs/saratxt4.h"

#include "daten/lvl/v_lvl5.h"

#include "daten/tilesets/stadtgefaengnis.h"
#include "daten/txt/locations/stadtgefaengnis.h"

#include "l_stadtgefaengnis.h"


///Ablauf Raum 1
void p_lvl1 () BANKED
{
        //Heiler
        p_npc_heiler (40, 112);

        //Schilder
        p_schild (112, 112, schildtxt1);
        p_schild (120, 56, schildtxt1b);

        //Aufgabenstellerin Sara Spitzhacke
        if (((v_sxk == 48) && (v_syk == 64)) ||
        ((v_sxk == 64) && (v_syk == 48)) ||
        ((v_sxk == 48) && (v_syk == 32)) ||
        ((v_sxk == 32) && (v_syk == 48)))
        {
                if (v_questen [2] == 0)
                {
                        p_engine_set_txt (saratxt1);
                        p_engine_down ();
                        p_engine_set_txt (saratxt2);
                        p_engine_down ();
                        p_engine_set_txt (saratxt3);
                        ++v_questen [2];
                }
                else if (v_questen [2] == 1)
                {
		        p_engine_set_txt (saratxt4);
                }
        }

        //Aufgabensteller Seher Xaver
        if (((v_sxk == 96) && (v_syk == 72)) ||
        ((v_sxk == 112) && (v_syk == 56)) ||
	((v_sxk == 96) && (v_syk == 40)) ||
	((v_sxk == 80) && (v_syk == 56)))
        {
                if (v_questen [1] == 0)
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
                        ++v_questen [1];
                        v_tile [0] = 40;
                        p_engine_set_tile (15, 2, 1);
                        p_engine_set_tile (15, 3, 1);
                }
        else if (v_questen [1] == 1)
        {
                p_engine_set_txt (xavertxt8);
        }
        v_aktion = TRUE;
}

  //Levelwechsel zu Raum 2 (Handwerksviertel)
  if ((v_sxk == 88) && (v_syk == 24))
  {
	  p_tuerzu ();
        //p_engine_changeLvl (2, lvl2, 128, 56, 4);
  }
  else if ((v_sxk == 136) && (v_syk == 32))
  {
        p_engine_loadTileset (2, 0, 127, stadtgefaengnis, 15);
        p_engine_loadMap (v_lvl5, 5, 15);
        p_engine_changeLvl (5, 136, 32);
        p_gui_show_location (lstadtgefaengnis);
        v_gspeed = 80;
        p_gegner_set (0, 4, 120, 72, MOVE_NORTH, 1, 1);
        p_gegner_set (1, 8, 40, 48, MOVE_SOUTH, 1, 1);
  }
}
