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
//   Kontakt: projekte@kabelmail.net

#ifndef _NPC_H_
#define _NPC_H_

#include "globals.h"

extern void p_npc_heiler (UINT8 l_mk) BANKED;
extern void p_fiona (void) BANKED;
extern void p_max (void) BANKED;
extern void p_provianthaendler (void) BANKED;
extern void p_ausdauerhandlerin (void) BANKED;
extern void p_heiltrankhaendlerin (void) BANKED;
extern void p_zauberstaubhaendler (void) BANKED;
extern void p_kraeuterhandler (void) __banked;
extern void p_kraeuterhaendler (void) __banked;
extern void p_vanyra (void) BANKED;
extern void p_waechter_zwergenheim (void) BANKED;
extern void p_zylra (void) BANKED;
extern void p_hueterin (void) BANKED;
extern void p_xaver_rotgebirge (void) BANKED;
extern void p_xaver_tempel (void) BANKED;

#endif

