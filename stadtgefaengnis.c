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

//#pragma bank=16

#include "engine.h"
#include "locations.h"
#include "truhen.h"
#include "schilder.h"
#include "stadtgefaengnis.h"
#include "gegner.h"
#include "lvlstatus.h"
#include "text.h"
#include "other.h"

#include "daten/tilesets/tilesets.h"
#include "daten/txt/locations/locations.h"

#include "daten/lvl/lvldatfelsengrund.h"
#include "daten/lvl/lvldatstadtgefaengnis.h"

#include "daten/txt/npcs/phobetxt1.h"
#include "daten/txt/npcs/phobetxt2.h"
#include "daten/txt/npcs/phobetxt3.h"

///Ablauf Raum 5
void p_lvl5 (void) __banked
{
	//Truhe mit Schwert
	p_truhe_schwert (37, 1);

	//Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 33)
                {
                        p_engine_loadTileset (2, 8, 29, felsengrund_1, 16);
                        p_engine_loadMap (v_lvl1a, 5, 16);
                        p_engine_changeLvl (1, 136, 32);
                        p_gui_show_location (lfelsengrund);
                }
                else if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl6, 5, 16);
                        p_engine_changeLvl (6, 16, 72);   
                }
        }
}

///Ablauf Raum 6
void p_lvl6 () __banked
{
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl5, 5, 16);
                        p_engine_changeLvl (5, 144, 72);
                }
                else if (v_smk == 224)
                {
                        p_engine_loadMap (v_lvl7, 5, 16);
                        p_engine_changeLvl (7, 80, 24);
                }
        }
}

///Ablauf Raum 7 (Stadtgefängnis)
void p_lvl7 () __banked
{
	//Truhe mit Karte
	p_truhe_karte (51, 1, 2);

	//Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 8)
                {
                        p_engine_loadMap (v_lvl6, 5, 16);
                        p_engine_changeLvl (6, 80, 120);
                }
                else if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl8, 5, 16);
                        p_engine_changeLvl (8, 144, 72);
                }
        }
}

//Ablauf Raum 8
void p_lvl8 () __banked
{
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl7, 5, 16);
                        p_engine_changeLvl (7, 16, 72);
                }
                else if (v_smk == 223)
                {
                        p_engine_loadMap (v_lvl9, 5, 16);
                        p_engine_changeLvl (9, 72, 24);
                }
        }
}

///Ablauf Raum 9
void p_lvl9 () __banked
{
        //Truhe mit 2 Gold
        p_truhe_gold (195, 3, 2);

	//Raumwechsel
        if (v_keyflag == 1)
	{
                if (v_smk == 7)
                {
                        p_engine_loadMap (v_lvl8, 5, 16);
                        p_engine_changeLvl (8, 72, 120);
                }
                else if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl10, 5, 16);
                        p_engine_changeLvl (10, 16, 72);
                }
        }
}

///Ablauf Raum 10
void p_lvl10 () __banked
{
        //Schalter der eine Tür öffnet
	p_schalter_tuer (47, 0);
	
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl9, 5, 16);
                        p_engine_changeLvl (9, 144, 72);
                }
                else if (v_smk == 124)
                {
                        if (v_schalter [0] == 0)
                        {
                                p_tuerzu ();	
                        }
                        else 
                        {
                                p_engine_loadMap (v_lvl11, 5, 16);
                                p_engine_changeLvl (11, 16, 72);
                        }
                }
        }
}

///Ablauf Raum 11
void p_lvl11 () __banked
{
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl10, 5, 16);
                        p_engine_changeLvl (10, 144, 72);
                }
                else if (v_smk == 8)
                {
                        p_engine_loadMap (v_lvl12, 5, 16);
                        p_engine_changeLvl (12, 80, 120);
                }
                else if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl13, 5, 16);
                        p_engine_changeLvl (13, 16, 72);
                }
        }
}

///Ablauf Raum 12
void p_lvl12 () __banked
{
        //Provianttruhe
	p_truhe_proviant (44, 4, 1);
	
        //Raumwechsel
	if ((v_smk == 224) && (v_keyflag == 1))
	{
		p_engine_loadMap (v_lvl11, 5, 16);
		p_engine_changeLvl (11, 80, 24);
	}
}

///Ablauif Raum 13
void p_lvl13 () __banked
{
	//erste Begegnung mit Phobe
	if ((v_smk == 120) && (v_questen [0] == 1))
	{
                if (v_keyflag == 1)
                {
                        p_engine_set_txt (phobetxt1);
                        p_engine_down ();
                        p_engine_set_txt (phobetxt2);
                        p_engine_down ();
                        p_engine_set_txt (phobetxt3);
                        p_engine_A ();
                        p_engine_after_txt ();
                        ++v_questen [0];
                        p_lvl_status ();
                }
	}
        //Raumwechsel
	if ((v_smk == 108) && (v_keyflag == 1))
	{
			p_engine_loadMap (v_lvl11, 5, 16);
			p_engine_changeLvl (11, 144, 72);
	}
}
