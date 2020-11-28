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

extern void p_hud_umwandlung (UINT8 v_wert, UINT8 l_xk, UINT8 l_yk,  UINT8 l_layer) BANKED;
extern void p_hud_showLP (void) BANKED;
extern void p_hud_showTP (void) BANKED;
extern void p_hud_showRS (void) BANKED;
extern void p_hud_showGO (void) BANKED;
extern void p_hud_showHT (void) BANKED;
extern void p_hud_showPR (void) BANKED;
extern void p_hud_showXYK (void) BANKED;
extern void p_hud_showMK (void) BANKED;
extern void p_hud_hide (void) BANKED;
extern void p_hud_showKey (void) BANKED;
extern void p_hud_show (void) BANKED;
extern void p_hud_blink (void) BANKED;
extern void p_hud_showLvl (void) BANKED;
extern void p_hud_showMLP (void) BANKED;
extern void p_hud_showMPR (void) BANKED;
extern void p_hud_showAT (void) BANKED;
extern void p_hud_showMAT (void) BANKED;
extern void p_hud_showMHT (void) BANKED;
extern void p_gui_showHK (void) BANKED;
extern void p_hud_showAD (void) BANKED;
extern void p_hud_showMAD (void) BANKED;
extern void p_hud_showSpitzhacke (void) BANKED;
extern void p_hud_showStatus (void) BANKED;
extern void p_hud_init (void) BANKED;
extern void p_hud_showStaub (void) BANKED;
extern void p_hud_showMStaub (void) BANKED;
extern void p_view_sword (void) BANKED;
extern void p_gui_show_infoscreen (void) BANKED;
extern void p_gui_hide_infoscreen (void) BANKED;
extern void p_hud_showSchaufel (void) BANKED;


#endif

