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
//   Kontakt: heiko.wolf.mail@gmail.com

#ifndef _TRUHEN_H_
#define _TRUHEN_H_

#include "globals.h"

extern void p_truhe_init (void) BANKED;
extern void p_truhe_gold (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) __banked;
extern void p_truhe_proviant (UINT8 l_smk, UINT8 l_tnr, UINT8 l_anz) __banked;
extern void p_truhe_status (void) __banked;
extern void p_truhe_schwert (UINT8 l_smk, UINT8 l_tnr) __banked;
extern void p_truhe_karte (UINT8 l_smk, UINT8 l_knr, UINT8 l_tnr) __banked; 
extern void p_truhe_ausdauertrank (UINT8 l_smk, UINT8 v_tnr) __banked;
extern void p_truhe_heiltrank (UINT8 l_smk, UINT8 v_tnr) __banked;
extern void p_truhe_kraut (UINT8 l_smk, UINT8 v_tnr) __banked;
extern void p_truhe_brotbuechse_1 (void) __banked;
extern void p_truhe_brotbuechse_2 (void) __banked;
extern void p_truhe_geldkatze1 (void) __banked;
extern void p_truhe_schluessel (UINT8 l_mk, UINT8 l_nr) __banked;
extern void p_truhe_lebenskristall (UINT8 l_mk, UINT8 l_nr) __banked;
extern void p_truhe_magischer_stein (void) __banked;
extern void p_truhe_wappenrock (void) __banked;
extern void p_truhe_aspekt_wald (void) __banked;
extern void p_truhe_geldkatze2 (void) __banked;
extern void p_truhe_kraeuterbeutel (void) BANKED;
extern void p_truhe_schaufel (void) BANKED;
extern void p_truhe_erz (UINT8 l_mk, UINT8 l_tnr) BANKED;
extern void p_truhe_zauberstaub (UINT8 l_mk, UINT8 l_tnr) BANKED;
extern void p_truhe_portalrune (UINT8 l_mk, UINT8 l_tnr) BANKED;
extern void p_truhe_aspekt_berg (void) __banked;


/**Truhe die Runen beinhaltet
   XK, YK der Truhe, Truhennummer**/
//extern void p_truhe_runen (UINT8 v_txk, UINT8 v_tyk, UINT8 v_tnr) __banked;

#endif
