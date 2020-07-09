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

#ifndef _NPC_H_
#define _NPC_H_

#include "globals.h"

void p_npc_heiler (UINT8 l_mk) BANKED;
void p_fiona () BANKED;
void p_max () BANKED;
void p_provianthaendler () BANKED;
void p_ausdauerhandlerin () BANKED;
void p_heiltrankhaendlerin () BANKED;

/*void p_npc_helfer (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_ntyp, UINT8 v_nqnr) BANKED;
void p_npc_questgeber1 (UINT8 v_nxk, UINT8 v_nyk, UINT8 v_qnr) BANKED;
void p_npc_tausch_proviant (UINT8 nxk, UINT8 nyk) BANKED;
void p_nicht_genug_gold () BANKED;*/

#endif
