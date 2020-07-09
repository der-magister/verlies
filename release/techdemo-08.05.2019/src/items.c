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

#pragma bank=12

#include "items.h"
#include "hud.h"
#include "engine.h"

UINT8 v_selectItem;

/*void p_drawSelectItem () BANKED
{
  if (v_selectItem == 0) { v_tile [0] = 0; }
  if (v_selectItem == 1) { v_tile [0] = 70; }
  if (v_selectItem == 2) { v_tile [0] = 94; }
  if (v_selectItem == 3) { v_tile [0] = 105; }

  p_engine_set_tile (9, 15);
}*/


///Itemauswahl
/*void p_changeItem () BANKED
{
  if (v_selectItem == 0)
  {
    if (v_sht > 0) v_selectItem = 1;
    else if (v_portalrune == 1) v_selectItem = 2;
  }
  else if (v_selectItem == 1)
  {
    if (v_portalrune == 1) v_selectItem = 2;
  }
  else if (v_selectItem == 2)
  {
    if (v_spitzhacke == 1) v_selectItem = 3;
    else if (v_sht > 0 ) v_selectItem = 1;
    else if (v_portalrune == 1) v_selectItem = 2;
  }
  p_drawSelectItem ();
  delay (120);
}*/

/*void p_useSelectItem () BANKED
{
  if (v_selectItem == 1) { p_heiltrank (); }
}*/

///Anwendung des Proviant (automatisch)
void p_proviant () BANKED
{
  if (v_ssc >= 250)
  {
    if (v_spr > 0)
    {
      --v_spr; v_ssc = 0;
    }
    else
    {
      --v_slp; v_ssc = 125;
      p_hud_showLP ();
    }
    p_hud_showPR ();
  }
}

///Heiltrank, füllt 3 Lebenspunkte auf
/*void p_heiltrank () BANKED
{
  if ((v_sht > 0) && (v_slp < v_smlp))
  {
    --v_sht;
    
    if (v_slp + 3 <= v_smlp)
    {
        v_slp = v_slp + 3;
    }
    else 
    {
        v_slp = v_smlp;
    }
    set_sprite_tile (0, 53);
    delay (1000);
    set_sprite_tile (0, 0);
    p_hud_show ();
  }
}*/
