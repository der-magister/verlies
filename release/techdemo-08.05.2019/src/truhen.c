//   Verlies - ein Adventure/RPG im Retrodesign
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

#pragma bank=7

#include "truhen.h"
#include "player.h"
#include "hud.h"
#include "engine.h"
#include "text.h"
#include "other.h"

/*#include "daten/txt/truhen/truheleertxt1.h"
#include "daten/txt/truhen/dolchtruhe.h"
#include "daten/txt/truhen/erhaltentxt1.h"
#include "daten/txt/truhen/goldvolltxt.h"
#include "daten/txt/truhen/wappenrock.h"
#include "daten/txt/truhen/proviantvolltxt.h"
#include "daten/txt/truhen/portalrunentxt.h"
#include "daten/txt/npcs/npctxt2.h"
#include "daten/txt/truhen/heiltrankvolltxt.h"*/

#include "daten/txt/truhen/truheleer.h"
#include "daten/txt/truhen/schwerttruhe.h"
#include "daten/txt/truhen/kartetruhe.h"
#include "daten/txt/truhen/erhalten.h"
#include "daten/txt/truhen/goldvoll.h"
#include "daten/txt/truhen/proviant.h"

UINT8 v_truhen [40];

///Grafikänderungen für Truhen die geöffnet wurden
void p_truhe_status () BANKED
{
	v_tile [0] = 18;
  
	if (v_lvl == 5)
	{
		if (v_truhen [1] == 1)
		{
			p_engine_set_tile (2, 2, 1);
			v_tile [0] = 19;
			p_engine_set_tile (3, 2, 1);
		}
	}
	else if (v_lvl == 7)
	{
		if (v_truhen [2] == 1)
		{
			p_engine_set_tile (16, 2, 1);
			v_tile [0] = 19;
			p_engine_set_tile (17, 2, 1);
		}
	}
        else if (v_lvl == 9)
        {
                if (v_truhen [3] == 1)
                {
                        p_engine_set_tile (16, 13, 1);
                        v_tile [0] = 19;
                        p_engine_set_tile (17, 13, 1);
                }
        }
        else if (v_lvl == 12)
        {
		if (v_truhen [4] == 1)
		{
			p_engine_set_tile (9, 2, 1);
                        v_tile [0] = 19;
                        p_engine_set_tile (10, 2, 1);
                }
        }
}

///Goldtruhe (XK, YK, Truhennummer, Anzahl des Goldes)
void p_truhe_gold (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) BANKED
{
        if (l_smk == v_smk)
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
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 57;
                                p_engine_set_tile (3, 1, 2);
                                p_engine_set_txt (erhalten);
                                ++v_truhen [l_tnr];
                                SHOW_WIN;
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

///truhe mit Proviant
void p_truhe_proviant (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) BANKED
{
        if (l_smk == v_smk)
        {
                if (v_truhen [l_tnr] == 0)
                {
                        if (v_spr + l_anz - 1 < v_smpr)
                        {
                                if (l_anz == 1)
                                {
					v_tile[0] = 100;
                                        ++v_spr;
                                }
                                else if (l_anz == 2)
                                {
					if (v_spr + l_anz >= v_smpr)
                                        {
						v_tile[0] = 100;
                                                ++v_spr;
                                        } 
                                        else
                                        {
						v_tile[0] = 99;
                                                v_spr += 2;
                                        }
                                }
                                HIDE_WIN;
                                p_engine_set_txt (erhalten);
                                p_engine_set_tile (1, 1, 2);
                                v_tile [0] = 61;
                                p_engine_set_tile (3, 1, 2);
                                ++v_truhen [l_tnr];
                                SHOW_WIN;
                                p_truhe_status ();
                                p_hud_showPR ();
                        }
                        else
                        {
                                p_engine_set_txt (proviant);
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
void p_truhe_schwert (UINT8 l_smk, UINT8 l_tnr) BANKED
{
  if (v_smk == l_smk)
  {
    if (v_truhen [l_tnr] == 0)
    {
      if (v_stp <= 0)
      {
        ++v_stp;
        p_engine_set_txt (schwerttruhe);
        v_truhen [l_tnr] = 1;
        p_truhe_status ();
        p_engine_A ();
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
void p_truhe_karte (UINT8 l_smk, UINT8 l_knr, UINT8 l_tnr) BANKED
{
	if (v_smk == l_smk)
	{
		if (v_truhen [l_tnr] == 0)
		{
			v_knr [l_knr] = 1;
			p_engine_set_txt (kartetruhe);
			v_truhen [l_tnr] = 1;
			p_truhe_status ();
			p_engine_A ();
		}
		else
		{
			p_engine_set_txt (truheleer);
			p_engine_A ();
		}
		p_engine_after_txt ();
		
	}
}

///Rüstungstruhe(XK, YK, Truhennummer)
/*void p_truhe_ruestung (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) BANKED
{
  if (((v_txk == v_sxk ) && (v_tyk == v_syk + 8)) ||
      ((v_txk == v_sxk ) && (v_tyk == v_syk - 8)) ||
      ((v_txk == v_sxk + 8) && (v_tyk == v_syk)) ||
      ((v_txk == v_sxk - 8) && (v_tyk == v_syk)))
  {
    p_hud_hide ();
    
    if (v_truhen [v_tnr] == 0)
    {
      p_engine_set_txt (wappenrock);

      ++v_srs;
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

///Lebenspunkhöhungstruhe
/*void p_truhe_herzerhoehung (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) BANKED
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
      p_engine_set_tile (1, 14);
      v_tile [0] = 84;
      p_engine_set_tile (3, 14);

      ++v_smlp; v_slp = v_smlp;  
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

///Truhe mit Heiltrank (XK, YK, Truhennummer)
/*void p_truhe_heiltrank (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) BANKED
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
/*void p_truhe_key (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) BANKED
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

/*void p_truhe_runen (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) BANKED
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
