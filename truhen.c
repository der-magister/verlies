//   Verlies - ein Adventure/RPG im Retrodesign
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

#include "truhen.h"
#include "player.h"
#include "hud.h"
#include "engine.h"
#include "text.h"
#include "other.h"

#include "daten/txt/truhen/schwerttruhe.h"
#include "daten/txt/truhen/proviant.h"
#include "daten/txt/truhen/magischer_stein.h"
#include "daten/txt/truhen/wappenrock.h"
#include "daten/txt/truhen/kraeuterbeutel.h"
#include "daten/txt/truhen/schaufel.h"
#include "daten/txt/truhen/zauberstaub.h"
#include "daten/txt/truhen/portalrune.h"
#include "daten/txt/truhen/truhentxt.h"

#include "daten/tilesets/tilesets.h"


void p_truhe_init (void) __banked
{
        for (v_i = 0; v_i != 101; ++v_i)
        {
                v_truhen [v_i] = 0;
        }
}

void p_truhe_change (UINT8 l_xk, UINT8 l_yk) __banked
{
	v_tile [0] = 45;
	p_engine_set_tile (l_xk, l_yk, 1);
	++v_tile [0];
	p_engine_set_tile (l_xk + 1, l_yk, 1);
}

///Grafikänderungen für Truhen die geöffnet wurden
void p_truhe_status (void) __banked
{
	v_tile [0] = 18;
	if (v_lvl == 1)
	{
		if (v_truhen [0] == 1)
		{
			p_truhe_change (8, 12);
		}
	}
	else if (v_lvl == 5)
	{
		if (v_truhen [1] == 1)
		{
			p_truhe_change (1, 1);
		}
	}
	else if (v_lvl == 7)
	{
		if (v_truhen [2] == 1)
		{
                        p_truhe_change (15, 1);
		}
	}
        else if (v_lvl == 9)
        {
                if (v_truhen [3] == 1)
                {
                        p_truhe_change (15, 12);
                }
        }
        else if (v_lvl == 12)
        {
		if (v_truhen [4] == 1)
		{
			p_truhe_change (8, 1);
                }
        }
        else if (v_lvl == 23)
        {
		if (v_truhen [5] == 1) p_truhe_change (10, 2);
		if (v_truhen [6] == 1) p_truhe_change (8, 2);
	}
        else if (v_lvl == 25)
        {
                if (v_truhen [7] == 1) p_truhe_change (14, 1);
        }
        else if (v_lvl == 28)
        {
                if (v_truhen [8] == 1) p_truhe_change (15, 12);
        }
        else if (v_lvl == 31)
        {
                if (v_truhen [9] == 1) p_truhe_change (8, 12);
                if (v_truhen [10] == 1) p_truhe_change (1, 7);
        }
        else if (v_lvl == 41) 
        {
                if (v_truhen [11] == 1) p_truhe_change (8, 12);
        }
        else if (v_lvl == 44)
        {
                if (v_truhen [12] == 1) p_truhe_change (8, 1);
        }
        else if (v_lvl == 50)
        {
                if (v_truhen [13] == 1) p_truhe_change (6, 1);
                if (v_truhen [14] == 1) p_truhe_change (9, 1);
        }
        else if (v_lvl == 53)
        {
                if (v_truhen [15] == 1) p_truhe_change (6, 1);
                if (v_truhen [16] == 1) p_truhe_change (15, 7);
        }
        else if (v_lvl == 39)
        {
                if (v_truhen [22] == 1) p_truhe_change (8, 5);
                {
                        
                }
        }
        else if (v_lvl == 45)
        {
                if (v_truhen [17] == 1) p_truhe_change (8, 12);
        }
        else if (v_lvl == 60)
        {
                if (v_truhen [18] == 1) p_truhe_change (8, 12);
                if (v_truhen [19] == 1) p_truhe_change (1, 1);
                if (v_truhen [20] == 1) p_truhe_change (15, 1);
                if (v_truhen [21] == 1) p_truhe_change (8, 5);
        }
        else if (v_lvl == 71)
        {
                if (v_truhen [23] == 1) p_truhe_change (8, 1);
        }
        else if (v_lvl == 77)
        {
		if (v_truhen [24] == 1) p_truhe_change (8, 12);
	}
        else if (v_lvl == 15)
        {
                if (v_truhen [25] == 1) p_truhe_change (7, 1);
                if (v_truhen [26] == 1) p_truhe_change (7, 12);
        }
        else if (v_lvl == 90)
        {
                if (v_truhen [27] == 1) p_truhe_change (1, 1);
        }
        else if (v_lvl == 104)
        {
                if (v_truhen [28] == 1) p_truhe_change (15, 1);
        }
        else if (v_lvl == 116)
        {
                if (v_truhen [29] == 1) p_truhe_change (11, 5);
        }
        else if (v_lvl == 99)
        {
                if (v_truhen [30] == 1) p_truhe_change (1, 1);
        }
        else if (v_lvl == 110)
        {
                if (v_truhen [31] == 1) p_truhe_change (7, 12);
        }
        else if (v_lvl == 117)
        {
                if (v_truhen [32] == 1) p_truhe_change (3, 12);
                if (v_truhen [33] == 1) p_truhe_change (8, 12);
                if (v_truhen [34] == 1) p_truhe_change (13, 12);

        }
        else if (v_lvl == 107) { if (v_truhen [35] == 1) p_truhe_change (1, 12); }
        else if (v_lvl == 122) { if (v_truhen [36] == 1) p_truhe_change (8, 2); }
        else if (v_lvl == 123) { if (v_truhen [37] == 1) p_truhe_change (14, 2); }
        else if (v_lvl == 126) 
        { 
                if (v_truhen [38] == 1) { p_truhe_change (14, 12); }
                if (v_truhen [42] == 1) { p_truhe_change (8, 4); }
        }
        else if (v_lvl == 128) { if (v_truhen [39] == 1) p_truhe_change (2, 2); }
        else if (v_lvl == 133) { if (v_truhen [40] == 1) p_truhe_change (4, 2); }
        else if (v_lvl == 143) { if (v_truhen [41] == 1) p_truhe_change (8, 7); }
        else if (v_lvl == 137) { if (v_truhen [43] == 1) p_truhe_change (2, 2); }
        else if (v_lvl == 147) { if (v_truhen [44] == 1) p_truhe_change (15, 12); }
        else if (v_lvl == 149) { if (v_truhen [45] == 1) p_truhe_change (8, 12); }
        else if (v_lvl == 154) { if (v_truhen [46] == 1) p_truhe_change (1, 1); }
        else if (v_lvl == 159) { if (v_truhen [47] == 1) p_truhe_change (15, 1); }
        else if (v_lvl == 162) { if (v_truhen [48] == 1) p_truhe_change (8, 1); }
	else if (v_lvl == 166) 
	{ 
		if (v_truhen [49] == 1) { p_truhe_change (14, 1); }
		if (v_truhen [50] == 1) { p_truhe_change (14, 12); }
	}
            else if (v_lvl == 169) { if (v_truhen [51] == 1) p_truhe_change (15, 12); }
            else if (v_lvl == 171) { if (v_truhen [52] == 1) p_truhe_change (5, 1); }
            else if (v_lvl == 174) { if (v_truhen [53] == 1) p_truhe_change (1, 1); }
            else if (v_lvl == 168) { if (v_truhen [54] == 1) p_truhe_change (8, 1); }
            else if (v_lvl == 185) { if (v_truhen [55] == 1) p_truhe_change (8, 12); }
            else if (v_lvl == 191) { if (v_truhen [56] == 1) p_truhe_change (15, 1); }
            else if (v_lvl == 195) { if (v_truhen [57] == 1) p_truhe_change (1, 12); }
            else if (v_lvl == 197) { if (v_truhen [58] == 1) p_truhe_change (3, 1); }
            else if (v_lvl == 202) { if (v_truhen [59] == 1) p_truhe_change (1, 12); }
            else if (v_lvl == 192) { if (v_truhen [60] == 1) p_truhe_change (15, 12); }
            else if (v_lvl == 201) { if (v_truhen [61] == 1) p_truhe_change (7, 12); }
            else if (v_lvl == 206) { if (v_truhen [62] == 1) p_truhe_change (1, 12); }
            else if (v_lvl == 208) { if (v_truhen [63] == 1) p_truhe_change (14, 11); }
            else if (v_lvl == 213) { if (v_truhen [64] == 1) p_truhe_change (13, 12); }
            else if (v_lvl == 216) { if (v_truhen [65] == 1) p_truhe_change (1, 12); }
            else if (v_lvl == 221) { if (v_truhen [66] == 1) p_truhe_change (15, 12); }
            else if (v_lvl == 222) { if (v_truhen [67] == 1) p_truhe_change (2, 12); }
            else if (v_lvl == 224) { 
                if (v_truhen [68] == 1) p_truhe_change (3, 12); 
                if (v_truhen [69] == 1) p_truhe_change (15, 12); 
                if (v_truhen [70] == 1) p_truhe_change (1, 1); 
                if (v_truhen [75] == 1) p_truhe_change (13, 1);
        }
        else if (v_lvl == 225) { 
                if (v_truhen [71] == 1) p_truhe_change (1, 1);
                if (v_truhen [72] == 1) p_truhe_change (15, 1);
        }
        else if (v_lvl == 226) {
                if (v_truhen [73] == 1) p_truhe_change (4, 12);
                if (v_truhen [74] == 1) p_truhe_change (11, 12);
        }
        else if (v_lvl == 235) {
                if (v_truhen [95] == 1) p_truhe_change (13, 1);
                if (v_truhen [76] == 1) p_truhe_change (6, 12);
        }
        else if (v_lvl == 236) { if (v_truhen [77] == 1) p_truhe_change (8, 12); }
        else if (v_lvl == 239) { if (v_truhen [78] == 1) p_truhe_change (15, 1); }
        else if (v_lvl == 248) { 
                if (v_truhen [79] == 1) p_truhe_change (15, 12);
                if (v_truhen [80] == 1) p_truhe_change (1, 1);
        }
        else if (v_lvl == 254) { if (v_truhen [81] == 1) p_truhe_change (15, 12); }
        else if (v_lvl == 260) { if (v_truhen [82] == 1) p_truhe_change (15, 1); }
        else if (v_lvl == 262) { if (v_truhen [83] == 1) p_truhe_change (1, 12); }
        else if (v_lvl == 264) { if (v_truhen [84] == 1) p_truhe_change (2, 5); }
        else if (v_lvl == 267) { if (v_truhen [85] == 1) p_truhe_change (7, 6); }
        else if (v_lvl == 277) { 
                if (v_truhen [86] == 1) p_truhe_change (15, 1);
                if (v_truhen [87] == 1) p_truhe_change (1, 12); 
        }
        else if (v_lvl == 287) { 
            if (v_truhen [88] == 1) p_truhe_change (1, 1);
            if (v_truhen [89] == 1) p_truhe_change (15, 1);
            if (v_truhen [90] == 1) p_truhe_change (8, 12);
        }
        else if (v_lvl == 283) { if (v_truhen [91] == 1) p_truhe_change (1, 1); }
        else if (v_lvl == 292) { if (v_truhen [92] == 1) p_truhe_change (2, 12); }
        else if (v_lvl == 294) { 
            if (v_truhen [93] == 1) p_truhe_change (2, 1);
            if (v_truhen [94] == 1) p_truhe_change (14, 12); 
        }
}

///Goldtruhe (XK, YK, Truhennummer, Anzahl des Goldes)
void p_truhe_gold (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) __banked
{
        if ((l_smk == v_smk) && (v_keyflag == 1))
        {
                if (v_truhen [l_tnr] == 0)
                {
                        if (v_sgo + l_anz - 1 < v_smgo)
                        {
                                if (l_anz == 1)
                                {
					                   v_tile[0] = 100;
                                        ++v_sgo;
                                }
                                else if (l_anz == 2)
                                {
					if (v_sgo + l_anz >= v_smgo)
                                        {
						v_tile[0] = 100;
                                                ++v_sgo;
                                        } 
                                        else
                                        {
						v_tile[0] = 99;
                                                v_sgo += 2;
                                        }
                                }
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 59;
                                p_engine_set_tile (3, 1, 2);
                                SHOW_WIN;
                                ++v_truhen [l_tnr];
                                p_truhe_status ();
                        }
                        else
                        {
                                p_engine_set_txt (goldvoll);
                        }
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_truhe_proviant_zusatz (UINT8 l_nr) __banked
{
        HIDE_WIN;
        p_engine_set_txt (erhalten);
        p_engine_set_tile (1, 1, 2);
        v_tile [0] = 65;
        p_engine_set_tile (3, 1, 2);
        SHOW_WIN;
        v_truhen [l_nr] = 1;
        p_truhe_status ();
        p_hud_showPR ();
}

///truhe mit Proviant
void p_truhe_proviant (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) __banked
{
        if ((l_smk == v_smk) && (v_keyflag == 1))
        {
                if (v_truhen [l_tnr] == 0)
                {
                        if (l_anz == 1)
                        {
                                if (v_spr < v_smpr)
                                {
					v_tile [0] = 100;
                                        ++v_spr;
                                        p_truhe_proviant_zusatz (l_tnr);
                                }
                                else
                                {
                                        p_engine_set_txt (proviant);
                                }
                        }
                        else if (l_anz == 2)
                        {
				if (v_spr + l_anz <= v_smpr)
                                {
					v_tile [0] = 99;
                                        v_spr += 2;
                                        p_truhe_proviant_zusatz (l_tnr);
                                } 
                                else if (v_spr < v_smpr)
                                {
				        v_tile [0] = 100;
                                        ++v_spr;
                                        p_truhe_proviant_zusatz (l_tnr);
                                }
                                else
                                {
                                        p_engine_set_txt (proviant);
                                }
                        }
                }
                else if (v_truhen [l_tnr] == 1)
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

///Truhe mit Schwert (Spielerkartekoordinate, Truhennummer)
void p_truhe_schwert (UINT8 l_smk, UINT8 l_tnr) __banked
{
  if ((v_smk == l_smk) && (v_keyflag == 1))
  {
    if (v_truhen [l_tnr] == 0)
    {
      if (v_stp == 0)
      {
        ++v_stp;
        p_engine_set_txt (schwerttruhe);
        ++v_truhen [l_tnr];
        p_truhe_status ();
        p_engine_A ();
        p_view_sword ();
      }
    }
    else 
    {
       p_engine_set_txt (truheleer);
       p_engine_A ();
    }
    p_engine_after_txt ();
  }
}

///Truhe mit Karte (Position der Truhe, Kartennummer, Truhennummer)
void p_truhe_karte (UINT8 l_smk, UINT8 l_knr, UINT8 l_tnr) __banked
{
	if ((v_smk == l_smk) && (v_keyflag == 1))
	{
		if (v_truhen [l_tnr] == 0)
		{
			v_knr [l_knr] = 1;
			p_engine_set_txt (kartetruhe);
			v_truhen [l_tnr] = 1;
                        p_truhe_status ();
		}
		else
		{
			p_engine_set_txt (truheleer);
		}
                p_engine_A ();
		p_engine_after_txt ();
        }
}

///Truhe mit Ausdauertrank (Position der Truhe, Truhennummer)
void p_truhe_ausdauertrank (UINT8 l_smk, UINT8 v_tnr) __banked
{
        if ((l_smk == v_smk) && (v_keyflag == 1))
        {
                if (v_truhen [v_tnr] == 0)
                {
                        if (v_sat < v_smat)
                        {
                                v_tile[0] = 100;
                                ++v_sat;
                                ++v_truhen [v_tnr];
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 61;
                                p_engine_set_tile (3, 1, 2);
                                SHOW_WIN;
                                p_truhe_status ();
                        }
                        else
                        {
                                p_engine_set_txt (ausdauertrank);
                        }
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_truhe_heiltrank (UINT8 l_smk, UINT8 v_tnr) __banked
{
        if ((l_smk == v_smk) && (v_keyflag == 1))
        {
                if (v_truhen [v_tnr] == 0)
                {
                        if (v_sht < v_smht)
                        {
                                v_tile [0] = 100;
                                //HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 62;
                                p_engine_set_tile (3, 1, 2);
                                //SHOW_WIN;
                                ++v_sht;
                                ++v_truhen [v_tnr];
                                 p_truhe_status ();
                        }
                        else
                        {
                                p_engine_set_txt (heiltrank);
                        }
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_truhe_kraut (UINT8 l_smk, UINT8 v_tnr) __banked
{
        if ((l_smk == v_smk) && (v_keyflag == 1))
        {
                if (v_truhen [v_tnr] == 0)
                {
                        if (v_shk < v_smhk)
                        {
                                v_tile[0] = 100;
                                ++v_shk;
                                ++v_truhen [v_tnr];
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 60;
                                p_engine_set_tile (3, 1, 2);
                                SHOW_WIN;
                                p_truhe_status ();
                        }
                        else
                        {
                                p_engine_set_txt (heiltrank);
                        }
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

///Truhe mit Brotbuchse 1
void p_truhe_brotfach_1 (void) __banked
{
        if (v_truhen [9] == 0)
        {
                p_engine_set_txt (brotfach);
                ++v_truhen [9];
                ++v_smpr;
                p_truhe_status (); 
        }
        else
        {
	        p_engine_set_txt (truheleer);
	}
        p_engine_A ();
        p_engine_after_txt (); 
}

void p_truhe_brotfach_2 (void) __banked
{
        if (v_truhen [42] == 0)
        {
                p_engine_set_txt (brotfach);
                ++v_truhen [42];
                ++v_smpr;
                p_truhe_status (); 
        }
        else
        {
                p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt (); 
}

void p_truhe_geldkatze1 (void) __banked
{
        if (v_truhen [26] == 0) {
                p_engine_set_txt (geldfach);
                v_truhen [26] = 1;
                v_smgo = 50;
                p_truhe_status ();
        }
        else {
	        p_engine_set_txt (truheleer);
	}
        p_engine_A ();
        p_engine_after_txt ();
}

void p_truhe_geldkatze2 (void) __banked
{
        if (v_truhen [53] == 0) {
                p_engine_set_txt (geldfach);
                v_truhen [53] = 1;
                v_smgo = 75;
                p_truhe_status ();
        }
        else {
                p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt ();
}

void p_truhe_kraeuterbeutel (void) __banked
{
        if (v_truhen [61] == 0)
        {
                p_engine_set_txt (kraeuterbeutel);
                ++v_truhen [61];
                v_smhk = 4;
                p_truhe_status ();
        }
        else
        {
                p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt ();
}

void p_truhe_magischer_stein (void) __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 119)
                {
                        if (v_truhen [29] == 0)
                        {
                                p_engine_set_txt (mstone);
                                ++v_truhen [29];
                                v_questen [0] = 6;
                                p_truhe_status ();
                        }
                        else
                        {
	                        p_engine_set_txt (truheleer);
	                }
                        p_engine_A ();
                        p_engine_after_txt ();
                }
        }
}

void p_truhe_wappenrock (void) __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 187)
                {
                        if (v_truhen [31] == 0)
                        {
                                p_engine_set_txt (wappenrock);
                                ++v_truhen [31];
                                ++v_srs;
                                p_truhe_status ();
                        }
                        else
                        {
	                        p_engine_set_txt (truheleer);
	                }
                        p_engine_A ();
                        p_engine_after_txt ();
                }
        }
}


///Lebenspunkhöhungstruhe
void p_truhe_lebenskristall (UINT8 l_mk, UINT8 l_nr) __banked
{
        if (l_mk == v_smk)
        {
                if (v_truhen [l_nr] == 0)
                {
                        p_engine_set_txt (erhalten);

                        v_tile[0] = 100;  
                        p_engine_set_tile (1, 1, 2);
                        v_tile [0] = 69;
                        p_engine_set_tile (3, 1, 2);

                        ++v_smlp; v_slp = v_smlp;  
                        ++v_truhen [l_nr];
                        p_truhe_status ();
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
                p_hud_showLP ();
        }
}

void p_truhe_aspekt_wald (void) __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 194)
                {
                        if (v_truhen [50] == 0)
                        {
                                p_engine_set_txt (aspektwald);
                                ++v_truhen [50];
                                v_questen [0] = 12;
                                p_truhe_status ();
                        }
                        else
                        {
	                        p_engine_set_txt (truheleer);
	                }
                        p_engine_A ();
                        p_engine_after_txt ();
                }
        }
}

///Truhe mit Heiltrank (XK, YK, Truhennummer)
/*void p_truhe_heiltrank (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) __banked
{
  if (((v_txk == v_sxk ) && (v_tyk == v_syk + 8)) ||
      ((v_txk == v_sxk ) && (v_tyk == v_syk - 8)) ||
      ((v_txk == v_sxk + 8) && (v_tyk == v_syk)) ||
      ((v_txk == v_sxk - 8) && (v_tyk == v_syk)))
  {
    p_hud_hide ();

    if (v_truhen [v_tnr] == 0)
    {
      if (v_sht < v_smht)
      {
        p_engine_set_txt (erhaltentxt1);

        v_tile[0] = 46;  
        p_engine_set_tile (1, 14);
        v_tile [0] = 70;
        p_engine_set_tile (3, 14);

        ++v_sht;
        ++v_truhen [v_tnr];
        p_truhe_status ();
      }
      else
      {
        p_engine_set_txt (heiltrankvolltxt);
      }
    }
    else
    {
      p_engine_set_txt (truheleertxt1);
    }
    p_engine_after_txt ();
  }
}*/

///Truhe mit Schlüssel (XK, YK, Truhennummer)
/*void p_truhe_key (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) __banked
{
  if (((v_txk == v_sxk ) && (v_tyk == v_syk + 8)) ||
      ((v_txk == v_sxk ) && (v_tyk == v_syk - 8)) ||
      ((v_txk == v_sxk + 8) && (v_tyk == v_syk)) ||
      ((v_txk == v_sxk - 8) && (v_tyk == v_syk)))
  {
    p_hud_hide ();
    
    if (v_truhen [v_tnr] == 0)
    {
      p_engine_set_txt (erhaltentxt1);
        
      v_tile[0] = 0x2E;
      ++v_ske;
        
      p_engine_set_tile (1, 14);
      v_tile [0] = 86;
      p_engine_set_tile (3, 14);
      ++v_truhen [v_tnr];
      p_truhe_status ();
    }
    else
    {
       p_engine_set_txt (truheleertxt1);
    }
    p_engine_after_txt ();
  }
}*/

/*void p_truhe_runen (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) __banked
{
  if (((v_txk == v_sxk ) && (v_tyk == v_syk + 8)) ||
      ((v_txk == v_sxk ) && (v_tyk == v_syk - 8)) ||
      ((v_txk == v_sxk + 8) && (v_tyk == v_syk)) ||
      ((v_txk == v_sxk - 8) && (v_tyk == v_syk)))
  {
    p_hud_hide ();

    if (v_truhen [v_tnr] == 0)
    {
      p_engine_set_txt (portalrunentxt);
      v_truhen [v_tnr] = 1;
      v_portalrune = TRUE;
      p_truhe_status ();
    }
    else 
    { 
      p_engine_set_txt (truheleertxt1); 
    }
    
    p_engine_after_txt ();
  }
}*/

void p_truhe_schluessel (UINT8 l_mk, UINT8 l_nr) __banked
{
        if ((v_keyflag == 1) && (v_smk == l_mk))
        {
                if (v_truhen [l_nr] == 0)
                {
                        p_engine_set_txt (tschluessel);
                        v_truhen [l_nr] = v_truhen [l_nr] + 1;
                        ++v_ske;
                        p_truhe_status (); 
                }
                else
                {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt (); 
        }
}

void p_truhe_schaufel (void) __banked
{
    if ((v_keyflag == 1) && (v_smk == 181)) {
        if (v_truhen [65] == 0) {
            p_engine_set_txt (schaufel);
            ++v_truhen [65];
            p_truhe_status ();
            v_schaufel = TRUE;
            
        }
        else {
            p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt ();
    }
}

void p_truhe_erz (UINT8 l_mk, UINT8 l_tnr) __banked
{
        if ((v_keyflag == 1) && (v_smk == l_mk)) {
                if (v_truhen [l_tnr] == 0) {
                p_engine_set_txt (erz);
                ++v_truhen [l_tnr];
                p_truhe_status ();
                ++v_serz;
            
        }
        else {
            p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt ();
    }               
}

void p_truhe_stoff (UINT8 l_mk, UINT8 l_tnr) __banked
{
        if ((v_keyflag == 1) && (v_smk == l_mk)) {      
                if (v_truhen [l_tnr] == 0) {
                        p_engine_set_txt (stoff);
                        ++v_truhen [l_tnr];
                        p_truhe_status ();
                        ++v_stoff;
        }
        else {
                p_engine_set_txt (truheleer);
        }
                p_engine_A ();
                p_engine_after_txt ();
        }
}

void p_truhe_zauberstaub (UINT8 l_mk, UINT8 l_tnr) __banked
{
        if ((v_keyflag == 1) && (v_smk == l_mk)) {
                if (v_truhen [l_tnr] == 0) {
                        if (v_sstaub < v_smstaub ) { 
                                v_tile[0] = 100;
                                ++v_sstaub;
                                ++v_truhen [l_tnr];
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 63;
                                p_engine_set_tile (3, 1, 2);
                                SHOW_WIN;
                                p_truhe_status ();
                                p_hud_showStaub ();
                   }
                   else {
                        p_engine_set_txt (zauberstaub);
                   }  
            
                }
                else {
                        p_engine_set_txt (truheleer);
                }
                p_engine_A ();
                p_engine_after_txt ();
        }               
}

void p_truhe_portalrune (UINT8 l_mk, UINT8 l_tnr) __banked
{
    if ((v_keyflag == 1) && (v_smk == l_mk)) {
                if (v_truhen [l_tnr] == 0) {
                p_engine_set_txt (portalrune);
                ++v_truhen [l_tnr];
                p_truhe_status ();
                v_portalrune = TRUE;
            
        }
        else {
                p_engine_set_txt (truheleer);
        }
        p_engine_A ();
        p_engine_after_txt ();
    }                  
}

void p_truhe_aspekt_berg (void) __banked
{
        if (v_keyflag == 1)
        {
                if (v_smk == 188)
                {
                        if (v_truhen [77] == 0)
                        {
                                p_engine_set_txt (aspektberg);
                                ++v_truhen [77];
                                v_questen [0] = 16;
                                p_truhe_status ();
                        }
                        else
                        {
                            p_engine_set_txt (truheleer);
                    }
                        p_engine_A ();
                        p_engine_after_txt ();
                }
        }
}
