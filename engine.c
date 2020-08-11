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

//#include <rand.h>
//#include <gb/hardware.h>

#include "globals.h"
#include "truhen.h" 
#include "gegner.h"
#include "lvlstatus.h"
#include "player.h"
#include "hud.h"
#include "lvlgegner.h"

///aktiviert Tileset für Backgroundlayer
///Aufruf: Bank  wo die Tiledaten liegen, erste Tilenummer, letzte Tilenummer, Tileset, Rückkehrbank (wovon Funktion aufgerufen wurde)
void p_engine_loadTileset (UINT8 l_bank, UINT8 l_ftile, UINT8 l_ltile, unsigned char l_tileset [100], UINT8 l_bnk) __nonbanked
{
        DISPLAY_OFF;
        SWITCH_ROM_MBC5 (l_bank);
        set_bkg_data (l_ftile, l_ltile + 1, l_tileset);
        SWITCH_ROM_MBC5 (l_bnk);
}

///aktiviert Spritelayer
///Bank wo die Spritedaten liegen, erste Spritenummer, letzte Spritenummer, Spriteset, Rückkehrbank (wovon Funktion aufgerufen wurde)
void p_engine_loadSpriteset (UINT8 l_bank, UINT8 v_fsprite, UINT8 v_lsprite, unsigned char v_spriteset [127], UINT8 l_bnk) __nonbanked
{
        SWITCH_ROM_MBC5 (l_bank);
        set_sprite_data (v_fsprite, v_lsprite + 1, v_spriteset);
        SWITCH_ROM_MBC5 (l_bnk);
}

///Lädt angegebenes Level in den Speicher, Aufruf: Leveldaten, Bank wo die Daten liegen, Rückkehrbank (wovon Funktion aufgerufen wurde)
void p_engine_loadMap (unsigned char l_lvldat [252], UINT8 l_bnk, UINT8 l_bank) __nonbanked
{ 
        if (v_keyflag == 1)
        {
                DISPLAY_OFF;
                SWITCH_ROM_MBC5 (l_bnk);
                for (v_i = 0; v_i != 253; ++v_i) v_leveldaten [v_i] = l_lvldat [v_i];
                SWITCH_ROM_MBC5 (l_bank);
        }
}

///Levelwechsel, Level, XK-Spieler, YK-Spieler
void p_engine_changeLvl (UINT8 l_lvl, UINT8 l_xk, UINT8 l_yk) __nonbanked
{	
        if (v_keyflag == 1)
        {
                v_keyflag = 0;
                if (v_kampf == TRUE) p_gegner_stop ();
                delay (115);
                v_aktion = TRUE;
                v_lvl = l_lvl;
                set_bkg_tiles (1, 1, 18, 14, v_leveldaten);
                p_truhe_status ();
                p_spieler_set_sprite (l_xk, l_yk);
                p_lvl_status ();
                p_hud_showLvl ();
                p_set_gegner ();
                DISPLAY_ON;
        }
}

///setzt in v_tile angegebenes Hintergrundtile an übergebene Position und Layer
void p_engine_set_tile (UINT8 l_xk, UINT8 l_yk, UINT8 l_layer) NONBANKED
{
        ++l_xk; ++l_yk;

        if (l_layer == 1)
        {
                set_bkg_tiles (l_xk, l_yk, 1, 1, v_tile);
                if (v_info == FALSE) v_leveldaten [(l_xk - 1) + 18 * (l_yk - 1)] = v_tile [0];
        }
        else if (l_layer == 2)
        {
                set_win_tiles (l_xk - 1, l_yk - 1, 1, 1, v_tile);
        }
}

/*UINT8 p_genzufallszahl (void) NONBANKED
{
        UWORD l_seed;
        UINT8 l_wert;

        l_seed = DIV_REG;

        wait_vbl_done();

        l_seed |= (UWORD) DIV_REG << 8;

        initrand (l_seed);

        //Zufallszahl zwischen 0-19
        l_wert = ((rand() & 0xFF) * 20) >> 8;

        //l_wert = l_wert % l_max + 1;

        return (l_wert);
}*/

