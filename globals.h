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

// globale Variablen sind eigentlich phöse, aber nicht bei der Gameboy-Programmierung mit C

#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#include "/opt/gbdk/include/asm/gbz80/types.h"
#include "/opt/gbdk/include/gb/gb.h"

#define NONE 0
#define HORIZONT 1
#define VERTICAL 2
#define STACHEL 3

#define MOVE_NORTH 1
#define MOVE_SOUTH 2
#define MOVE_WEST 3
#define MOVE_EAST 4
#define MOVE_UP 5
#define MOVE_DOWN 6

#define BANK_2 2
#define BANK_3 3
#define BANK_4 4
#define BANK_5 5
#define BANK_6 6
#define BANK_7 7
#define BANK_8 8 
#define BANK_9 9
#define BANK_10 10
#define BANK_11 11
#define BANK_12 12
#define BANK_13 13
#define BANK_14 14
#define BANK_15 15
#define BANK_16 16
#define BANK_17 17
#define BANK_18 18 
#define BANK_19 19 
#define BANK_20 20 

#define LAYER_BKG 1
#define LAYER_WIN 2

///Koordinaten der HUDGui 
#define HUDXPOS 0
#define HUDYPOS 0

extern BOOLEAN v_nomobs;

///in main () verwendet
extern volatile UINT8 v_quit;

///aktuelle Mapdaten
extern unsigned char v_leveldaten [252];

extern UINT8 v_bank;

///beinhaltet Wert, ob Spieler sich bewegen kann (true) oder nicht (false)
extern UINT8 v_walk;

extern UINT8 gwalk;

///ist Infoscreen aktiv (true) oder nicht (false)
extern BOOLEAN v_info;

//ist Windows-Layer aktiv oder nicht
extern BOOLEAN v_win;

///aktuelle Textdaten
extern unsigned char v_txt [81];

///aktuelles Level
extern UINT16 v_lvl;

///beinhaltet Zustand der Truhen
extern UINT8 v_truhen [90];    

extern UINT8 v_schalter [20];           

///erhaltende Karten
extern UINT8 v_knr [20];

///beinhaltet Queststand
extern UINT8 v_questen [10];   

///Flag, ob Spieler eine Aktion ausgeführt hat (TRUE = ja, FALSE = nein)
extern UINT8 v_aktion;

///Flag, ob Bosskampf aktiv ist (TRUE = ja, FALSE = nein)
extern UINT8 v_bosskampf;                

///Flag, ob Kampf aktiv ist (TRUE = ja, FALSE = nein)
extern UINT8 v_kampf;                     

///Timer für Angriffanimation Spieler
extern UINT8 v_kampflooptime;

///Time für Itemanimation Spieler
extern UINT8 v_itemlooptime;

///Timer für Trefferanimation Spieler
extern UINT8 v_trefferlooptime;

///für Zählschleifen
extern UINT8 v_i;   
extern UINT8 v_j;                         
extern volatile UINT8 v_a;
extern UINT8 v_b;  
extern UINT8 v_g;               //für Zahlschleifen Gegner 
extern UINT8 v_kg;
extern UINT8 v_pg;

///Timer für Spielerbewegung und HUD-Blink in game loop verwendet in main ()
extern UINT8 v_looptime;

///verwendet in main ()
extern UINT8 v_gameover;         

///beinhaltet Tile für dynamische Leveländerungen
extern unsigned char v_tile [4];

///Flag, ob Spieler gerade angreift
extern UINT8 v_attack;
extern UINT8 v_aktion2;

///für HUD Blink
extern UINT8 v_blink; 
extern UINT8 v_2;

//Gegenervariablen
///Koordinate X der Gegner
extern UINT8 v_gxk [3];   

///Koordinate Y der Gegner
extern UINT8 v_gyk [3];   

///Lebenspunkte der Gegner
extern INT8 v_glp [3];         

/// Trefferpunkte der Gegner
extern UINT8 v_gtp [3];

///Koordinate der Gegner auf Karte
extern UINT8 v_gmk [3];        

///Bewegungsrichtung der Gegner
extern UINT8 v_gri [3];   

///Spriteblocks der Gegner
extern UINT8 v_gspf [3];
extern UINT8 v_gspl [3];

extern UINT8 v_boss;
           
///Bewegungsgeschwindigkeit der Gegner
extern UINT8 v_gspeed;         

///Timer für Bewegungsaktionen der Gegner
extern UINT8 gloop;

///Timer für Aktionen der Bosse
extern UINT8 v_bossloop;

///verwendet in boss.c
extern UINT8 v_set;

///Ablaufvariable der Bosse
extern UINT8 v_stage;

//Spielervariablen
///aktuelle Lebenspunkte des Spielers
extern INT8 v_slp;      

///max. Lebenspunkte des Spielers
extern INT8 v_smlp;

///Ausdauer des Spielers
extern UINT8 v_saus;
extern UINT8 v_smaus;

///X-Koordinate des Spielers
extern UINT8 v_sxk;      

//Y-Koordinate des Spielers
extern UINT8 v_syk;      

///Spritenummer des Spielers
extern UINT8 v_sprnr;     

///Koordinate des Spielers auf Karte
extern UINT8 v_smk;

///Rüstungsschutz des Spielers
extern UINT8 v_srs;

///Trefferpunkte des Spielers
extern UINT8 v_stp;       

///aktuelle Heiltränke im Besitz des Spielers
extern UINT8 v_sht;      

///maximal mögliche Heiltränke im Besitz des Spielers
extern UINT8 v_smht;     

///aktuelles Gold im Besitz des Spielers
extern UINT8 v_sgo;      

///maximal mögliches  Gold im Besitz des Spielers
extern UINT8 v_smgo;     

///aktueller Proviant im Besitz des Spielers 
extern UINT8 v_spr;      

///maximal möglicher Proviant im Besitz des Spielers
extern UINT8 v_smpr;

///aktueller Zauberstaub im Besitz des Spielers
extern UINT8 v_sstaub;

///maximal möglicher Zauberstaub im Besitz des Spielers
extern UINT8 v_smstaub;

///Schlüssel im Besitz des Spielers    
extern UINT8 v_ske;

///gegangene Schritte des Spielers (für Proviant)       
extern UINT8 v_ssc;

///Bewegungsrichtung des Spielers
extern UINT8 v_sri;

///Flag, o Spieler getroffen wurden (TRUE = ja, FALSE = nein)
extern UINT8 v_stref;

extern UINT8 v_serz;

///Portalrune
extern BOOLEAN v_portalrune;

///Spitzhacke
extern BOOLEAN v_spitzhacke;
extern BOOLEAN v_sichel;

///Portale
extern UINT8 v_portal [4];

extern UINT8 v_tuer [15];

///Heilkräuter
extern UINT8 v_shk;

///maximale Heilkräuter
extern UINT8 v_smhk;

///Ausdauertrank
extern UINT8 v_sat;

///maximale Ausdauertränke
extern UINT8 v_smat;

/* ItemIDs
   1 = Heiltrank
   2 = Ausdauertrank
   3 = Heilkräuter
   4 = Spitzhacke
*/

//Zählvariable der getöteten Gegner
extern UINT8 v_smobs;	

///beinhaltet gerade ausgewähltes Item
extern UINT8 v_selectItem;

///Stein- und Buschstatus
extern UINT8 v_stein [60];
extern UINT8 v_busch [40];

///Item in Benutzung
extern BOOLEAN v_sused; //zeigt an, ob ein Gegenstand benutzt wurde (TRUE=ja/FALSE=nein)

//welcher button wurde aktiv
/* 1 = A
   2 = B
*/
extern UINT8 v_keyflag;

///Itemkartenkoordinate/-koordinaten
extern UINT8 v_imk;
extern UINT8 v_ixk;
extern UINT8 v_iyk;


//für "zufällige" Zahlen
extern UINT8 v_zufallszahl;
extern UINT8 v_timer;

extern UINT8 v_count;

extern BOOLEAN v_infoscr;

extern UINT8 v_ausdauertimer;


///Portale benutze 1 = ja / 0 = nein
extern BOOLEAN v_use_portal; 

extern BOOLEAN v_aspekte [3];

//loop variable für boss effekte  
extern UINT8 v_bosseffectloop;

extern UINT8 v_schaufel;
extern UINT8 v_loch [10]; //für Schaufel

extern UINT8 v_sflimmtm; //timer für flimmer Spieler
extern UINT8 v_ks; //Zählwert Kolision Spieler


#endif
