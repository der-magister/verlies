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

#pragma bank=3

#include "other.h"
#include "engine.h"

#include "daten/other/gameover.h"
#include "daten/other/kredits.h"
#include "daten/other/titel.h"

#include "daten/tilesets/felsengrund_1-8-37.h"
#include "daten/spritesets/v_spriteset_1.h"

UINT8 v_keyflag;

void p_gameover () BANKED
{
	HIDE_SPRITES;
	HIDE_WIN;
        set_bkg_tiles (0, 0, 20, 18, gameover);
        waitpad (J_START);
        //p_engine_loadTileset (2, 0, 127, felsengrund_1, 17);
        p_engine_loadTileset (2, 8, 29, felsengrund_1, 3);
        p_engine_loadSpriteset (2, 0, 127, v_spriteset_1, 3);
        
        v_gameover = TRUE; v_slp = v_smlp;
        v_lvl = 1; v_info = FALSE;
        if (v_spr == 0) ++v_spr;
}

void p_engine_down () BANKED
{
  delay (200);
  waitpad (J_DOWN);
}

void p_engine_A () BANKED
{
  delay (200);
  waitpad (J_A);
}

///Startintro
void p_intro () BANKED
{
        set_bkg_tiles (0, 0, 20, 18, kredits);
        delay (2000);
        set_bkg_tiles (0, 0, 20, 18, titel);
        delay (2000);
}

//https://github.com/bbbbbr/gb-window-as-sprite/blob/release/src/main.c

/*UINT8 rand_clamp(UINT8 min, UINT8 max) {

    UINT8 r;

    r = rand();

    // This isn't the best way to do this (potentially slow, unpredictable)
    while ((r > max) || (r < min))
        r = rand();

    return (r);
}*/