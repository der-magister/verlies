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

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "globals.h"

extern void p_spieler_init (void) __banked;
extern void p_spieler_setSprite (UINT8 l_set) __banked;
extern void p_spieler_set_sprite (void) __banked;
extern void p_spieler_blink (void) __banked;
extern void p_spieler_blink_off (void) __banked;
//extern void p_spieler_move  (UINT8 v_ri) __banked;
extern void p_spieler_attack (void) __banked;
extern void p_spieler_hideAttack (void) __banked;
extern void p_spieler_inc_ausdauer (void) __banked;
extern void p_spieler_move_north (void) __banked;
extern void p_spieler_move_south (void) __banked;
extern void p_spieler_move_west (void) __banked;
extern void p_spieler_move_east (void) __banked;

void p_spieler_after_move (void) __banked;

#endif
