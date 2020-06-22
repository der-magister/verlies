//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2020 Heiko Wolf
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
//   Kontakt: heiko.wolf.mail@gmail.com

#ifndef _NPC_H_
#define _NPC_H_

#include "globals.h"

extern void p_npc_heiler (UINT8 l_mk) __banked;
extern void p_fiona () __banked;
extern void p_max () __banked;
extern void p_provianthaendler () __banked;
extern void p_ausdauerhandlerin () __banked;
extern void p_heiltrankhaendlerin () __banked;
extern void p_zauberstaubhaendler () __banked;

/*extern void p_npc_helfer (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_ntyp, UINT8 v_nqnr) __banked;
extern void p_npc_questgeber1 (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_qnr) __banked;
extern void p_npc_tausch_proviant (UINT8 nxk, UINT8 nyk) __banked;
extern void p_nicht_genug_gold () __banked;*/

#endif

