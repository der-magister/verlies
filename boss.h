//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2022 Heiko Wolf
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
//   Kontakt: projekte@kabelmail.net

#ifndef _BOSS_H_
#define _BOSS_H_ 

extern void p_boss_init () __banked;
extern void p_gegner_set_boss (UINT8 v_nr) __banked;
extern void p_gegner_ogerboss () __banked;
extern void p_gegner_ogerboss_end () __banked;
extern void p_gegner_pilzwesen (void) __banked;
extern void p_boss_effect_pilzwesen (void) __banked;
extern void p_boss_treffer (void) __banked; 
extern void p_gegner_pilzwesen_end (void) __banked;
/* void p_gegner_bosskampf1 () __banked;
void p_gegner_bosskampf2 () __banked;
void p_gegner_bosskampf3 () __banked; */

#endif
