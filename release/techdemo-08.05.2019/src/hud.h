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

#ifndef _HUD_H_
#define _HUD_H_

#include "globals.h"

void p_hud_umwandlung (UINT8 v_wert, UINT8 l_xk, UINT8 l_yk,  UINT8 l_layer) BANKED;
void p_hud_showLP () BANKED;
void p_hud_showTP () BANKED;
void p_hud_showRS () BANKED;
void p_hud_showGO () BANKED;
void p_hud_showHT () BANKED;
void p_hud_showPR () BANKED;
void p_hud_showXYK () BANKED;
void p_hud_showMK () BANKED;
void p_hud_hide () BANKED;
void p_hud_showKey () BANKED;
void p_hud_show () BANKED;
void p_hud_blink () BANKED;
void p_hud_showLvl () BANKED;
void p_hud_showMLP () BANKED;
void p_hud_showMPR () BANKED;
void p_hud_showMHT () BANKED;
void p_gui_showHK () BANKED;

void p_hud_showStatus () BANKED;
void p_hud_init () BANKED;
void p_hud_showStaub () BANKED;
void p_hud_showMStaub () BANKED;

void p_gui_show_infoscreen () BANKED;
void p_gui_hide_infoscreen () BANKED;

#endif
