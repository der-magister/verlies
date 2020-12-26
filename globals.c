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

#include "globals.h"

volatile UINT8 v_quit;
BOOLEAN v_nomobs;
unsigned char v_leveldaten [252];
UINT8 v_bank;
UINT8 v_walk;
UINT8 gwalk;
BOOLEAN v_info;
BOOLEAN v_win;
unsigned char v_txt [81];
UINT8 v_lvl=1;
UINT8 v_truhen [80];    
UINT8 v_schalter [20];           
UINT8 v_knr [10];
UINT8 v_questen [10];   
UINT8 v_aktion=0;
UINT8 v_bosskampf;                
UINT8 v_kampf;                     
UINT8 v_kampflooptime;
UINT8 v_itemlooptime;
UINT8 v_trefferlooptime;
UINT8 v_i;   
UINT8 v_j;                         
volatile UINT8 v_a;
UINT8 v_b;  
UINT8 v_g;               
UINT8 v_kg;
UINT8 v_pg;
UINT8 v_looptime;
UINT8 v_gameover;         
unsigned char v_tile [3];
UINT8 v_attack;
UINT8 v_aktion2;
UINT8 v_blink; 
UINT8 v_2;
UINT8 v_gxk [3];   
UINT8 v_gyk [3];   
INT8 v_glp [3];         
UINT8 v_gtp [3];
UINT8 v_gmk [3];        
UINT8 v_gri [3];   
UINT8 v_gspf [3];
UINT8 v_gspl [3];
UINT8 v_boss;
UINT8 v_gspeed;         
UINT8 gloop;
UINT8 v_bossloop;
UINT8 v_set;
UINT8 v_stage;
INT8 v_slp;      
INT8 v_smlp;
UINT8 v_saus;
UINT8 v_smaus;
UINT8 v_sxk;      
UINT8 v_syk;      
UINT8 v_sprnr;     
UINT8 v_smk;
UINT8 v_srs;
UINT8 v_stp;       
UINT8 v_sht;      
UINT8 v_smht;     
UINT8 v_sgo;      
UINT8 v_smgo;     
UINT8 v_spr;      
UINT8 v_smpr;
UINT8 v_sstaub;
UINT8 v_smstaub;
UINT8 v_ske;
UINT8 v_ssc;
UINT8 v_sri;
UINT8 v_stref;
BOOLEAN v_portalrune;
UINT8 v_serz;
BOOLEAN v_spitzhacke;
BOOLEAN v_sichel;
UINT8 v_portal [4];
UINT8 v_tuer [15];
UINT8 v_shk;
UINT8 v_smhk;
UINT8 v_sat;
UINT8 v_smat;
UINT8 v_smobs;	
UINT8 v_selectItem;
UINT8 v_stein [60];
UINT8 v_busch [40];
BOOLEAN v_sused;
UINT8 v_keyflag;
UINT8 v_imk;
UINT8 v_ixk;
UINT8 v_iyk;
UINT8 v_zufallszahl;
UINT8 v_timer;
UINT8 v_count;
BOOLEAN v_infoscr;
UINT8 v_ausdauertimer;
BOOLEAN v_use_portal; //Portale benutze 1 = ja / 0 = nein
BOOLEAN v_aspekte [3];
UINT8 v_bosseffectloop;
UINT8 v_schaufel;
UINT8 v_loch [10];
UINT8 v_sflimmtm;
UINT8 v_ks; //Zählwert Kolision Spieler

