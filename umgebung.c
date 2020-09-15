//   Verlies - ein Adventure/RPG im Retrodesign
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

///Beinhaltet interaktive Objekte auf der Karte

//#pragma bank=12

#include "globals.h"
#include "lvlstatus.h"
#include "engine.h"

void p_umgebung_init (void) __banked
{
        for (v_i = 0; v_i <= 50; ++v_i)
        {
                v_stein [v_i] = 0;
                v_busch [v_i] = 0;
        } 
}


///Stein zum wegschlagen, Aufruf: Kartenkoordinate, Nummer des Steines
void p_stein (UINT8 l_mk, UINT8 l_nr) __banked
{
        if ((l_mk == v_imk) && (v_keyflag == 2))
        {
                if ((v_sused == TRUE) && (v_selectItem == 4))
                {
                        if (v_stein [l_nr] == 0)
                        {
                                ++v_stein [l_nr];
                                p_lvl_status ();
                                v_sused = FALSE;
                        }
                }
        }
}

void p_stein_busch_clear (UINT8 l_xk, UINT8 l_yk) __banked
{
        v_tile [0] = 38;
        p_engine_set_tile (l_xk, l_yk, LAYER_BKG);
        p_engine_set_tile (l_xk + 1, l_yk, LAYER_BKG);
        p_engine_set_tile (l_xk, l_yk + 1, LAYER_BKG);
        p_engine_set_tile (l_xk + 1, l_yk + 1, LAYER_BKG);
}

///Busch zum weghacken, Aufruf: Kartenkoordinate, Nummer des Busches
void p_busch (UINT8 l_mk, UINT8 l_nr) __banked
{
        if ((l_mk == v_imk) && (v_keyflag == 2) && (v_selectItem == 5))
        {
                if (v_sused == TRUE)
                {
                        if (v_busch [l_nr] == 0)
                        {
                                ++v_busch [l_nr];
                                p_lvl_status ();
                                v_sused = FALSE;
                        }
                }
        }
}

void p_umgebung_state (void) __banked
{
        if (v_lvl == 112)
        {
                if (v_stein [14] == 1) p_stein_busch_clear (6, 8);
                if (v_stein [15] == 1) p_stein_busch_clear (6, 10);
                if (v_stein [16] == 1) p_stein_busch_clear (8, 8);
                if (v_stein [17] == 1) p_stein_busch_clear (8, 10);
                if (v_stein [18] == 1) p_stein_busch_clear (10, 8);
                if (v_stein [19] == 1) p_stein_busch_clear (10, 10);
        }
        else if (v_lvl == 107)
        {
                if (v_stein [13] == 1) p_stein_busch_clear (8, 2);
        }
        else if (v_lvl == 125)
        {
                if (v_stein [20] == 1) p_stein_busch_clear (4, 2);
                if (v_stein [21] == 1) p_stein_busch_clear (6, 2);
                if (v_stein [22] == 1) p_stein_busch_clear (8, 2);
        }
        else if (v_lvl == 147)
        {
               if (v_busch [3] == 1) p_stein_busch_clear (6, 10); 
        }
        else if (v_lvl == 151) { if (v_stein [23] == 1) p_stein_busch_clear (10, 7); }
        else if (v_lvl == 155) { if (v_busch [4] == 1) p_stein_busch_clear (14, 5); }
        else if (v_lvl == 160) { if (v_stein [24] == 1) p_stein_busch_clear (2, 6); }
        else if (v_lvl == 171) { if (v_stein [25] == 1) p_stein_busch_clear (5, 2); }
        else if (v_lvl == 173) { if (v_stein [26] == 1) p_stein_busch_clear (8, 10); }
        else if (v_lvl == 174)
        { 
                if (v_stein [27] == 1) p_stein_busch_clear (10, 2);
                if (v_stein [28] == 1) p_stein_busch_clear (13, 1); 
                if (v_stein [29] == 1) p_stein_busch_clear (15, 9); 
                if (v_stein [30] == 1) p_stein_busch_clear (8, 11); 
                if (v_stein [31] == 1) p_stein_busch_clear (8, 5); 
                if (v_stein [32] == 1) p_stein_busch_clear (1, 2); 
        }
        else if (v_lvl == 178) { if (v_stein [33] == 1) p_stein_busch_clear (2, 5); }
        else if (v_lvl == 185) { if (v_stein [34] == 1) p_stein_busch_clear (8, 10); }
        else if (v_lvl == 192) { if (v_busch [5] == 1) p_stein_busch_clear (15, 10); }
        else if (v_lvl == 200) { if (v_busch [6] == 1) p_stein_busch_clear (2, 6); }
        else if (v_lvl == 194) 
        { 
            if (v_stein [35] == 1) p_stein_busch_clear (2, 6); 
            if (v_stein [36] == 1) p_stein_busch_clear (11, 4); 
            if (v_stein [37] == 1) p_stein_busch_clear (9, 2);
            if (v_stein [38] == 1) p_stein_busch_clear (11, 2);
            if (v_stein [39] == 1) p_stein_busch_clear (13, 2);
        }
        else if (v_lvl == 201) { if (v_stein [40] == 1) p_stein_busch_clear (7, 10); }
        else if (v_lvl == 195)
        {
            if (v_stein [41] == 1) p_stein_busch_clear (12, 6);
            if (v_stein [42] == 1) p_stein_busch_clear (4, 6);

        }

}
