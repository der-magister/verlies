//   Verlies - ein Adventure im Retrodesign
//
//   Copyright (C) 2018-2021 Heiko Wolf
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

//#pragma bank=13

#include "globals.h"
#include "gegner.h"
#include "boss.h"
#include "player.h"
#include "hud.h"
#include "lvlstatus.h"
#include "tiledatg.h"
#include "tiledat.h"


void p_gegner_init (void) BANKED
{
        for (v_i = 0; v_i != 3; v_i++)
        {
                v_gmk [v_i] = 0; v_glp [v_i] = 0; v_gtp [v_i] = 0;
        }   
        p_gegner_stop ();
}

///horizontale Bewegungsroutine Gegner
void p_gegner_move_horizontal (void) BANKED
{
        for (v_g = 0; v_g != 3; v_g++)
        {
                //Nord
                if (v_gri [v_g] == MOVE_NORTH)
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] - 18];
                        gwalk  = p_gegner_koli ();

                        if ((v_gmk [0] == v_gmk [v_g] - 18) || (v_gmk [1] == v_gmk [v_g] - 18)  || (v_gmk [2] == v_gmk [v_g] - 18)) gwalk = FALSE;
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] - 17];
                                gwalk = p_gegner_koli ();

                                if ((v_gmk [0] == v_gmk [v_g] - 17) || (v_gmk [1] == v_gmk [v_g] - 17)  || (v_gmk [2] == v_gmk [v_g] - 17)) gwalk = FALSE;
                        }
                        if ((gwalk == 0) || (v_gyk [v_g] == 32))
                        { 
                                p_gegner_update (v_g, v_gspl [v_g], MOVE_SOUTH);
                                
                        }
                        else if (gwalk == 1) {
                                v_gyk [v_g] -= 8;
                                
                        }
                }
                //Süd
                if (v_gri [v_g] == MOVE_SOUTH) 
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] + 36]; 
                        gwalk = p_gegner_koli ();
                        
                        if ((v_gmk [0] == v_gmk [v_g] + 36) || (v_gmk [1] == v_gmk [v_g] + 36)  || (v_gmk [2] == v_gmk [v_g] + 36)) gwalk = FALSE;

                                
                        if (gwalk == TRUE)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] + 37];
                                gwalk = p_gegner_koli ();
                                
                                if ((v_gmk [0] == v_gmk [v_g] + 37) || (v_gmk [1] == v_gmk [v_g] + 37)  || (v_gmk [2] == v_gmk [v_g] + 37)) gwalk = FALSE;
                        }
                        if (gwalk == TRUE)
                        {
                                v_gyk [v_g] += 8;
                        }
                        else if ((gwalk == FALSE) || (v_gyk [v_g] == 112))
                        {
                                p_gegner_update (v_g, v_gspf [v_g], MOVE_NORTH);
                        }
                }
                if (gwalk == TRUE) p_gegner_move (v_g);
        }
}

void p_gegner_move_vertical (void) BANKED
{
        for (v_g = 0; v_g != 3; v_g++)
        {
                //West
                if (v_gri [v_g] == MOVE_WEST)
                {
                        v_tile [2] = v_leveldaten [v_gmk [v_g] - 1];
                        gwalk  = p_gegner_koli ();
                        
                        if ((v_gmk [0] == v_gmk [v_g] - 1) || (v_gmk [1] == v_gmk [v_g] - 1)  || (v_gmk [2] == v_gmk [v_g] - 1)) gwalk = FALSE;
                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] + 17];
                                gwalk = p_gegner_koli ();
                        
                                if ((v_gmk [0] == v_gmk [v_g] + 17) || (v_gmk [1] == v_gmk [v_g] + 17)  || (v_gmk [2] == v_gmk [v_g] + 17)) gwalk = FALSE;
                        }
                        if ((gwalk == 0) || (v_gyk [v_g] == 16))
                        { 
                                p_gegner_update (v_g, v_gspl [v_g], MOVE_EAST);
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
                        
                        if ((v_gmk [0] == v_gmk [v_g] + 2) || (v_gmk [1] == v_gmk [v_g] + 2)  || (v_gmk [2] == v_gmk [v_g] + 2)) gwalk = FALSE;

                                
                        if (gwalk == 1)
                        {
                                v_tile [2] = v_leveldaten [v_gmk [v_g] + 20];
                                gwalk = p_gegner_koli ();
                        
                                if ((v_gmk [0] == v_gmk [v_g] + 20) || (v_gmk [1] == v_gmk [v_g] + 20)  || (v_gmk [2] == v_gmk [v_g] + 20)) gwalk = FALSE;
                        }
                        if (gwalk == 1)
                        {
                                v_gxk [v_g] += 8;
                        }
                        else if ((gwalk == 0) || (v_gyk [v_g] == 144))
                        {
                                p_gegner_update (v_g, v_gspf [v_g], MOVE_WEST);
                        }
                }
                if (gwalk == 1)  p_gegner_move (v_g);
        }
}

void p_gegner_speer (void) BANKED
{
        for (v_g = 0; v_g != 3; v_g++)
        {
                if (v_gri [v_g] == MOVE_DOWN)
                {
                        p_gegner_update (v_g, v_gspl [v_g], MOVE_UP);
                }                            
                else if (v_gri [v_g] == MOVE_UP)
                {
                        p_gegner_update (v_g, v_gspf [v_g], MOVE_DOWN);
                }
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

void p_gegner_hide_1 (void) BANKED
{
        move_sprite (36, 0, 0);
        move_sprite (37, 0, 0);
        move_sprite (38, 0, 0);
        move_sprite (39, 0, 0);
}

void p_gegner_hide_2 (void) BANKED
{
        move_sprite (32, 0, 0); 
        move_sprite (33, 0, 0);
        move_sprite (34, 0, 0);
        move_sprite (35, 0, 0);
}

void p_gegner_hide_3 (void) BANKED
{
        move_sprite (28, 0, 0);
        move_sprite (29, 0, 0);
        move_sprite (30, 0, 0);
        move_sprite (31, 0, 0);
}

//Setz Gegner (Nr des Spriteverbundes, Starttile, XK, YK, Flag, Richtung, LP, TP)
void p_gegner_set (UINT8 l_nr, UINT8 l_tile, UINT8 l_tile2, UINT8 l_xk, UINT8 l_yk, UINT8 l_ri, UINT8 l_lp, UINT8 l_tp) BANKED
{
        if (v_nomobs == FALSE)
        {
                v_gxk [l_nr] = l_xk; v_gyk [l_nr] = l_yk; v_gri [l_nr] = l_ri;  
                v_kampf = TRUE; v_glp [l_nr] = l_lp; v_gtp [l_nr] = l_tp;
                v_gspf [l_nr] = l_tile; v_gspl [l_nr] = l_tile2;

                if (l_nr == 0)
                {
                        for (v_i = 36; v_i < 40; v_i++)
                        {
                                set_sprite_tile (v_i, l_tile);
                                l_tile++;
                        }
                }
                else if (l_nr == 1)
                {
                        for (v_i = 32; v_i < 36; v_i++)
                        {
                                set_sprite_tile (v_i, l_tile);
                                l_tile++;
                        }

                }
                else if (l_nr == 2)
                {
                        for (v_i = 28; v_i < 32; v_i++)
                        {
                                set_sprite_tile (v_i,  l_tile);
                                l_tile++;
                        }

                }
                if (v_gri [l_nr] == MOVE_SOUTH) p_gegner_update (l_nr, v_gspl [l_nr], MOVE_SOUTH);
                else if (v_gri [l_nr] == MOVE_EAST) p_gegner_update (l_nr, v_gspl [l_nr], MOVE_EAST);

                p_gegner_move (l_nr); gloop = v_gspeed - 1;
        }
}


///Kolisionsabfrage Gegner auf Spieler
void p_gegner_koli_player (void) BANKED
{
        for (v_kg = 0; v_kg != 3; ++v_kg)
        {
              
                        //mitte
                        if (((v_sxk == v_gxk [v_kg]) && (v_syk == v_gyk [v_kg])) ||
                            //unten
                            ((v_sxk == v_gxk [v_kg]) && (v_syk - 8 == v_gyk [v_kg])) ||
                            ((v_sxk - 8 == v_gxk [v_kg]) && (v_syk - 8 == v_gyk [v_kg])) ||
                            ((v_sxk + 8 == v_gxk [v_kg]) && (v_syk - 8 == v_gyk [v_kg])) ||
                            //oben
                            ((v_sxk == v_gxk [v_kg]) && (v_syk + 8 == v_gyk [v_kg])) ||
                            ((v_sxk + 8 == v_gxk [v_kg]) && (v_syk + 8 == v_gyk [v_kg])) ||
                            ((v_sxk == v_gxk [v_kg] + 8) && (v_syk + 8 == v_gyk [v_kg])) || 
                            //links
                            ((v_sxk + 8 == v_gxk [v_kg]) && (v_syk == v_gyk [v_kg])) ||
                            ((v_sxk + 8 == v_gxk [v_kg]) && (v_syk + 8 == v_gyk [v_kg])) ||
                            ((v_sxk + 8 == v_gxk [v_kg]) && (v_syk - 8 == v_gyk [v_kg])) ||
                            //rechts
                            ((v_sxk - 8 == v_gxk [v_kg]) && (v_syk == v_gyk [v_kg])) ||
                            ((v_sxk - 8 == v_gxk [v_kg]) && (v_syk + 8 == v_gyk [v_kg])) ||
                            ((v_sxk - 8 == v_gxk [v_kg]) && (v_syk - 8 == v_gyk [v_kg])))
                        {       
        		      if (v_gri [v_kg] != MOVE_DOWN)
        		      {
        		              if (v_sflimmtm == 255) { v_slp = v_slp - v_gtp [v_kg] + v_srs; }

                                        if (v_gri [v_kg] == MOVE_NORTH) {v_gri [v_kg] = MOVE_SOUTH; }
                                        else if (v_gri [v_kg] == MOVE_SOUTH) {v_gri [v_kg] = MOVE_NORTH; }

        				if (v_slp > 0)
        				{
        					p_spieler_blink ();
        					p_hud_showLP ();                     
        				}
        			}                        
                }

            

        }

}

void p_gegner_stop (void) BANKED
{
	for (v_a = 0; v_a <= 3; v_a++)
	{
		v_gxk [v_a] = 0; v_gyk [v_a] = 0; v_gri [v_a] = 0;
		p_gegner_move (v_a);
	}
	v_kampf = FALSE;
}

void p_gegner_update (UINT8 l_nr, UINT8 l_tile, UINT8 l_ri) BANKED
{
        if (l_nr == 0)
        {
                for (v_i = 36; v_i < 40; v_i++)
                {
                        set_sprite_tile (v_i, l_tile);
                        l_tile++;
                }
        }
        else if (l_nr == 1)
        {
                for (v_i = 32; v_i < 36; v_i++)
                {
                        set_sprite_tile (v_i, l_tile);
                        l_tile++;
                }

        }
        else if (l_nr == 2)
        {
                for (v_i = 28; v_i < 32; v_i++)
                {
                        set_sprite_tile (v_i,  l_tile);
                        l_tile++;
                }
        }
        v_gri [l_nr] = l_ri; 
}
