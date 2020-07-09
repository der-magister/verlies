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

#ifndef _ENGINE_H_
#define _ENGINE_H_

#include "globals.h"

void p_engine_loadTileset (UINT8 l_bank, UINT8 v_ftile, UINT8 v_ltile, unsigned char v_tileset [127], UINT8 v_bnk) NONBANKED;
void p_engine_loadSpriteset (UINT8 l_bank, UINT8 l_fsprite, UINT8 l_lsprite, unsigned char l_spriteset [127], UINT8 l_bnnk) NONBANKED;
void p_engine_loadMap (unsigned char l_lvldat [252], UINT8 l_bnk, UINT8 l_bank) NONBANKED;
void p_engine_changeLvl (UINT8 l_lvl, UINT8 l_xk, UINT8 l_yk) NONBANKED;
void p_engine_set_tile (UINT8 l_xk, UINT8 l_yk, UINT8 l_layer) NONBANKED;

#endif
