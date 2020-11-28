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

//#pragma bank=11

#include "globals.h"
#include "engine.h"
#include "schilder.h"
#include "umgebung.h"


#include "felsengrund.h" 
#include "stadtgefaengnis.h"
#include "wiesen.h"
#include "ogerhoehlen.h"
#include "feensee.h"
#include "eichenwald.h"
#include "eichenwald2.h"
#include "alte-baum.h"
#include "gebirgspfad.h"
#include "zwergenheim.h"
#include "rotgebirge.h"
#include "minen.h"

void p_lvl_whichLvL (void) BANKED
{
	if (v_lvl == 1) p_lvl1 ();
        else if (v_lvl == 2) p_lvl2 ();
        else if (v_lvl == 3) p_lvl3 ();
	else if (v_lvl == 5) p_lvl5 ();
	else if (v_lvl == 6) p_lvl6 ();
	else if (v_lvl == 7) p_lvl7 ();
	else if (v_lvl == 8) p_lvl8 ();
	else if (v_lvl == 9) p_lvl9 ();
	else if (v_lvl == 10) p_lvl10 ();
	else if (v_lvl == 11) p_lvl11 ();
	else if (v_lvl == 12) p_lvl12 ();
	else if (v_lvl == 13) p_lvl13 ();
        else if (v_lvl == 20) p_lvl20 ();
        else if (v_lvl == 21) p_lvl21 ();
        else if (v_lvl == 22) p_lvl22 ();
        else if (v_lvl == 23) p_lvl23 ();
        else if (v_lvl == 24) p_lvl24 ();
        else if (v_lvl == 25) p_lvl25 ();
        else if (v_lvl == 26) p_lvl26 ();
        else if (v_lvl == 27) p_lvl27 ();
        else if (v_lvl == 28) p_lvl28 ();
        else if (v_lvl == 29) p_lvl29 ();
        else if (v_lvl == 31) p_lvl31 ();
        else if (v_lvl == 30) p_lvl30 ();
        else if (v_lvl == 32) p_lvl32 ();
        else if (v_lvl == 33) p_lvl33 ();
        else if (v_lvl == 34) p_lvl34 ();
        else if (v_lvl == 35) p_lvl35 ();
        else if (v_lvl == 36) p_lvl36 ();
        else if (v_lvl == 37) p_lvl37 ();
        else if (v_lvl == 38) p_lvl38 ();
        else if (v_lvl == 39) p_lvl39 ();
        else if (v_lvl == 40) p_lvl40 ();
        else if (v_lvl == 41) p_lvl41 ();
        else if (v_lvl == 42) p_lvl42 ();
        else if (v_lvl == 43) p_lvl43 ();
        else if (v_lvl == 44) p_lvl44 ();
        else if (v_lvl == 45) p_lvl45 ();
        else if (v_lvl == 46) p_lvl46 ();
        else if (v_lvl == 47) p_lvl47 ();
        else if (v_lvl == 48) p_lvl48 ();
        else if (v_lvl == 49) p_lvl49 ();
        else if (v_lvl == 50) p_lvl50 ();
        else if (v_lvl == 51) p_lvl51 ();
        else if (v_lvl == 52) p_lvl52 ();
        else if (v_lvl == 53) p_lvl53 ();
        else if (v_lvl == 54) p_lvl54 ();
        else if (v_lvl == 55) p_lvl55 ();
        else if (v_lvl == 56) p_lvl56 ();
        else if (v_lvl == 57) p_lvl57 ();
        else if (v_lvl == 58) p_lvl58 ();
        else if (v_lvl == 59) p_lvl59 ();
        else if (v_lvl == 60) p_lvl60 ();
        else if (v_lvl == 61) p_lvl61 ();
        else if (v_lvl == 62) p_lvl62 ();
        else if (v_lvl == 63) p_lvl63 ();
        else if (v_lvl == 64) p_lvl64 ();
        else if (v_lvl == 65) p_lvl65 ();
        else if (v_lvl == 66) p_lvl66 ();
        else if (v_lvl == 70) p_lvl70 ();
        else if (v_lvl == 71) p_lvl71 ();
        else if (v_lvl == 72) p_lvl72 ();
        else if (v_lvl == 73) p_lvl73 ();
        else if (v_lvl == 74) p_lvl74 ();
        else if (v_lvl == 75) p_lvl75 ();
        else if (v_lvl == 76) p_lvl76 ();
        else if (v_lvl == 77) p_lvl77 ();
        else if (v_lvl == 78) p_lvl78 ();
        else if (v_lvl == 79) p_lvl79 ();
        else if (v_lvl == 15) p_lvl15 ();
        else if (v_lvl == 16) p_lvl16 ();
        else if (v_lvl == 17) p_lvl17 ();
        else if (v_lvl == 18) p_lvl18 ();
        else if (v_lvl == 80) p_lvl80 ();
        else if (v_lvl == 81) p_lvl81 ();
        else if (v_lvl == 82) p_lvl82 ();
        else if (v_lvl == 83) p_lvl83 ();
        else if (v_lvl == 84) p_lvl84 ();
        else if (v_lvl == 85) p_lvl85 ();
        else if (v_lvl == 86) p_lvl86 ();
        else if (v_lvl == 87) p_lvl87 ();
        else if (v_lvl == 90) p_lvl90 ();
        else if (v_lvl == 91) p_lvl91 ();
        else if (v_lvl == 95) p_lvl95 ();
        else if (v_lvl == 96) p_lvl96 ();
        else if (v_lvl == 97) p_lvl97 ();
        else if (v_lvl == 98) p_lvl98 ();
        else if (v_lvl == 99) p_lvl99 ();
        else if (v_lvl == 100) p_lvl100 ();
        else if (v_lvl == 101) p_lvl101 ();
        else if (v_lvl == 102) p_lvl102 ();
        else if (v_lvl == 103) p_lvl103 ();
        else if (v_lvl == 104) p_lvl104 ();
        else if (v_lvl == 105) p_lvl105 ();
        else if (v_lvl == 106) p_lvl106 ();
        else if (v_lvl == 107) p_lvl107 ();
        else if (v_lvl == 108) p_lvl108 ();
        else if (v_lvl == 109) p_lvl109 ();
        else if (v_lvl == 110) p_lvl110 ();
        else if (v_lvl == 111) p_lvl111 ();
        else if (v_lvl == 112) p_lvl112 ();
        else if (v_lvl == 113) p_lvl113 ();
        else if (v_lvl == 114) p_lvl114 ();
        else if (v_lvl == 115) p_lvl115 ();
        else if (v_lvl == 116) p_lvl116 ();
        else if (v_lvl == 117) p_lvl117 ();
        else if (v_lvl == 120) p_lvl120 ();
        else if (v_lvl == 121) p_lvl121 ();
        else if (v_lvl == 122) p_lvl122 ();
        else if (v_lvl == 123) p_lvl123 ();
        else if (v_lvl == 124) p_lvl124 ();
        else if (v_lvl == 125) p_lvl125 ();
        else if (v_lvl == 126) p_lvl126 ();
        else if (v_lvl == 127) p_lvl127 ();
        else if (v_lvl == 128) p_lvl128 ();
        else if (v_lvl == 129) p_lvl129 ();
        else if (v_lvl == 130) p_lvl130 ();
        else if (v_lvl == 131) p_lvl131 ();
        else if (v_lvl == 132) p_lvl132 ();
        else if (v_lvl == 133) p_lvl133 ();
        else if (v_lvl == 134) p_lvl134 ();
        else if (v_lvl == 135) p_lvl135 ();
        else if (v_lvl == 136) p_lvl136 ();
        else if (v_lvl == 137) p_lvl137 ();
        else if (v_lvl == 138) p_lvl138 ();
        else if (v_lvl == 139) p_lvl139 ();
        else if (v_lvl == 140) p_lvl140 ();
        else if (v_lvl == 141) p_lvl141 ();
        else if (v_lvl == 142) p_lvl142 ();
        else if (v_lvl == 143) p_lvl143 ();
        else if (v_lvl == 145) p_lvl145 ();
        else if (v_lvl == 146) p_lvl146 ();
        else if (v_lvl == 147) p_lvl147 ();
        else if (v_lvl == 148) p_lvl148 ();
        else if (v_lvl == 149) p_lvl149 ();
        else if (v_lvl == 150) p_lvl150 ();
        else if (v_lvl == 151) p_lvl151 ();
        else if (v_lvl == 152) p_lvl152 ();
        else if (v_lvl == 153) p_lvl153 ();
        else if (v_lvl == 154) p_lvl154 ();
        else if (v_lvl == 155) p_lvl155 ();
        else if (v_lvl == 156) p_lvl156 ();
        else if (v_lvl == 157) p_lvl157 ();
        else if (v_lvl == 158) p_lvl158 ();
        else if (v_lvl == 159) p_lvl159 ();
        else if (v_lvl == 160) p_lvl160 ();
        else if (v_lvl == 161) p_lvl161 ();
        else if (v_lvl == 162) p_lvl162 ();
        else if (v_lvl == 163) p_lvl163 ();
        else if (v_lvl == 164) p_lvl164 ();
	else if (v_lvl == 165) p_lvl165 ();
	else if (v_lvl == 166) p_lvl166 ();
        else if (v_lvl == 168) p_lvl168 ();
        else if (v_lvl == 169) p_lvl169 ();
        else if (v_lvl == 170) p_lvl170 ();
        else if (v_lvl == 170) p_lvl170 ();
        else if (v_lvl == 171) p_lvl171 ();
        else if (v_lvl == 172) p_lvl172 ();
        else if (v_lvl == 173) p_lvl173 ();
        else if (v_lvl == 174) p_lvl174 ();
        else if (v_lvl == 175) p_lvl175 ();
        else if (v_lvl == 176) p_lvl176 ();
        else if (v_lvl == 177) p_lvl177 ();
        else if (v_lvl == 178) p_lvl178 ();
        else if (v_lvl == 179) p_lvl179 ();
        else if (v_lvl == 185) p_lvl185 ();
        else if (v_lvl == 186) p_lvl186 ();
        else if (v_lvl == 187) p_lvl187 ();
        else if (v_lvl == 190) p_lvl190 ();
        else if (v_lvl == 191) p_lvl191 ();
        else if (v_lvl == 192) p_lvl192 ();
        else if (v_lvl == 193) p_lvl193 ();
        else if (v_lvl == 194) p_lvl194 ();
        else if (v_lvl == 195) p_lvl195 ();
        else if (v_lvl == 196) p_lvl196 ();
        else if (v_lvl == 197) p_lvl197 ();
        else if (v_lvl == 198) p_lvl198 ();
        else if (v_lvl == 199) p_lvl199 ();
        else if (v_lvl == 200) p_lvl200 ();
        else if (v_lvl == 201) p_lvl201 ();
        else if (v_lvl == 202) p_lvl202 ();
        else if (v_lvl == 203) p_lvl203 ();
        else if (v_lvl == 205) p_lvl205 (); //minen eg start
        else if (v_lvl == 206) p_lvl206 ();
        else if (v_lvl == 207) p_lvl207 ();
        else if (v_lvl == 208) p_lvl208 ();
        else if (v_lvl == 209) p_lvl209 ();
        else if (v_lvl == 210) p_lvl210 ();
        else if (v_lvl == 211) p_lvl211 ();
        else if (v_lvl == 212) p_lvl212 ();
        else if (v_lvl == 213) p_lvl213 ();
        else if (v_lvl == 214) p_lvl214 ();
        else if (v_lvl == 215) p_lvl215 ();
        else if (v_lvl == 216) p_lvl216 ();
        else if (v_lvl == 217) p_lvl217 ();
}

void p_lvl_status (void) BANKED
{
        v_tile [0] = 38;

	if (v_lvl == 1)
	{
		if (v_questen [0] != 0)
		{
                        p_engine_set_tile (14, 1, 1);
                        p_engine_set_tile (14, 2, 1);
		}
                if (v_questen [0] >= 3)
                {
                        v_tile [0] = 42;
                        p_engine_set_tile (9, 0, 1);
                        v_tile [0] = 41;
                        p_engine_set_tile (9, 1, 1);
                        v_tile [0] = 40;
                        p_engine_set_tile (10, 0, 1);
                        v_tile [0] = 39;
                        p_engine_set_tile (10, 1, 1);
                        v_tile [0] = 38;
                }
                if (v_stein [0] == 1)
                {
                        p_engine_set_tile (2, 5, 1);
                        p_engine_set_tile (3, 5, 1);
                        p_engine_set_tile (2, 6, 1);
                        p_engine_set_tile (3, 6, 1);

                        if (v_questen [1] == 0) ++v_questen [1];
                }
	}
	else if (v_lvl == 10)
	{
		p_schalter_status ();
	}
	else if (v_lvl == 13)
	{
		if (v_questen [0] >= 2)
		{
			p_engine_set_tile (14, 6, 1);
			p_engine_set_tile (15, 6, 1);
			p_engine_set_tile (14, 7, 1);
			p_engine_set_tile (15, 7, 1);
		}
	}
	else if (v_lvl == 22)
        {
                if (v_stein [1] == 1)
                {
                        p_engine_set_tile (9, 2, 1);
                        p_engine_set_tile (10, 2, 1);
                        p_engine_set_tile (9, 3, 1);
                        p_engine_set_tile (10, 3, 1);
                }
	}
        else if (v_lvl == 29)
        {
                if (v_stein [2] == 1)
                {
                        p_engine_set_tile (2, 7, 1);
                        p_engine_set_tile (3, 7, 1);
                        p_engine_set_tile (2, 8, 1);
                        p_engine_set_tile (3, 8, 1);
                }
        }
        else if (v_lvl == 36)
        {
		if (v_busch [1] == 1)
		{
			p_engine_set_tile (8, 10, LAYER_BKG);
			p_engine_set_tile (9, 10, LAYER_BKG);
			p_engine_set_tile (8, 11, LAYER_BKG);
			p_engine_set_tile (9, 11, LAYER_BKG);
		}
	}
        else if (v_lvl == 43)
        {
                p_schalter_status ();
        }
        else if (v_lvl == 40)
        {
                if (v_tuer [0] == 1)
                {
                        v_tile [0] = 42;
                        p_engine_set_tile (0, 6, 1);
                        v_tile [0] = 40;
                        p_engine_set_tile (1, 6, 1);
                        v_tile [0] = 39;
                        p_engine_set_tile (0, 7, 1);
                        v_tile [0] = 41;
                        p_engine_set_tile (1, 7, 1);
                }
        }
        else if (v_lvl == 51)
        {
                if (v_tuer [1] == 1)
                {
                        v_tile [0] = 42;
                        p_engine_set_tile (16, 8, 1);
                        v_tile [0] = 40;
                        p_engine_set_tile (17, 8, 1);
                        v_tile [0] = 39;
                        p_engine_set_tile (16, 9, 1);
                        v_tile [0] = 41;
                        p_engine_set_tile (17, 9, 1);
                }
        }
        else if (v_lvl == 57) { p_schalter_status (); }
        else if (v_lvl == 58) { p_schalter_status (); }
        else if (v_lvl == 59) { p_schalter_status (); }
        else if (v_lvl == 60) { p_schalter_status (); }
        else if (v_lvl == 61)
        {
                v_tile [0] = 42;
                p_engine_set_tile (4, 0, LAYER_BKG);
                v_tile [0] = 40;
                p_engine_set_tile (5, 0, LAYER_BKG);
                v_tile [0] = 39;
                p_engine_set_tile (4, 1, LAYER_BKG);
                v_tile [0] = 41;
                p_engine_set_tile (5, 1, LAYER_BKG);
        } 
        else if (v_lvl == 65)
        {
                if (v_questen [0] >= 2)
                {
                        p_engine_set_tile (8, 5, LAYER_BKG);
                        p_engine_set_tile (9, 5, LAYER_BKG);
                        p_engine_set_tile (8, 6, LAYER_BKG);
                        p_engine_set_tile (9, 6, LAYER_BKG);
                }
        }

        else if (v_lvl == 66)
        {
                if (v_stein [3] == 1)
                {
                        p_engine_set_tile (4, 6, LAYER_BKG);
                        p_engine_set_tile (4, 7, LAYER_BKG);
                        p_engine_set_tile (5, 6, LAYER_BKG);
                        p_engine_set_tile (5, 7, LAYER_BKG);
                }
                if (v_stein [4] == 1)
                {
                        p_engine_set_tile (12, 6, LAYER_BKG);
                        p_engine_set_tile (13, 6, LAYER_BKG);
                        p_engine_set_tile (12, 7, LAYER_BKG);
                        p_engine_set_tile (13, 7, LAYER_BKG);
                }
        }
        else if (v_lvl == 70)
        {
		if (v_busch [0] == 1)
		{
			p_engine_set_tile (8, 10, LAYER_BKG);
			p_engine_set_tile (9, 10, LAYER_BKG);
			p_engine_set_tile (8, 11, LAYER_BKG);
			p_engine_set_tile (9, 11, LAYER_BKG);
		}
	}
        else if (v_lvl == 81)
        {
                if (v_busch [2] == 1)
                {
                        p_engine_set_tile (2, 6, LAYER_BKG);
                        p_engine_set_tile (3, 6, LAYER_BKG);
                        p_engine_set_tile (2, 7, LAYER_BKG);
                        p_engine_set_tile (3, 7, LAYER_BKG);

                }
                if (v_questen [0] > 8)
                {
                        v_tile [0] = 8;
                        p_engine_set_tile (9, 0, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (9, 1, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (10, 0, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (10, 1, LAYER_BKG);   
                }
        }
        else if (v_lvl == 91)
        {
                if (v_questen [0] >= 5)
                {
                        v_tile [0] = 32;
                        p_engine_set_tile (11, 12, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (11, 13, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (12, 12, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (12, 13, LAYER_BKG);
                }
        }
        else if (v_lvl == 95)
        {
                if (v_stein [5] == 1)
                {
                        p_engine_set_tile (2, 3, LAYER_BKG);
                        p_engine_set_tile (3, 3, LAYER_BKG);
                        p_engine_set_tile (2, 4, LAYER_BKG);
                        p_engine_set_tile (3, 4, LAYER_BKG);
                }
        }
        else if (v_lvl == 104)
        {
                if (v_stein [6] == 1) p_stein_busch_clear (11, 10);    
        }
        else if (v_lvl == 110)
        {
                if (v_stein [10] == 1) p_stein_busch_clear (15, 2);
                if (v_stein [11] == 1) p_stein_busch_clear (14, 9);
                if (v_stein [12] == 1) p_stein_busch_clear (7, 10);
        }
        else if (v_lvl == 114)
        {
                if (v_stein [7] == 1) p_stein_busch_clear (11, 10);
                if (v_stein [8] == 1) p_stein_busch_clear (2, 2); 
        }
        else if (v_lvl == 103)
        {
                if (v_questen [0] >= 7)
                {
                        p_engine_set_tile (8, 4, LAYER_BKG);
                        p_engine_set_tile (9, 4, LAYER_BKG);
                        p_engine_set_tile (8, 5, LAYER_BKG);
                        p_engine_set_tile (9, 5, LAYER_BKG);
                }
        }
        else if (v_lvl == 142)
        {
                if (v_questen [0] >= 10)
                {
                        p_engine_set_tile (12, 6, LAYER_BKG);
                        p_engine_set_tile (13, 6, LAYER_BKG);
                        p_engine_set_tile (12, 7, LAYER_BKG);
                        p_engine_set_tile (13, 7, LAYER_BKG);
                }
        }
        else if (v_lvl == 150)
        {
                if (v_tuer [3] == 1)
                {
                        v_tile [0] = 12;
                        p_engine_set_tile (11, 0, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (11, 1, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (12, 0, LAYER_BKG);
                        ++v_tile [0];
                        p_engine_set_tile (12, 1, LAYER_BKG);
                }
        }
        else if (v_lvl == 156) { p_schalter_status (); }
	else if (v_lvl == 165)
	{
		if (v_questen [0] >= 11)
		{
			v_tile [0] = 12;
		        p_engine_set_tile (0, 6, LAYER_BKG);
			p_engine_set_tile (16, 6, LAYER_BKG);
		        ++v_tile [0];
		        p_engine_set_tile (0, 7, LAYER_BKG);
			p_engine_set_tile (16, 7, LAYER_BKG);
		        ++v_tile [0];
		        p_engine_set_tile (1, 6, LAYER_BKG);
			p_engine_set_tile (17, 6, LAYER_BKG);
		        ++v_tile [0];
		        p_engine_set_tile (1, 7, LAYER_BKG);
			p_engine_set_tile (17, 7, LAYER_BKG);
		}
	}
	else if (v_lvl == 86)
	{
		if (v_questen [0] > 12)
		{
			v_tile [0] = 8;
			p_engine_set_tile (0, 6, LAYER_BKG);
			++v_tile [0];
			p_engine_set_tile (0, 7, LAYER_BKG);
			++v_tile [0];
			p_engine_set_tile (1, 6, LAYER_BKG);
			++v_tile [0];
			p_engine_set_tile (1, 7, LAYER_BKG);
		}
	}
        else if (v_lvl == 187) {
                if (v_questen [0] == 14) {
                        v_tile [0] = 38;
                        p_engine_set_tile (8, 2, LAYER_BKG);
                        p_engine_set_tile (9, 2, LAYER_BKG);
                        p_engine_set_tile (8, 3, LAYER_BKG);
                        p_engine_set_tile (9, 3, LAYER_BKG);       
                }
        }
        else if (v_lvl == 208) {
                if (v_schalter [6] == 1) {
                      v_tile [0] = 32;
                      p_engine_set_tile (8, 0, LAYER_BKG);
                      ++v_tile [0];
                      p_engine_set_tile (8, 1, LAYER_BKG);
                      ++v_tile [0];
                      p_engine_set_tile (9, 0, LAYER_BKG);
                      ++v_tile [0];
                      p_engine_set_tile (9, 1, LAYER_BKG); 
                } 
        }
        else if (v_lvl == 211) { p_schalter_status (); }
			
        p_umgebung_state ();    
}
