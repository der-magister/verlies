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

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "globals.h"

void p_spieler_init () BANKED;
void p_spieler_setSprite (UINT8 l_set) BANKED;
void p_spieler_set_sprite (UINT8 l_xk, UINT8 l_yk) BANKED;
void p_spieler_blink () BANKED;
//extern UINT8 p_spieler_koli () BANKED;
void p_spieler_move  (UINT8 v_ri) BANKED;
void p_spieler_attack () BANKED;

#endif
