//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "wiesen.h"
#include "engine.h"
#include "locations.h"
#include "umgebung.h"
#include "truhen.h"
#include "schilder.h"
#include "npc.h"

#include "daten/lvl/lvldatwiesen.h"
#include "daten/lvl/lvldatfelsengrund.h"
#include "daten/lvl/lvldatogerhoehlen.h"
#include "daten/lvl/lvldatdorfseefeen.h"
#include "daten/lvl/lvldateichenwald.h"
#include "daten/lvl/lvldatgebirgspfad.h"

#include "daten/tilesets/tilesets.h"

#include "daten/txt/locations/locations.h"

#include "daten/txt/schilder/schildertxt.h"

///Ablauf Raum 20
void p_lvl20 () __banked
{
	p_schild (195, schildtxt4);
	
        //Levelwechsel Raum 3 (Felsengrund Marktviertel)
        if (v_keyflag == 1)
        {
                if (v_smk == 106)
                {
                        p_engine_loadTileset (2, 8, 29, felsengrund_1, 16);
                        p_engine_loadTileset (2, 4, 15, felsengrund_3, 16);
                        p_engine_loadMap (v_lvl1c, BANK_5, BANK_16);
                        p_engine_changeLvl (3, 16, 64);
                        p_gui_show_location (lfelsengrund);
                }
                else if (v_smk == 9)
                {
                        p_engine_loadMap (v_lvl21, BANK_5, BANK_16);
                        p_engine_changeLvl (21, 88, 120);
                }
                else if (v_smk == 90)
                {
                        p_engine_loadMap (v_lvl24, BANK_5, BANK_16);
                        p_engine_changeLvl (24, 144, 64);
                } 
        }

}

///Ablauf Raum 21
void p_lvl21 () __banked
{
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 225)
                {
                        p_engine_loadMap (v_lvl20, BANK_5, BANK_16);
                        p_engine_changeLvl (20, 88, 24);
                }
                else if (v_smk == 9)
                {
                        p_engine_loadMap (v_lvl22, BANK_5, BANK_16);
                        p_engine_changeLvl (22, 88, 120);
                }
        }
}

///Ablauf Raum 22
void p_lvl22 () __banked
{
	//Stein
	p_stein (45, 1);
	
        //Raumwechsel
        if (v_keyflag == 1)
        {
                if (v_smk == 225)
                {
                        p_engine_loadMap (v_lvl21, BANK_5, BANK_16);
                        p_engine_changeLvl (21, 88, 24);
                }
                else if (v_smk == 9)
                {
			p_engine_loadMap (v_lvl22b, BANK_5, BANK_16);
                        p_engine_changeLvl (23, 88, 120);
		}
        }
}

///Ablauf Raum 23
void p_lvl23 () __banked
{
	//Truhe mit 2 Gold
	p_truhe_gold (64, 5, 2);
	
	p_truhe_karte (62, 2, 6);
	
	//Raumwechsel
	if (v_keyflag == 1)
	{
		if (v_smk == 225)
		{
			p_engine_loadMap (v_lvl22, BANK_5, BANK_16);
			p_engine_changeLvl (22, 88, 24);
		}
	}
}

///Ablauf Raum 24
void p_lvl24 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 106)
                {
                        p_engine_loadMap (v_lvl20, BANK_5, BANK_16);
                        p_engine_changeLvl (20, 16, 64);
                }
                else if (v_smk == 9)
                {
                        p_engine_loadMap (v_lvl25, BANK_5, BANK_16);
                        p_engine_changeLvl (25, 88, 120);
                }
                else if (v_smk == 225)
                {
                        p_engine_loadMap (v_lvl38, BANK_5, BANK_16);
                        p_engine_changeLvl (38, 88, 24);
                }
        }
}

///Ablauf Raum 25
void p_lvl25 () __banked
{
        //Goldtruhe
        p_truhe_gold (50, 7, 1);

        if (v_keyflag == 1)
        {
                if (v_smk == 225)
                {
                        p_engine_loadMap (v_lvl24, BANK_5, BANK_16);
                        p_engine_changeLvl (24, 88, 24);
                }
                else if (v_smk == 90)
                {
                        p_engine_loadMap (v_lvl26, BANK_5, BANK_16);
                        p_engine_changeLvl (26, 144, 64);
                }
        }
}

///Ablauf Raum 26
void p_lvl26 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 106)
                {
                        p_engine_loadMap (v_lvl25, BANK_5, BANK_16);
                        p_engine_changeLvl (25, 16, 64); 
                }
                else if (v_smk == 5)
                {
                        p_engine_loadMap (v_lvl27, BANK_5, BANK_16);
                        p_engine_changeLvl (27, 56, 120);
                }
        }
}

///Ablauf Raum 27
void p_lvl27 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 70)
                {
                        p_engine_loadMap (v_lvl28, BANK_5, BANK_16);
                        p_engine_changeLvl (28, 16, 48);
                }
                else if (v_smk ==221)
                {
                        p_engine_loadMap (v_lvl26, BANK_5, BANK_16);
                        p_engine_changeLvl (26, 56, 24);
                }
                else if (v_smk == 126)
                {
                        p_engine_loadMap (v_lvl29, BANK_5, BANK_16);
                        p_engine_changeLvl (29, 144, 80);
                }
        }

}


///Ablauf Raum 28
void p_lvl28 () __banked
{
        p_truhe_ausdauertrank (195, 8);

        if (v_keyflag == 1)
        {
                if (v_smk == 54)
                {
                        p_engine_loadMap (v_lvl27, BANK_5, BANK_16);
                        p_engine_changeLvl (27, 144, 48);
                }
        }
}


///Ablauf Raum 29
void p_lvl29 () __banked
{

        p_stein (128, 2);

        if (v_keyflag == 1)
        {
                if (v_smk == 142)
                {
                        p_engine_loadMap (v_lvl27, BANK_5, BANK_16);
                        p_engine_changeLvl (27, 16, 80);
                }
                else if (v_smk == 126)
                {
                        p_engine_loadMap (v_lvl31, BANK_5, BANK_16);
                        p_engine_changeLvl (31, 144, 80);
                }
                else if (v_smk == 224)
                {
                        p_engine_loadMap (v_lvl30, BANK_5, BANK_16);
                        p_engine_changeLvl (30, 80, 24);
                }
        } 
}

///Ablauf Raum 31
void p_lvl31 () __banked
{
        p_truhe_proviant (145, 10, 1);

        if (v_keyflag == 1)
        {
                if (v_smk == 188)
                {
                        p_truhe_brotbuechse_1 ();
                }
                //Raumwechsel
                if (v_smk == 142)
                {
                        p_engine_loadMap (v_lvl29, BANK_5, BANK_16);
                        p_engine_changeLvl (29, 16, 80);
                }
        }
}

///Ablauf Raum 30
void p_lvl30 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 8)
                {
                        p_engine_loadMap (v_lvl29, BANK_5, BANK_16);
                        p_engine_changeLvl (29, 80, 120);
                }
                else if (v_smk == 224)
                {
                        p_engine_loadMap (v_lvl32, BANK_5, BANK_16);
                        p_engine_changeLvl (32, 80, 24);
                }
        }
}

///Ablauf Raum 32
void p_lvl32 () __banked
{
        if (v_keyflag == 1)
        {
                //Raumwechsel
                if (v_smk == 8)
                {
                        p_engine_loadMap (v_lvl30, BANK_5, BANK_16);
                        p_engine_changeLvl (30, 80, 120);
                }
                else if (v_smk == 224)
                {
                        p_engine_loadMap (v_lvl33, BANK_5, BANK_16);
                        p_engine_changeLvl (33, 80, 24);                       
                }
        }
}

///Ablauf Raum 33
void p_lvl33 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 8)
                {
                        p_engine_loadMap (v_lvl32, BANK_5, BANK_16);
                        p_engine_changeLvl (32, 80, 120);
                }
                else if (v_smk == 144)
                {
                        p_engine_loadMap (v_lvl34, BANK_5, BANK_16);
                        p_engine_changeLvl (34, 144, 88);
                }
        }
}

///Ablauf Raum 34
void p_lvl34 () __banked
{
     if (v_keyflag == 1)
     { 
             if (v_smk == 160)
             {
                     p_engine_loadMap (v_lvl33, BANK_5, BANK_16);
                     p_engine_changeLvl (33, 16, 88);
             }
             else if (v_smk == 144)
             {
                     p_engine_loadMap (v_lvl35, BANK_5, BANK_16);
                     p_engine_changeLvl (35, 144, 88);
             }
             else if (v_smk == 220)
             {
                     p_engine_loadMap (v_lvl70, BANK_5, BANK_16);
                     p_engine_changeLvl (70, 48, 24);
             }
     }   
}

void p_lvl35 () __banked
{
        if (v_smk == 160)
        {
                p_engine_loadMap (v_lvl34, BANK_5, BANK_16);
                p_engine_changeLvl (34, 16, 88);
        }
        else if (v_smk == 72)
        {
                p_engine_loadMap (v_lvl36, BANK_5, BANK_16);
                p_engine_changeLvl (36, 144, 56);
        }
        else if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl16, BANK_5, BANK_16);
                p_engine_changeLvl (16, 104, 120);
        }
}

///Ablauf Raum 36
void p_lvl36 () __banked
{
	p_busch (188, 1);
	
        if (v_keyflag == 1)
        {
                if (v_smk == 88)
                {
                        p_engine_loadMap (v_lvl35, BANK_5, BANK_16);
                        p_engine_changeLvl (35, 16, 56);
                }
                else if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl37, BANK_5, BANK_16);
                        p_engine_changeLvl (37, 144, 72);
                }
                else if (v_smk == 224)
                {
			p_engine_loadMap (v_lvl78, BANK_5, BANK_16);
			p_engine_changeLvl (78, 80, 24);
		}
        }
}

///Ablauf Raum 37
void p_lvl37 () __banked
{
        p_schild (74, schildtxt2);

        
        if (v_smk == 124)
        {
                        p_engine_loadMap (v_lvl36, BANK_5, BANK_16);
                        p_engine_changeLvl (36, 16, 72);
        }
        else if (v_smk == 108)
        {
                p_engine_loadTileset (BANK_2, 4, 34, ogerhoehlen, BANK_16);
                p_engine_loadMap (v_lvl40, BANK_6, BANK_16);
                p_engine_changeLvl (40, 144, 72);
                p_gui_show_location (logerh);
                v_region = 4;
        }
        
}

void p_lvl38 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 9)
                {
                        p_engine_loadMap (v_lvl24, BANK_5, BANK_16);
                        p_engine_changeLvl (24, 88, 120);
                }
                else if (v_smk == 106)
                {
                        p_engine_loadMap (v_lvl39, BANK_5, BANK_16);
                        p_engine_changeLvl (39, 16, 64);
                }
        }
}

void p_lvl39 () __banked
{
        p_truhe_gold (116, 22, 2);

        if (v_keyflag == 1)
        {
                if (v_smk == 90)
                {
                        p_engine_loadMap (v_lvl38, BANK_5, BANK_16);
                        p_engine_changeLvl (38, 144, 64);
                }
        }
}

void p_lvl70 () __banked
{
        p_schild (201, schildtxt3);
        p_busch (188, 0);

        if (v_keyflag == 1)
        {
                if (v_smk == 4)
                {
                        p_engine_loadMap (v_lvl34, BANK_5, BANK_16);
                        p_engine_changeLvl (34, 48, 120);
                }
                else if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl71, BANK_5, BANK_16);
                        p_engine_changeLvl (71, 144, 72);
                }
                else if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl72, BANK_5, BANK_16);
                        p_engine_changeLvl (72, 16, 72);
                } 
                else if (v_smk == 224)
                {
                        p_engine_loadTileset (2, 4, 33, feensee_1, BANK_16);
                        p_engine_loadMap (v_lvl90, BANK_5, BANK_16);
                        p_engine_changeLvl (90, 80, 24);
                        p_gui_show_location (lseefeendorf);
                }
                
        }
}

void p_lvl71 () __banked
{
        p_truhe_gold (44, 23, 1);

        if (v_keyflag == 1)
        {
                if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl70, BANK_5, BANK_16);
                        p_engine_changeLvl (70, 16, 72);
                }
        }
}

void p_lvl72 () __banked 
{
        if (v_keyflag == 1)
        {
                if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl70, BANK_5, BANK_16);
                        p_engine_changeLvl (70, 144, 72);
                }
                else if (v_smk == 124)
                {
                        p_engine_loadMap (v_lvl73, BANK_5, BANK_16);
                        p_engine_changeLvl (73, 16, 72);
                }
        }
}

void p_lvl73 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 108)
                {
                        p_engine_loadMap (v_lvl72, BANK_5, BANK_16);
                        p_engine_changeLvl (72, 144, 72);
                }
                else if (v_smk == 10)
                {
                        p_engine_loadMap (v_lvl74, BANK_5, BANK_16);
                        p_engine_changeLvl (74, 96, 120);
                }
                else if (v_smk == 178)
                {
                        p_engine_loadMap (v_lvl76, BANK_5, BANK_16);
                        p_engine_changeLvl (76, 16, 96);
                }
        }
}

void p_lvl74 () __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 226)
                {
                        p_engine_loadMap (v_lvl73, BANK_5, BANK_16);
                        p_engine_changeLvl (73, 96, 25);
                }
                else if (v_smk == 10)
                {
                        p_engine_loadMap (v_lvl75, BANK_5, BANK_16);
                        p_engine_changeLvl (75, 96, 120); 
                }
        }
}

void p_lvl75 () __banked
{
        p_npc_heiler (61);

        if (v_keyflag == 1)
        {
                if (v_smk == 226)
                {
                        p_engine_loadMap (v_lvl74, BANK_5, BANK_16);
                        p_engine_changeLvl (74, 96, 25);
                }	
        }
}

void p_lvl76 () __banked
{
	if (v_keyflag == 1)
	{
		if (v_smk == 162)
		{
			p_engine_loadMap (v_lvl73, BANK_5, BANK_16);
			p_engine_changeLvl (73, 144, 96);
		}
		else if (v_smk == 52)
		{
			p_engine_loadMap (v_lvl77, BANK_5, BANK_16);
			p_engine_changeLvl (77, 16, 40);
		}
	}
}

void p_lvl77 () __banked
{
	p_truhe_gold (188, 24, 2);
	
	if (v_keyflag == 1)
	{
		if (v_smk == 36)
		{
			p_engine_loadMap (v_lvl76, BANK_5, BANK_16);
			p_engine_changeLvl (76, 144, 40);
		}
	}
}

void p_lvl78 () __banked
{
	if (v_smk == 126)
        {
                p_engine_loadMap (v_lvl79, BANK_5, BANK_16);
                p_engine_changeLvl (79, 144, 80);
        }
        else if (v_smk == 8)
        {
                p_engine_loadMap (v_lvl36, BANK_5, BANK_16);
                p_engine_changeLvl (36, 80, 120);
        }
}

void p_lvl79 () __banked
{
        if (v_smk == 142)
        {
                p_engine_loadMap (v_lvl78, BANK_5, BANK_16);
                p_engine_changeLvl (78, 16, 80);
        }
        else if (v_smk == 126)
        {
                p_engine_loadMap (v_lvl15, BANK_5, BANK_16);
                p_engine_changeLvl (15, 144, 80);
        }
}

void p_lvl15 () __banked
{
        p_truhe_heiltrank (43, 25);
        
        if ((v_smk == 187) && (v_keyflag == 1)) p_truhe_geldkatze1 ();

        if (v_smk == 142)
        {
                p_engine_loadMap (v_lvl79, BANK_5, BANK_16);
                p_engine_changeLvl (79, 16, 80);
        }
}

void p_lvl16 () __banked
{
        if (v_smk == 227)
        {
                p_engine_loadMap (v_lvl35, BANK_5, BANK_16);
                p_engine_changeLvl (35, 104, 24);
        }
        else if (v_smk == 70)
        {
                p_engine_loadMap (v_lvl17, BANK_5, BANK_16);
                p_engine_changeLvl (17, 16, 48);
        }
        else if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl84, BANK_5, BANK_16);
                p_engine_changeLvl (84, 144, 72);
        }
}

void p_lvl17 () __banked
{
        if (v_smk == 54)
        {
                p_engine_loadMap (v_lvl16, BANK_5, BANK_16);
                p_engine_changeLvl (16, 144, 48);
        }
        else if (v_smk == 10)
        {
                p_engine_loadMap (v_lvl18, BANK_5, BANK_16);
                p_engine_changeLvl (18, 96, 120);
        }
}

void p_lvl18 () __banked
{
        if (v_smk == 226)
        {
                p_engine_loadMap (v_lvl17, BANK_5, BANK_16);
                p_engine_changeLvl (17, 96, 24);
        }
        else if (v_smk == 126)
        {
                p_engine_loadMap (v_lvl80, BANK_5, BANK_16);
                p_engine_changeLvl (80, 144, 80);
        }
}

void p_lvl80 () __banked
{
        if (v_smk == 142)
        {
                p_engine_loadMap (v_lvl18, BANK_5, BANK_16);
                p_engine_changeLvl (18, 16, 80);
        }
        else if (v_smk == 5)
        {
                p_engine_loadMap (v_lvl81, BANK_5, BANK_16);
                p_engine_changeLvl (81, 56, 120);
        }
}

void p_lvl81 () __banked
{
        p_busch (110, 2);

        if (v_smk == 221)
        {
                p_engine_loadMap (v_lvl80, BANK_5, BANK_16);
                p_engine_changeLvl (80, 56, 24);
        }
        else if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl82, BANK_5, BANK_16);
                p_engine_changeLvl (82, 144, 72);
        }
        else if ((v_smk == 9) && (v_questen [0] > 8))
        {
                p_engine_loadTileset (BANK_2, 4, 38, eichenwald, BANK_16);
                p_engine_loadMap (v_lvl120, BANK_18, BANK_16);
                p_engine_changeLvl (120, 88, 120);
                p_gui_show_location (leichenwald);
        }
}

void p_lvl82 () __banked
{
        if (v_smk == 124)
        {
                p_engine_loadMap (v_lvl81, BANK_5, BANK_16);
                p_engine_changeLvl (81, 16, 72);
        }
        else if (v_smk == 108)
        {
                p_engine_loadMap (v_lvl83, BANK_5, BANK_16);
                p_engine_changeLvl (83, 144, 72);
        }
}

void p_lvl83 () __banked
{
        if (v_smk == 124)
        {
                p_engine_loadMap (v_lvl82, BANK_5, BANK_16);
                p_engine_changeLvl (82, 16, 72);

        }
}

void p_lvl84 () __banked
{
        if (v_smk == 124)
        {
                p_engine_loadMap (v_lvl16, BANK_5, BANK_16);
                p_engine_changeLvl (16, 16, 72);
        }
        else if (v_smk == 11)
        {
                p_engine_loadMap (v_lvl85, BANK_5, BANK_16);
                p_engine_changeLvl (85, 104, 120);
        }
}

void p_lvl85 () __banked
{
        if (v_smk == 227)
        {
                p_engine_loadMap (v_lvl84, BANK_5, BANK_16);
                p_engine_changeLvl (84, 104, 24);
        }
        else if (v_smk == 180)
        {
                p_engine_loadMap (v_lvl86, BANK_5, BANK_16);
                p_engine_changeLvl (86, 144, 104);
        }
}

void p_lvl86 () __banked
{
        if (v_smk == 196)
        {
                p_engine_loadMap (v_lvl85, BANK_5, BANK_16);
                p_engine_changeLvl (85, 16, 104);
        }
        else if (v_smk == 224)
        {
                p_engine_loadMap (v_lvl87, BANK_5, BANK_16);
                p_engine_changeLvl (87, 80, 24);
        }
        else if (v_smk == 108)
        {
                p_engine_loadTileset (BANK_2, 3, 34, gebirgspfad, BANK_16);
                p_gui_show_location (lgebirgspfad);
                p_engine_loadMap (v_lvl168, BANK_18, BANK_16);
                p_engine_changeLvl (168, 144, 72);   
        }
}

void p_lvl87 () __banked
{
        if (v_smk == 8)
        {
                p_engine_loadMap (v_lvl86, BANK_5, BANK_16);
                p_engine_changeLvl (86, 80, 120);        
        }
}

