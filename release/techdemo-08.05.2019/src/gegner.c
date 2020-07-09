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

#include "globals.h"
#include "gegner.h"
#include "player.h"
#include "hud.h"
#include "lvlstatus.h"
#include "tiledatg.h"
#include "tiledat.h"

UINT8 v_a;
UINT8 v_i;
UINT8 v_j;
UINT8 v_gxk [3];        //Koordinate X
UINT8 v_gyk [3];        //Koordinate Y
INT8 v_glp [3];         //Lebenspunkte
UINT8 v_gtp [3];        //Gegnertrefferpunkte
UINT8 v_gmk [3];        //Koordinate auf Map
UINT8 v_gri [3];        //Bewegungsrichtung
UINT8 v_trefferlooptime;
UINT8 gloop;
UINT8 v_kampf;
UINT8 v_stref;
UINT8 gwalk;
UINT8 v_gspeed;
UINT8 v_g;
UINT8 v_kg;

void p_gegner_init () BANKED
{
        
}

///Kolisionsprüfung Gegner
/*void p_gegner_koli () BANKED
{
        for (v_j = 0; v_j != 25; ++v_j)
        {
                if (v_tile [2] == kdatg [v_lvl][v_j]) 
                { 

                        //return 0;
                        gwalk = 0; 
                }
                else
                {
                        gwalk = 1;
                }
        }
}*/

///horizontale Bewegungsroutine Gegner
void p_gegner_move_horizontal () BANKED
{
        for (v_g = 0; v_g != 3; ++v_g)
        {
                //Nord
                if (v_gri [v_g] == 1)
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] - 18];
                        gwalk  = p_gegner_koli ();
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] - 17];
                                gwalk = p_gegner_koli ();
                        }
                        if ((gwalk == 0) || (v_gyk [v_g] == 32))
                        { 
                                v_gri [v_g] = 2;
                        }
                        else if (gwalk == 1)
                        {
                                v_gyk [v_g] -= 8;
                                
                        }
                }
                //Süd
                if (v_gri [v_g] == 2) 
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] + 36]; 
                        gwalk = p_gegner_koli ();
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] + 37];
                                gwalk = p_gegner_koli ();
                        }
                        if (gwalk == 1)
                        {
                                v_gyk [v_g] += 8;
                        }
                        else if ((gwalk == 0) || (v_gyk [v_g] == 112))
                        {
                                v_gri [v_g] = 1;
                        }
                }
                if (gwalk == 1)  p_gegner_move (v_g);
        }
}

void p_gegner_move_vertical () BANKED
{
        for (v_g = 0; v_g != 3; ++v_g)
        {
                //West
                if (v_gri [v_g] == MOVE_WEST)
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] - 1];
                        gwalk  = p_gegner_koli ();
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] - 18];
                                gwalk = p_gegner_koli ();
                        }
                        if ((gwalk == 0) || (v_gyk [v_g] == 16))
                        { 
                                v_gri [v_g] = 4;
                        }
                        else if (gwalk == 1)
                        {
                                v_gxk [v_g] -= 8;
                        }
                }
                //Ost
                if (v_gri [v_g] == MOVE_EAST) 
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] + 2]; 
                        gwalk = p_gegner_koli ();
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] + 20];
                                gwalk = p_gegner_koli ();
                        }
                        if (gwalk == 1)
                        {
                                v_gxk [v_g] += 8;
                        }
                        else if ((gwalk == 0) || (v_gyk [v_g] == 144))
                        {
                                v_gri [v_g] = 3;
                        }
                }
                if (gwalk == 1)  p_gegner_move (v_g);
        }
}

///Setzt Spriteverbund an Position
void p_gegner_move (UINT8 l_nr) BANKED
{
        if (l_nr == 0)
        {
		move_sprite (36, v_gxk [0], v_gyk [0]);
		move_sprite (37, v_gxk [0], v_gyk [0] + 8);
		move_sprite (38, v_gxk [0] + 8, v_gyk [0]);
                move_sprite (39, v_gxk [0] + 8, v_gyk [0] + 8);
        }
        if (l_nr == 1)
        {
                move_sprite (32, v_gxk [1], v_gyk [1]);
		move_sprite (33, v_gxk [1], v_gyk [1] + 8);
		move_sprite (34, v_gxk [1] + 8, v_gyk [1]);
                move_sprite (35, v_gxk [1] + 8, v_gyk [1] + 8);
        }
        if (l_nr == 2)
        {
                move_sprite (28, v_gxk [2], v_gyk [2]);
		move_sprite (29, v_gxk [2], v_gyk [2] + 8);
		move_sprite (30, v_gxk [2] + 8, v_gyk [2]);
                move_sprite (31, v_gxk [2] + 8, v_gyk [2] + 8);
        }
        v_gmk [l_nr] = ((v_gxk [l_nr] - 16) / 8) + 18 * ((v_gyk [l_nr] - 24) / 8);
}

//Setz Gegner (Nr des Spriteverbundes, Starttile, XK, YK, Flag, Richtung, Bewegungsgeschwindigkeit, LP, TP)
void p_gegner_set (UINT8 l_nr, UINT8 l_tile, UINT8 l_xk, UINT8 l_yk, UINT8 l_ri, UINT8 l_lp, UINT8 l_tp) BANKED
{
        v_gxk [l_nr] = l_xk; v_gyk [l_nr] = l_yk; v_gri [l_nr] = l_ri;  
        v_kampf = TRUE; v_glp [l_nr] = l_lp; v_gtp [l_nr] = l_tp;

        if (l_nr == 0)
        {
                for (v_i = 36; v_i != 40; ++v_i)
                {
                        set_sprite_tile (v_i, l_tile);
                        ++l_tile;
                }
        }
        else if (l_nr == 1)
        {
                for (v_i = 32; v_i != 36; ++v_i)
                {
                        set_sprite_tile (v_i, l_tile);
                        ++l_tile;
                }

        }
        else if (l_nr == 2)
        {
                for (v_i = 28; v_i != 32; ++v_i)
                {
                        set_sprite_tile (v_i, l_tile);
                        ++l_tile;
                }

        }
        p_gegner_move (l_nr);

	//v_stref = FALSE;
}


///Kolisionsabfrage Gegner auf Spieler
void p_gegner_koli_player () BANKED
{
        for (v_kg = 0; v_kg != 3; ++v_kg)
        {
                if (v_gri [v_kg] == MOVE_NORTH)
                {

                        if ((v_smk + 18 == v_gmk [v_kg]) || (v_smk + 19 == v_gmk [v_kg]) ||
                            (v_smk + 18 == v_gmk [v_kg] + 1) || (v_smk + 19 == v_gmk [v_kg] + 1))
                        {       
                                p_spieler_blink ();
                                v_gri [v_kg] = 2; v_gyk [v_kg] += 8; v_slp -= v_gtp [v_kg];
                                p_gegner_move (v_kg);
                                
                        }      
                }
                else if (v_gri [v_kg] == MOVE_SOUTH)
                {
                        if  ((v_smk == v_gmk [v_kg] + 18) || (v_smk == v_gmk [v_kg] + 19) ||
                             (v_smk + 1 == v_gmk [v_kg] + 18) || (v_smk + 1 == v_gmk [v_kg] + 19))
                        {
                                p_spieler_blink ();
                                v_gri [v_kg] = 1; v_gyk [v_kg] -= 8; v_slp -= v_gtp [v_kg];
                                p_gegner_move (v_kg);
                        }
                }
                else if (v_gri [v_kg] == MOVE_WEST)
                {
                        if ((v_smk == v_gmk [v_kg] - 1) ||  (v_smk + 18 == v_gmk [v_kg] - 1) ||
                            (v_smk + 2 == v_gmk [v_kg] + 19))

                        {
                                p_spieler_blink ();
                                v_gri [v_kg] = 4; v_gxk [v_kg] += 8; v_slp -= v_gtp [v_kg];
                                p_gegner_move (v_kg);
                        }
                }
                else if (v_gri [v_kg] == MOVE_EAST)
                {
                        if ((v_smk == v_gmk [v_kg] + 2) || (v_smk == v_gmk [v_kg] + 19) ||
                            (v_smk + 18 == v_gmk [v_kg] + 1))
                        {
                                p_spieler_blink ();
                                v_gri [v_kg] = 3; v_gxk [v_kg] -= 8; v_slp -= v_gtp [v_kg];
                                p_gegner_move (v_kg);
                        }
                }
        }  
        p_hud_showLP ();   
}

void p_gegner_stop () BANKED
{
	for (v_a = 0; v_a != 3; ++v_a)
	{
		v_gxk [v_a] = 0; v_gyk [v_a] = 0; v_gri [v_a] = 0;
		p_gegner_move (v_a);
	}
	v_kampf = FALSE;
}
