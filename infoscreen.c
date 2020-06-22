//#pragma bank=8

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

#include "infoscreen.h"
#include "hud.h"

#include "daten/hud/v_infoscreen.h"

void p_infoscreen_show (void) __banked
{
        set_win_tiles (0, 0, 20, 18, v_infoscreen);
        v_infoscr = TRUE;
        //p_hud_showTP ();
        //SHOW_WIN;
        //HIDE_BKG;
        HIDE_SPRITES;
        delay (120);
}

void p_infoscreen_hide (void) __banked
{
        //HIDE_WIN;
        v_infoscr = FALSE;
        p_hud_show ();
        //SHOW_WIN;
        SHOW_BKG;
        SHOW_SPRITES;
        delay (120);
}

void p_infoscreen (void) __banked
{
        if (v_infoscr == FALSE) p_infoscreen_show ();
        else if (v_infoscr == TRUE) p_infoscreen_hide ();     
}
