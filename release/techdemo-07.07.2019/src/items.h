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
//   Kontakt: magister@kabelmail.de

#ifndef _ITEMS_H_
#define _ITEMS_H_

#include "globals.h"

void p_calc_mapK () BANKED;
void p_drawSelectItem () BANKED;
//void p_useSelectItem () BANKED;
void p_changeItem () BANKED;
void p_proviant () BANKED;
void  p_use_heiltrank () BANKED;
void  p_use_ausdauertrank () BANKED;
void p_select_spitzhacke () BANKED;
void p_use_spitzhacke () BANKED;
void p_hide_spitzhacke () BANKED;

#endif
