//#pragma bank=16

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
//   Kontakt: magister@kabelmail.de

#include "feensee.h"
#include "engine.h"
#include "locations.h"
#include "truhen.h"
#include "npc.h"
#include "text.h"
#include "other.h"
#include "schilder.h"
#include "umgebung.h"
#include "lvlstatus.h"
#include "portale.h"

#include "daten/lvl/v_lvl70.h"
#include "daten/lvl/lvldatdorfseefeen.h"
#include "daten/lvl/lvldatfeensee.h"

#include "daten/tilesets/wiesen_1-4-37.h"

#include "daten/txt/locations/locations.h"

#include "daten/txt/npcs/feenaeltestetxt1.h"
#include "daten/txt/npcs/feenaeltestetxt2.h"
#include "daten/txt/npcs/feenaeltestetxt3.h"
#include "daten/txt/npcs/feenaeltestetxt4.h"
#include "daten/txt/npcs/feenaeltestetxt5.h"
#include "daten/txt/npcs/feenaeltestetxt6.h"
#include "daten/txt/npcs/feenaeltestetxt7.h"
#include "daten/txt/npcs/feenaeltestetxt8.h"
#include "daten/txt/npcs/feenaeltestetxt9.h"
#include "daten/txt/npcs/feenaeltestetxt10.h"
#include "daten/txt/npcs/feenaeltestetxt11.h"
#include "daten/txt/npcs/feenaeltestetxt12.h"
#include "daten/txt/npcs/feenaeltestetxt13.h"
#include "daten/txt/npcs/feenaeltestetxt14.h"

#include "daten/txt/other/oelloch.h"
#include "daten/txt/other/oelloch2.h"

#include "daten/txt/schilder/schildtxt5.h"

///Ablauf Raum 90
void p_lvl90 () __banked
{
        p_truhe_karte (37, 4, 27);

        p_npc_heiler (201);

        if ((v_smk == 67) || (v_smk == 33) || (v_smk == 105))
        {
                if ((v_keyflag == 1) && (v_questen [0] == 4))
                {
                        p_engine_set_txt (feenaeltestetxt1);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt2);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt3);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt4);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt5);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt6);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_questen [0] = 5;
                } 
                else if ((v_keyflag == 1) && (v_questen [0] == 5))
                {
                        p_engine_set_txt (feenaeltestetxt6);
                        p_engine_A ();
                        p_engine_after_txt ();
                }
                else if ((v_keyflag == 1) && v_questen [0] == 7)
                {
                        p_engine_set_txt (feenaeltestetxt7);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt8);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt9);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt10);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt11);
                        p_engine_down ();
                        /*p_engine_set_txt (feenaeltestetxt12);
                        p_engine_down ();
                        p_engine_set_txt (feenaeltestetxt13);
                        p_engine_down ();*/
                        p_engine_set_txt (feenaeltestetxt14);
                        p_engine_A ();
                        p_engine_after_txt ();
                        v_questen [0] = 8;
                        v_use_portal = TRUE;
                        v_aspekte [0] = TRUE;
                }
                else if ((v_keyflag == 1) && (v_questen [0] > 7))
                {
                        p_engine_set_txt (feenaeltestetxt14);
                        p_engine_A ();
                        p_engine_after_txt ();        
                }
        }

        if (v_smk == 224)
        {
                p_engine_loadMap (v_lvl91, BANK_6, BANK_16);
                p_engine_changeLvl (91, 80, 24);        
        }
        else if (v_smk == 8)
        {
                p_engine_loadTileset (2, 4, 33, wiesen_1, BANK_16);
                p_engine_loadMap (v_lvl70, BANK_5, BANK_16);
                p_engine_changeLvl (70, 80, 120);
                p_gui_show_location (lwiesen);
        } 
}

///Ablauf Raum 91
void p_lvl91 () __banked
{
        p_portal (21);
        

        if (v_smk == 69) { p_provianthaendler (); }

        if (v_smk == 201) p_zauberstaubhaendler ();

        if (v_smk == 8)
        {
                p_engine_loadMap (v_lvl90, BANK_6, BANK_16);
                p_engine_changeLvl (90, 80, 120);
        }
        else if ((v_smk == 227) && (v_questen [0] >= 5))
        {
                p_engine_loadMap (v_lvl95, BANK_6, BANK_16);
                p_engine_changeLvl (95, 104, 24);
                p_gui_show_location (lfeensee);
        }
}

///Ablauf Raum 95
void p_lvl95 () __banked
{
        p_stein (56, 5);

        p_schild (62, schildtxt5);

        if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl91, BANK_6, BANK_16);
                p_engine_changeLvl (91, 104, 120);
        }
        else if (v_smk == 124)
        {
                p_engine_loadMap (v_lvl96, BANK_6, BANK_16);
                p_engine_changeLvl (96, 16, 72);
        }
        else if (v_smk == 54)
        {
                p_engine_loadMap (v_lvl98, BANK_6, BANK_16);
                p_engine_changeLvl (98, 144, 48);
        }
}

///Ablauf Raum 96
void p_lvl96 () __banked
{
        if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl95, BANK_6, BANK_16);
                p_engine_changeLvl (95, 144, 72);
        }
        else if (v_smk == 70)
        {
                p_engine_loadMap (v_lvl97, BANK_6, BANK_16);
                p_engine_changeLvl (97, 16, 48);
        }
}

///Ablauf Raum 97
void p_lvl97 () __banked
{
        if (v_smk == 54)
        {
                p_engine_loadMap (v_lvl96, BANK_6, BANK_16);
                p_engine_changeLvl (96, 144, 48);
        }
        else if (v_smk == 227)
        {
                p_engine_loadMap (v_lvl101, BANK_6, BANK_16);
                p_engine_changeLvl (101, 104, 24);
        }
}

///Ablauf Raum 98
void p_lvl98 () __banked
{
        if (v_smk == 70)
        {
                p_engine_loadMap (v_lvl95, BANK_6, BANK_16);
                p_engine_changeLvl (95, 16, 48);
        }
        else if (v_smk == 126)
        {
                p_engine_loadMap (v_lvl99, BANK_6, BANK_16);
                p_engine_changeLvl (99, 144, 80);
        }
}

///Ablauf Raum 99
void p_lvl99 () __banked
{
        p_truhe_karte (37, 5, 30);

        if (v_smk == 142)
        {
                p_engine_loadMap (v_lvl98, BANK_6, BANK_16);
                p_engine_changeLvl (98, 16, 80);
        }
        else if (v_smk == 223)
        {
                p_engine_loadMap (v_lvl100, BANK_6, BANK_16);
                p_engine_changeLvl (100, 72, 24);
        }

}

///Ablauf Raum 100
void p_lvl100 () __banked
{
        if (v_smk == 7)
        {
                p_engine_loadMap (v_lvl99, BANK_6, BANK_16);
                p_engine_changeLvl (99, 72, 120);
        }
        else if (v_smk == 223)
        {
                p_engine_loadMap (v_lvl102, BANK_6, BANK_16);
                p_engine_changeLvl (102, 72, 24);
        }
}

///Ablauf Raum 101
void p_lvl101 () __banked
{
        if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl97, BANK_6, BANK_16);
                p_engine_changeLvl (97, 104, 120);
        }
        else if (v_smk == 227)
        {
                p_engine_loadMap (v_lvl104, BANK_6, BANK_16);
                p_engine_changeLvl (104, 104, 24);
        }
}

///Ablauf Raum 102
void p_lvl102 () __banked
{
        if (v_smk == 7)
        {
                p_engine_loadMap (v_lvl100, BANK_6, BANK_16);
                p_engine_changeLvl (100, 72, 120);
        }
        else if (v_smk == 223)
        {
                p_engine_loadMap (v_lvl105, BANK_6, BANK_16);
                p_engine_changeLvl (105, 72, 24);
        }
}

///Ablauf Raum 103
void p_lvl103 () __banked
{
        if (v_questen [0] < 6)
        {
                p_schild (80, oelloch);
        }
        else if (v_questen [0] == 6)
        {
                p_schild (80, oelloch2);
                v_questen [0] = 7;
                p_lvl_status ();
        }

        if (v_smk == 224)
        {
                p_engine_loadMap (v_lvl107, BANK_6, BANK_16);
                p_engine_changeLvl (107, 80, 24);
        }
}

void p_lvl104 () __banked
{
        p_stein (191, 6);
        p_truhe_gold (51, 28, 1);

        if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl101, BANK_6, BANK_16);
                p_engine_changeLvl (101, 104, 120);
        }
        else if (v_smk == 227)
        {
                p_engine_loadMap (v_lvl109, BANK_6, BANK_16);
                p_engine_changeLvl (109, 104, 24);
        }
}

void p_lvl105 () __banked
{
        if (v_smk == 7)
        {
                p_engine_loadMap (v_lvl102, BANK_6, BANK_16);
                p_engine_changeLvl (102, 72, 120);
        }
        else if (v_smk == 231)
        {
                p_engine_loadMap (v_lvl110, BANK_6, BANK_16);
                p_engine_changeLvl (110, 136, 24);
        }
        else if (v_smk == 124)
        {
		p_engine_loadMap (v_lvl106, BANK_6, BANK_16);
		p_engine_changeLvl (106, 16, 72);
	}
}

void p_lvl106 () __banked
{
	if (v_smk == 108)
	{
		p_engine_loadMap (v_lvl105, BANK_6, BANK_16);
                p_engine_changeLvl (105, 144, 72);
        }
        else if (v_smk == 124) 
        {
                p_engine_loadMap (v_lvl107, BANK_6, BANK_16);
                p_engine_changeLvl (107, 16, 72);

        }
}

void p_lvl107 () __banked
{
        p_stein (44, 13);
        p_truhe_proviant (181, 35, 1);

        if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl106, BANK_6, BANK_16);
                p_engine_changeLvl (106, 144, 72);
        }
        else if (v_smk == 8)
        {
                p_engine_loadMap (v_lvl103, BANK_6, BANK_16);
                p_engine_changeLvl (103, 80, 120);
        }
        else if (v_smk == 214)
        {
                p_engine_loadMap (v_lvl108, BANK_6, BANK_16);
                p_engine_changeLvl (108, 16, 112);
        }
}

void p_lvl108 () __banked
{
        if (v_smk == 198)
        {
                p_engine_loadMap (v_lvl107, BANK_6, BANK_16);
                p_engine_changeLvl (107, 144, 112);
        }
        else if (v_smk == 178)
        {
                p_engine_loadMap (v_lvl109, BANK_6, BANK_16);
                p_engine_changeLvl (109, 16, 96);
        }
}

void p_lvl109 () __banked
{
        if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl104, BANK_6, BANK_16);
                p_engine_changeLvl (104, 104, 120);
        }
        else if (v_smk == 222)
        {
                p_engine_loadMap (v_lvl114, BANK_6, BANK_16);
                p_engine_changeLvl (114, 64, 24);
        }
        else if (v_smk == 162)
        {
                p_engine_loadMap (v_lvl108, BANK_6, BANK_16);
                p_engine_changeLvl (108, 144, 96);
        }
}

void p_lvl110 () __banked
{
        p_stein (51, 10);
        p_stein (176, 11);
        p_stein (187, 12);

        p_truhe_wappenrock ();

        if (v_smk == 15)
        {
                p_engine_loadMap (v_lvl105, BANK_6, BANK_16);
                p_engine_changeLvl (105, 136, 120);
        } 
        else if (v_smk == 178)
        {
                p_engine_loadMap (v_lvl111, BANK_6, BANK_16);
                p_engine_changeLvl (111, 16, 96);
        }
}

void p_lvl111 () __banked
{
        if (v_smk == 162)
        {
                p_engine_loadMap (v_lvl110, BANK_6, BANK_16);
                p_engine_changeLvl (110, 144, 96);
        }
        else if (v_smk == 34)
        {
                p_engine_loadMap (v_lvl112, BANK_6, BANK_16);
                p_engine_changeLvl (112, 16, 32);
        }
}

void p_lvl112 () __banked
{
        p_stein (150, 14);
        p_stein (186, 15);
        p_stein (152, 16);
        p_stein (188, 17);
        p_stein (154, 18);
        p_stein (190, 19);

        if (v_smk == 18)
        {
                p_engine_loadMap (v_lvl111, BANK_6, BANK_16);
                p_engine_changeLvl (111, 144, 32);
        } 
        else if (v_smk == 224)
        {
                p_engine_loadMap (v_lvl117, BANK_6, BANK_16);
                p_engine_changeLvl (117, 80, 24);
        }
        else if (v_smk == 160)
        {
                p_engine_loadMap (v_lvl113, BANK_6, BANK_16);
                p_engine_changeLvl (113, 16, 88);
        }
}

void p_lvl113 () __banked
{
        if (v_smk == 144)
        {
                p_engine_loadMap (v_lvl112, BANK_6, BANK_16);
                p_engine_changeLvl (112, 144, 88);
        }
        else if (v_smk == 52)
        {
                p_engine_loadMap (v_lvl114, BANK_6, BANK_16);
                p_engine_changeLvl (114, 16, 40);
        }
}

void p_lvl114 () __banked
{
        p_stein (191, 7);
        p_stein (38, 8);

        if (v_smk == 6)
        {
                p_engine_loadMap (v_lvl109, BANK_6, BANK_16);
                p_engine_changeLvl (109, 64, 120);
        }
        else if (v_smk ==  227)
        {
                p_engine_loadMap (v_lvl115, BANK_6, BANK_16);
                p_engine_changeLvl (115, 104, 24);
        }
        else if (v_smk == 36)
        {
                p_engine_loadMap (v_lvl113, BANK_6, BANK_16);
                p_engine_changeLvl (113, 144, 40);
        }

}

void p_lvl115 () __banked
{
        if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl114, BANK_6, BANK_16);
                p_engine_changeLvl (114, 104, 120);
        }
        else if (v_smk == 178)
        {
                p_engine_loadMap (v_lvl116, BANK_6, BANK_16);
                p_engine_changeLvl (116, 16, 96);
        }
}

void p_lvl116 () __banked
{
        p_truhe_magischer_stein ();

        if (v_smk == 162)
        {
                p_engine_loadMap (v_lvl115, BANK_6, BANK_16);
                p_engine_changeLvl (115, 144, 96);
        }
}

void p_lvl117 () __banked
{
        p_truhe_proviant (183, 32, 2);
        p_truhe_ausdauertrank (188, 33);
        p_truhe_heiltrank (193, 34);

        if (v_smk == 8)
        {
                p_engine_loadMap (v_lvl112, BANK_6, BANK_16);
                p_engine_changeLvl (112, 80, 120);
        }

}
