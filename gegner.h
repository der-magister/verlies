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

#ifndef _GEGNER_H_
#define _GEGNER_H_

#include "globals.h"

extern void p_gegner_init (void) BANKED;
extern void p_gegner_move_horizontal (void) BANKED;
extern void p_gegner_move_vertical (void) BANKED;
extern void p_gegner_speer (void) BANKED;

/*
extern void p_gegner_kolision () BANKED;
extern void p_gegner_stachel () BANKED;*/

//Sprite, Anfangstile, XK, YK, Richtung, LP, TP
extern void p_gegner_set (UINT8 l_nr, UINT8 l_tile, UINT8 l_tile2, UINT8 l_xk, UINT8 l_yk, UINT8 l_ri, UINT8 l_lp, UINT8 l_tp) BANKED;
extern void p_gegner_move (UINT8 l_nr) BANKED;
extern void p_gegner_hide_1 (void) BANKED;
extern void p_gegner_hide_2 (void) BANKED;
extern void p_gegner_hide_3 (void) BANKED;
extern void p_gegner_koli_player (void) BANKED;
extern void p_gegner_stop (void) BANKED;
extern void p_gegner_update (UINT8 l_nr, UINT8 l_tile, UINT8 l_ri) BANKED;
extern INT8 p_gegner_schaden (void) __banked;
                   
#endif
