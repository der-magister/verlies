//#pragma bank=16

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
//   Kontakt: magister@kabelmail.de

#include "ogerhoehlen.h"

#include "engine.h"
#include "locations.h"
#include "truhen.h"
#include "schilder.h"
#include "boss.h"
#include "text.h"
#include "other.h"
#include "umgebung.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/locations/locations.h"

#include "daten/lvl/lvldatwiesen.h"
#include "daten/lvl/lvldatogerhoehlen.h"

#include "daten/txt/npcs/ogerboss1.h"

///Ablauf Raum 40
void p_lvl40 (void) __banked
{       
        if (v_smk == 108) {
                if ((v_tuer [0] == 0) && (v_ske == 0)) {
                        p_tuerzu ();
                }
                else if ((v_tuer [0] == 0) && (v_ske == 1)) {
                        v_tuer [0] = 1;
                        --v_ske;
                } 
                if (v_tuer [0] == 1) {
                        p_engine_loadMap (v_lvl45, BANK_6, BANK_16);  
                        p_engine_changeLvl (45, 144, 72);
                }
        }
        //Raumwechsel
        else if (v_smk == 228) {
                p_engine_loadMap (v_lvl41, BANK_6, BANK_16);
                p_engine_changeLvl (41, 112, 24);
        }
        else if (v_smk == 124) {
                p_engine_loadTileset (BANK_2, 3, 34, wiesen_1, BANK_16);
                p_engine_loadMap (v_lvl37, BANK_5, BANK_16);
                p_engine_changeLvl (37, 16, 72);
                p_gui_show_location (lwiesen);
                v_region = 3;
        }
        else if (v_smk == 11) {
                p_engine_loadMap (v_lvl42, BANK_6, BANK_16);
                p_engine_changeLvl (42, 104, 120);
        }
}

///Ablauf Raum 41
void p_lvl41 (void) __banked
{
        p_truhe_proviant (188, 11, 2);
        
        if (v_smk == 12) {
                p_engine_loadMap (v_lvl40, BANK_6, BANK_16);
                p_engine_changeLvl (40, 112, 120);
        }
}

///Ablauf Raum 42
void p_lvl42 (void) __banked
{
        if (v_smk == 227) {
                p_engine_loadMap (v_lvl40, BANK_6, BANK_16);
                p_engine_changeLvl (40, 104, 24);
        }
        else if (v_smk == 11) {
                p_engine_loadMap (v_lvl43, BANK_6, BANK_16);
                p_engine_changeLvl (43, 104, 120);
        }
}

///Ablauf Raum 43
void p_lvl43 (void) __banked
{
        p_schalter_tuer (51, 1);

        if (v_smk == 227) {
                p_engine_loadMap (v_lvl42, BANK_6, BANK_16);
                p_engine_changeLvl (42, 104, 24);
        }
        else if (v_smk == 11) {
                if (v_schalter [1] == 0) {
                        p_tuerzu ();
                }
                else {
                        p_engine_loadMap (v_lvl44, BANK_6, BANK_16);
                        p_engine_changeLvl (44, 104, 120);
                }
        }
}

///Ablauf Raum 44
void p_lvl44 (void) __banked
{
        p_truhe_schluessel (44, 12);
        
        if (v_smk == 227) {
                p_engine_loadMap (v_lvl43, BANK_6, BANK_16);
                p_engine_changeLvl (43, 104, 24);
        }
}

///Ablauf Raum 45
void p_lvl45 (void) __banked
{
        p_truhe_karte (188, 3, 17);

        if (v_smk == 124) {
                p_engine_loadMap (v_lvl40, BANK_6, BANK_16);
                p_engine_changeLvl (40, 16, 72);
        }
                else if (v_smk == 36) {
                        p_engine_loadMap (v_lvl46, BANK_6, BANK_16);
                        p_engine_changeLvl (46, 144, 40);
                }
} 

void p_lvl46 (void) __banked
{
        if (v_smk == 52) {
                p_engine_loadMap (v_lvl45, BANK_6, BANK_16);
                p_engine_changeLvl (45, 16, 40);
        }
        else if (v_smk == 126) {
                p_engine_loadMap (v_lvl47, BANK_6, BANK_16);
                p_engine_changeLvl (47, 144, 80);
        }
}

void p_lvl47 (void) __banked
{
        if (v_smk == 142) {
                p_engine_loadMap (v_lvl46, BANK_6, BANK_16);
                p_engine_changeLvl (46, 16, 80);
        }
        else if (v_smk == 225) {
                p_engine_loadMap (v_lvl48, BANK_6, BANK_16);
                p_engine_changeLvl (48, 88, 24);
        }
        else if (v_smk == 5) {
                p_engine_loadMap (v_lvl51, BANK_6, BANK_16);
                p_engine_changeLvl (51, 56, 120);
        }
        else if (v_smk == 108) {
                p_engine_loadMap (v_lvl54, BANK_6, BANK_16);
                p_engine_changeLvl (54, 144, 72);
        }
}

void p_lvl48 (void) __banked
{
        if (v_smk == 9) {
                p_engine_loadMap (v_lvl47, BANK_6, BANK_16);
                p_engine_changeLvl (47, 88, 120);
        }
        else if (v_smk == 142) {
                p_engine_loadMap (v_lvl49, BANK_6, BANK_16);
                p_engine_changeLvl (49, 16, 80);
        }
}

///Ablauf Raum 49
void p_lvl49 (void) __banked
{
        if (v_smk == 126) {
                p_engine_loadMap (v_lvl48, BANK_6, BANK_16);
                p_engine_changeLvl (48, 144, 80);
        }
        else if (v_smk == 142) {
                p_engine_loadMap (v_lvl50, BANK_6, BANK_16);
                p_engine_changeLvl (50, 16, 80);
        }
}

void p_lvl50 (void) __banked
{
        p_truhe_proviant (42, 13, 1);
        p_truhe_schluessel (45, 14);
        
        if (v_smk == 126) {
                p_engine_loadMap (v_lvl49, BANK_6, BANK_16);
                p_engine_changeLvl (49, 144, 80);
        }
}

///Ablauf Raum 51
void p_lvl51 (void) __banked
{
        if (v_smk == 160) {
                if ((v_tuer [1] == 0) && (v_ske == 0)) {
                        p_tuerzu ();
                }
                else if ((v_tuer [1] == 0) && (v_ske != 0)) {
                        v_tuer [1] = 1;
                        --v_ske;
                } 
                else if (v_tuer [1] == 1) {
                        p_engine_loadMap (v_lvl52, BANK_6, BANK_16);  
                        p_engine_changeLvl (52, 16, 96);
                }
        }
        else if (v_smk == 221) {
                p_engine_loadMap (v_lvl47, BANK_6, BANK_16);
                p_engine_changeLvl (47, 56, 24);
        }
}

///Ablauf Raum 52
void p_lvl52 (void) __banked
{
        if (v_smk == 162) {
                p_engine_loadMap (v_lvl51, BANK_6, BANK_16);
                p_engine_changeLvl (51, 144, 88);
        }
        else if (v_smk == 124)
        {
                p_engine_loadMap (v_lvl53, BANK_6, BANK_16);
                p_engine_changeLvl (53, 16,72);
        }
}

///Ablauf Raum 53
void p_lvl53 (void) __banked
{
        p_truhe_ausdauertrank (42, 15);
        p_truhe_heiltrank (159, 16);

        if (v_smk == 108) {
                p_engine_loadMap (v_lvl52, BANK_6, BANK_16);
                p_engine_changeLvl (52, 144, 72);
        }

}

void p_lvl54 (void) __banked
{
        if (v_smk == 124) {
                p_engine_loadMap (v_lvl47, BANK_6, BANK_16);
                p_engine_changeLvl (47, 16, 72);
        }
        else if (v_smk == 108) {
                p_engine_loadMap (v_lvl55, BANK_6, BANK_16);
                p_engine_changeLvl (55, 144, 72);
        }
}

void p_lvl55 (void) __banked
{
        if (v_smk == 220) {
                if ((v_tuer [2] == 0) && (v_ske == 0)) {
                        p_tuerzu ();
                }
        
                else if ((v_tuer [2] == 0) && (v_ske != 0)) {
                        v_tuer [2] = 1;
                        --v_ske;
                } 
                else if (v_tuer [2] == 1) {
                        p_engine_loadMap (v_lvl61, BANK_6, BANK_16);  
                        p_engine_changeLvl (61, 48, 24);
                }
        }
        else if (v_smk == 124) {
                p_engine_loadMap (v_lvl54, BANK_6, BANK_16);
                p_engine_changeLvl (54, 16, 72);
        }
        else if (v_smk == 12) {
                p_engine_loadMap (v_lvl56, BANK_6, BANK_16);
                p_engine_changeLvl (56, 112, 120);
        }
}

void p_lvl56 (void) __banked
{
        if (v_smk == 228) {
                p_engine_loadMap (v_lvl55, BANK_6, BANK_16);
                p_engine_changeLvl (55, 112, 24);
        }
        else if (v_smk == 4) {
                p_engine_loadMap (v_lvl57, BANK_6, BANK_16);
                p_engine_changeLvl (57, 48, 120);
        }
}

void p_lvl57 (void) __banked
{
        p_schalter_tuer (37, 2);

        if (v_smk == 220) {
                p_engine_loadMap (v_lvl56, BANK_6, BANK_16);
                p_engine_changeLvl (56, 48, 24);
        }
        else if (v_smk == 124) {
                if (v_schalter [2] == 0) {
                        p_tuerzu ();
                }
                else {
                        p_engine_loadMap (v_lvl58, BANK_6, BANK_16);
                        p_engine_changeLvl (58, 16, 72);
                }
        }
}

void p_lvl58 (void) __banked
{
        p_schalter_tuer (51, 3);

        if (v_smk == 108) {
                p_engine_loadMap (v_lvl57, BANK_6, BANK_16);
                p_engine_changeLvl (57, 144, 72);
        }
        else if (v_smk == 214) {
                if (v_schalter [3] == 0) {
                        p_tuerzu ();
                }
                else {
                        p_engine_loadMap (v_lvl59, BANK_6, BANK_16);
                        p_engine_changeLvl (59, 16, 112);
                }
        }
}

void p_lvl59 (void) __banked
{
        p_schalter_tuer (195, 4);

        if (v_smk == 198) {
                p_engine_loadMap (v_lvl58, BANK_6, BANK_16);
                p_engine_changeLvl (58, 144, 112);
        }
        else if (v_smk == 124) {
                if (v_schalter [4] == 0) {
                        p_tuerzu ();
                }
                else {
                        p_engine_loadMap (v_lvl60, BANK_6, BANK_16);
                        p_engine_changeLvl (60, 16, 72);
                }
        }
}

void p_lvl60 (void) __banked
{
        p_truhe_schluessel (188, 18);
        p_truhe_proviant (37, 19, 1);
        p_truhe_gold (51, 20, 2);
        p_truhe_lebenskristall (116, 21);

        if (v_smk == 108) {
                p_engine_loadMap (v_lvl59, BANK_6, BANK_16);
                p_engine_changeLvl (59, 144, 72);
        }
}

void p_lvl61 (void) __banked
{
        if (v_smk == 126) {
                p_engine_loadMap (v_lvl62, BANK_6, BANK_16);
                p_engine_changeLvl (62, 144, 80);
        }
        else if (v_smk == 4) {
                p_engine_loadMap (v_lvl55, BANK_6, BANK_16);
                p_engine_changeLvl (55, 48, 120);
        }
}

void p_lvl62 (void) __banked
{
        if (v_smk == 142) {
                p_engine_loadMap (v_lvl61, BANK_6, BANK_16);
                p_engine_changeLvl (61, 16, 80);
        }
        else if (v_smk == 18) {
                p_engine_loadMap (v_lvl63, BANK_6, BANK_16);
                p_engine_changeLvl (63, 144, 32);
        }
}

void p_lvl63 (void) __banked
{
        if (v_smk == 34) {
                p_engine_loadMap (v_lvl62, BANK_6, BANK_16);
                p_engine_changeLvl (62, 16, 32);
        }
        else if (v_smk == 3) {
                p_engine_loadMap (v_lvl64, BANK_6, BANK_16);
                p_engine_changeLvl (64, 40, 120);
        }
}

void p_lvl64 (void) __banked
{
        if (v_smk == 219) {
                p_engine_loadMap (v_lvl63, BANK_6, BANK_16);
                p_engine_changeLvl (63, 40, 24);
        }
        else if (v_smk == 7) {
                p_engine_loadMap (v_lvl65, BANK_6, BANK_16);
                p_engine_changeLvl (65, 72, 120);
        }
}

void p_lvl65 () __banked
{
        if (v_smk == 223) {
                p_engine_loadMap (v_lvl64, BANK_6, BANK_16);
                p_engine_changeLvl (64, 72, 24);
        }
        else if (v_smk == 98) {
                p_engine_loadMap (v_lvl66, BANK_6, BANK_16);
                p_engine_changeLvl (66, 80, 64);
                p_engine_set_txt (ogerboss1);
                p_engine_A ();
                p_engine_after_txt ();
                p_gegner_set_boss (1);
                v_bosskampf = TRUE;
        }
}

void p_lvl66 () __banked
{
        p_stein (112, 3);
        p_stein (120, 4);

        if ((v_questen [0] >= 2) && (v_smk == 44)) {
                p_engine_loadMap (v_lvl40, BANK_6, BANK_16);
                p_engine_changeLvl (40, 80, 64);
        }
}
