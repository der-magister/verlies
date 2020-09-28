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
//   Kontakt: magister@skywave-2000.de

//#pragma bank=10

#include "globals.h"
#include "engine.h"
#include "hud.h"
#include "player.h"
#include "gegner.h"

#include "gfx/rahmen.h"


///Zeichnet Rahmen
void p_engine_rahmen () __banked
{
  set_win_tiles (0, 0, 20, 6, rahmen);
}

///Textausgabe
void p_engine_set_txt (unsigned char l_txt [81]) __banked
{
        if (v_syk >= 104) for (v_i = 0; v_i < 4; ++v_i) { move_sprite (v_i, 0, 0); }

        if ((v_gyk [0] >= 104) && (v_kampf == TRUE)) p_gegner_hide_1 ();
        if ((v_gyk [1] >= 104) && (v_kampf == TRUE)) p_gegner_hide_2 ();
        if ((v_gyk [2] >= 104) && (v_kampf == TRUE)) p_gegner_hide_3 ();

        v_aktion = TRUE;
        p_engine_rahmen ();
        set_win_tiles (1, 1, 18, 4, l_txt);
        move_win (7, 96);
        v_win = TRUE; v_walk = FALSE;
        SHOW_WIN;
        delay (160);
}

void p_engine_after_txt () __banked
{
	v_aktion = TRUE; v_win = FALSE; v_walk = TRUE;
	HIDE_WIN;
	if (v_syk >= 104) p_spieler_set_sprite ();

        if (v_kampf == TRUE) 
        {
                if (v_gri [0] != 0) p_gegner_move (0);
                if (v_gri [1] != 0) p_gegner_move (1);
                if (v_gri [2] != 0) p_gegner_move (2);
        }
        
	delay (160);    
}

