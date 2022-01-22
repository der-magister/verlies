//   Verlies - ein Adventure im Retrodesign
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

#ifndef _GEGNER_H_
#define _GEGNER_H_

#include "globals.h"

extern void p_gegner_init (void) __banked;
extern void p_gegner_move_horizontal (void) __banked;
extern void p_gegner_move_vertical (void) __banked;
extern void p_gegner_speer (void) __banked;

/*
extern void p_gegner_kolision () __banked;
extern void p_gegner_stachel () __banked;*/

//Sprite, Anfangstile, XK, YK, Richtung, LP, TP
extern void p_gegner_set (UINT8 l_nr, UINT8 l_tile, UINT8 l_tile2, UINT8 l_xk, UINT8 l_yk, UINT8 l_ri, UINT8 l_lp, UINT8 l_tp) __banked;
extern void p_gegner_move (UINT8 l_nr) __banked;
extern void p_gegner_hide_1 (void) __banked;
extern void p_gegner_hide_2 (void) __banked;
extern void p_gegner_hide_3 (void) __banked;
extern void p_gegner_koli_player (void) __banked;
extern void p_gegner_stop (void) __banked;
extern void p_gegner_update (UINT8 l_nr, UINT8 l_tile, UINT8 l_ri) __banked;
extern INT8 p_gegner_schaden (void) __banked;
                   
#endif
