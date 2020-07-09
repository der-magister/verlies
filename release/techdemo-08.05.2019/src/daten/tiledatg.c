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

#pragma bank=13

#include "daten\tiledat.h"

///beinhaltet Tile die eine Kolision auslösen, Zeile = Level, Spalten = Kolisionstile (max.25)
const unsigned char v_kdatg [9][25] = 
{
	{2, 11, 12, 13, 14, 15, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 36, 37, 38, 0, 0, 0}, //1
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //2
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //3
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //4
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //5
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //6
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //7
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00}, //8
	{20, 21, 22, 23, 26, 27, 33, 34, 35, 36, 37, 18, 19, 24, 25, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00, 00} //9
};
