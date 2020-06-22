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
//   Kontakt: heiko.wolf.mail@uni-leipzig.de

//#pragma bank=7

#include "truhen.h"
#include "player.h"
#include "hud.h"
#include "engine.h"
#include "text.h"
#include "other.h"

#include "daten/txt/truhen/truheleer.h"
#include "daten/txt/truhen/schwerttruhe.h"
#include "daten/txt/truhen/kartetruhe.h"
#include "daten/txt/truhen/erhalten.h"
#include "daten/txt/truhen/goldvoll.h"
#include "daten/txt/truhen/proviant.h"
#include "daten/txt/truhen/ausdauertrank.h"
#include "daten/txt/truhen/heiltrank.h"
#include "daten/txt/truhen/brotbuechse-1.h"
#include "daten/txt/truhen/brotbuechse-2.h"
#include "daten/txt/truhen/schluessel.h"
#include "daten/txt/truhen/geldkatze1.h"
#include "daten/txt/truhen/magischer_stein.h"
#include "daten/txt/truhen/wappenrock.h"

void p_truhe_change (UINT8 l_xk, UINT8 l_yk) __banked
{
	v_tile [0] = 45;
	p_engine_set_tile (l_xk, l_yk, 1);
	++v_tile [0];
	p_engine_set_tile (l_xk + 1, l_yk, 1);
}

///Grafikänderungen für Truhen die geöffnet wurden
void p_truhe_status () __banked
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
                if (v_truhen [38] == 1) p_truhe_change (14, 12);
                if (v_truhen [42] == 1) p_truhe_change (8, 4);
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
        ++v_truhen [l_nr];
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
                                
                                if (v_spr + l_anz <= v_smpr)
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
				if (v_spr + l_anz > v_smpr)
                                {
					v_tile [0] = 100;
                                        ++v_spr;
                                        p_truhe_proviant_zusatz (l_tnr);
                                } 
                                else if (v_spr + l_anz - 1 <= v_smpr)
                                {
				        v_tile [0] = 99;
                                        v_spr += 2;
                                        p_truhe_proviant_zusatz (l_tnr);
                                }
                                else
                                {
                                        p_engine_set_txt (proviant);
                                }
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

///Truhe mit Schwert (Spielerkartekoordinate, Truhennummer)
void p_truhe_schwert (UINT8 l_smk, UINT8 l_tnr) __banked
{
  if ((v_smk == l_smk) && (v_keyflag == 1))
  {
    if (v_truhen [l_tnr] == 0)
    {
      if (v_stp <= 0)
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
			++v_knr [l_knr];
			p_engine_set_txt (kartetruhe);
			++v_truhen [l_tnr];
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
                                v_tile[0] = 100;
                                ++v_sht;
                                ++v_truhen [v_tnr];
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 62;
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
void p_truhe_brotbuechse_1 () __banked
{
        if (v_truhen [9] == 0)
        {
                p_engine_set_txt (brotbuechse_1);
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

void p_truhe_brotbuechse_2 () __banked
{
        if (v_truhen [42] == 0)
        {
                p_engine_set_txt (brotbuechse_2);
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

void p_truhe_geldkatze1 () __banked
{
        if (v_truhen [26] == 0)
        {
                p_engine_set_txt (geldkatze1);
                ++v_truhen [26];
                v_smgo = 30;
                p_truhe_status ();
        }
        else
        {
	        p_engine_set_txt (truheleer);
	}
        p_engine_A ();
        p_engine_after_txt ();
}

void p_truhe_magischer_stein () __banked
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

void p_truhe_wappenrock () __banked
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
