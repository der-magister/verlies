//   Verlies - ein Adventure/RPG im Retrodesign
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
//   Kontakt: magister@kabelmail.de

#pragma bank=17

#include "globals.h"
#include "lvlstatus.h"


UINT8 v_stein [15];

void p_stein (UINT8 l_mk, UINT8 l_nr) BANKED
{

        if ((l_mk == v_imk) && (v_keyflag == 2))
        {
                if (v_sused == TRUE)
                {
                        if (v_stein [l_nr] == 0)
                        {
                                ++v_stein [l_nr] == 1;
                                p_lvl_status ();
                                v_sused = FALSE;
                        }
                }
        }
}
