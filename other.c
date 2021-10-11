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
//   Kontakt: magister@kabelmail.de

//#pragma bank=3

#include "other.h"
#include "engine.h"

#include "daten/other/gameover.h"
#include "daten/other/kredits.h"
#include "daten/other/titel.h"

#include "daten/tilesets/tilesets.h"
#include "daten/spritesets/v_spriteset_1.h"

const UINT8 v_timerdat [35] = 
{
        50, 240, 49, 120, 106, 196, 246, 89, 24, 32, 130, 104, 22, 198, 165, 54, 109, 5, 13, 185, 
        97, 9, 48, 91, 64, 20, 30, 174, 164, 10, 66, 145, 3, 201, 83
};

void p_gameover (void) __banked
{
	HIDE_SPRITES;
	HIDE_WIN;
        set_bkg_tiles (0, 0, 20, 18, gameover);
        delay (120);
        waitpad (J_START);
        p_engine_loadTileset (BANK_2, 8, 34, felsengrund_1, BANK_3);
        p_engine_loadSpriteset (BANK_2, 0, 127, v_spriteset_1, BANK_3);

        v_gameover = TRUE; v_slp = v_smlp;
        v_lvl = 1; v_info = FALSE; v_bosskampf = FALSE; v_kampf = FALSE;
        if (v_spr == 0) ++v_spr;

        DISPLAY_ON;
}

///wartet auf Steuerung unten
void p_engine_down (void) __banked
{
        delay (200);
        waitpad (J_DOWN);
}

void p_engine_A (void) __banked
{
        delay (200);
        waitpad (J_A);
}

///Startintro
void p_intro (void) __banked
{
        set_bkg_tiles (0, 0, 20, 18, kredits);
        delay (3000);
        set_bkg_tiles (0, 0, 20, 18, titel);
        delay (3000);
}

///"zufällige" Zahl ermitteln
UINT8 p_zahl (void) __banked
{
        for (v_a = 0; v_a <= 36; ++v_a)
	{
	       if (v_timer == v_timerdat [v_a]) return 1;
        }    
        return 0;  
}

