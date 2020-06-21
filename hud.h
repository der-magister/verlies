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

extern void p_hud_umwandlung (UINT8 v_wert, UINT8 l_xk, UINT8 l_yk,  UINT8 l_layer) __banked;
extern void p_hud_showLP (void) __banked;
extern void p_hud_showTP (void) __banked;
extern void p_hud_showRS (void) __banked;
extern void p_hud_showGO (void) __banked;
extern void p_hud_showHT (void) __banked;
extern void p_hud_showPR (void) __banked;
extern void p_hud_showXYK (void) __banked;
extern void p_hud_showMK (void) __banked;
extern void p_hud_hide (void) __banked;
extern void p_hud_showKey (void) __banked;
extern void p_hud_show (void) __banked;
extern void p_hud_blink (void) __banked;
extern void p_hud_showLvl (void) __banked;
extern void p_hud_showMLP (void) __banked;
extern void p_hud_showMPR (void) __banked;
extern void p_hud_showAT (void) __banked;
extern void p_hud_showMAT (void) __banked;
extern void p_hud_showMHT (void) __banked;
extern void p_gui_showHK (void) __banked;
extern void p_hud_showAD (void) __banked;
extern void p_hud_showMAD (void) __banked;
extern void p_hud_showSpitzhacke (void) __banked;
extern void p_hud_showStatus (void) __banked;
extern void p_hud_init (void) __banked;
extern void p_hud_showStaub (void) __banked;
extern void p_hud_showMStaub (void) __banked;
extern void p_view_sword (void) __banked;
extern void p_gui_show_infoscreen (void) __banked;
extern void p_gui_hide_infoscreen (void) __banked;


#endif
