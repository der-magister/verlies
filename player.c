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
//   Kontakt: magister@kabelmail.de

//#pragma bank=9

#include "player.h"
#include "hud.h"
#include "items.h"
#include "gegner.h"
#include "tiledat.h"
#include "boss.h"
#include "engine.h"

///setzt das Spielersprite an angegebene Position
void p_spieler_set_sprite (void) __banked
{
        //Sprites bewegen
        move_sprite (0, v_sxk, v_syk);
        move_sprite (1, v_sxk, v_syk + 8);
        move_sprite (2, v_sxk + 8, v_syk);
        move_sprite (3, v_sxk + 8, v_syk + 8);

        //Mapkoordinate setzen
        //v_smk = ((v_sxk - 16) / 8) + 18 * ((v_syk - 24) / 8);
        v_smk = p_calcMap (v_sxk, v_syk);
}

///Init der Spielerdaten am Start des Spieles
void p_spieler_init (void) __banked
{
        p_spieler_setSprite (1);
	
        //Attackspriteverbund
        set_sprite_tile (5, 108);
        set_sprite_tile (6, 109);
        set_sprite_tile (7, 110);
        set_sprite_tile (8, 111);

        v_smlp = 3; v_slp = v_smlp; v_srs = 0; v_stp = 0; v_smaus = 3; v_saus = v_smaus; v_sat = 0; v_smat = 3;
        v_sht = 0; v_smht = 5; v_sgo = 0; v_smgo = 15; v_spr = 5; v_smpr = 5; v_ske = 0; v_shk = 0; v_smhk = 2;
        v_ssc = 0; v_sstaub = 0; v_smstaub = 2; v_portalrune = FALSE; v_sused = FALSE; v_spitzhacke = FALSE;
        v_walk = TRUE; v_serz = 0; v_stoff = 0;

}

//Spritenummerwechsel fuer Trefferanimation
void p_spieler_setSprite (UINT8 l_set) __banked
{
        if (l_set == 1)
        {
                set_sprite_tile (0, 124);
                set_sprite_tile (1, 125);
                set_sprite_tile (2, 126);
                set_sprite_tile (3, 127);
        }
        else if (l_set == 2)
        {
                set_sprite_tile (0, 120);
                set_sprite_tile (1, 121);
                set_sprite_tile (2, 122);
                set_sprite_tile (3, 123);
        }
        //Heiltrank
        else if (l_set == 3)
        {
                set_sprite_tile (0, 116);
                set_sprite_tile (1, 117);
                set_sprite_tile (2, 118);
                set_sprite_tile (3, 119);
        }
}

void p_spieler_blink (void) __banked
{
        p_spieler_setSprite (2);
        v_sflimmtm = 0;
}

void p_spieler_blink_off (void) __banked
{
        p_spieler_setSprite (1);
        v_sflimmtm = 255;
}


//Bewegung des Spielersprites Richtung Norden
void p_spieler_move_north (void) BANKED 
{
        v_sri = MOVE_NORTH;

        if (v_syk != 24)
        {
                v_tile [1] = v_leveldaten [v_smk - 18];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk - 17];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) { 
                                v_syk -= 8;
                                p_spieler_after_move ();
                        }       
                }
        }
}

//Bewegung des Spielersprites Richtung Süden
void p_spieler_move_south (void) BANKED
{
        v_sri = MOVE_SOUTH;

        if (v_syk != 120)
        {
                v_tile [1] = v_leveldaten [v_smk + 36];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 37];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) { 
                                v_syk += 8;
                                p_spieler_after_move ();
                        }
                }
        }
}

//Bewegung des Spielersprites Richtung Westen
void p_spieler_move_west (void) BANKED
{
        v_sri = MOVE_WEST;

        if (v_sxk != 16)
        {
                v_tile [1] = v_leveldaten [v_smk - 1];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 17];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) { 
                                v_sxk -= 8;
                                p_spieler_after_move ();
                        }
                }
        }
}

//Bewegung des Spielersprites Richtung Osten
void p_spieler_move_east (void) BANKED
{
        v_sri = MOVE_EAST;

        if (v_sxk != 144)
        {
                v_tile [1] = v_leveldaten [v_smk + 2];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 20];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) { 
                                v_sxk += 8;
                                p_spieler_after_move ();
                        }
                }
        }
}

void p_spieler_after_move (void) BANKED
{
        p_spieler_set_sprite ();
        ++v_ssc;
        p_proviant ();
        p_hud_showMK ();
        p_hud_showXYK ();
}




///Bewegungroutine des Spielersprites
/*void p_spieler_move  (UINT8 l_ri) __banked
{
        v_sri = l_ri;
        v_walk = TRUE; 

        //Nord
        if ((l_ri == MOVE_NORTH) && (v_syk != 24))
        {
                v_tile [1] = v_leveldaten [v_smk - 18];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk - 17];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) v_syk -= 8;
                }
        }
        //Sued
        else if ((l_ri == MOVE_SOUTH) && (v_syk != 120))
        {
                v_tile [1] = v_leveldaten [v_smk + 36];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 37];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) v_syk += 8;
                }
        }
        //Ost
        else if ((l_ri == MOVE_EAST) && (v_sxk != 144))
        {
                v_tile [1] = v_leveldaten [v_smk + 2];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 20];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) v_sxk += 8;
                }
        }
        //West
        else if ((l_ri == MOVE_WEST) && (v_sxk != 16))
        {
                v_tile [1] = v_leveldaten [v_smk - 1];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 17];
                        v_walk = p_spieler_koli ();

                        if (v_walk == TRUE) v_sxk -= 8;
                }
        }

        if (v_walk == TRUE)
        { 
                p_spieler_set_sprite ();
                ++v_ssc;
                p_proviant ();
                p_hud_showMK ();
                p_hud_showXYK ();
        }
}*/

///Angriff des Spielers
void p_spieler_attack () __banked
{
        //Nord
        if ((v_sri == MOVE_NORTH) && (v_syk != 24))
        {
                //Kolisionsdaten, falls nicht erfüllt, dann Angriff einleiten
                v_tile [1] = v_leveldaten [v_smk - 18];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        if (v_walk == TRUE)
                        {
                                v_tile [1] = v_leveldaten [v_smk - 17];
                                v_walk = p_spieler_koli ();
                        }
                        if (v_walk == TRUE)
                        {
                                move_sprite (5, v_sxk, v_syk - 16);  //Attacksprite setzen
                                move_sprite (6, v_sxk, v_syk - 8);
                                move_sprite (7, v_sxk + 8, v_syk - 16);
                                move_sprite (8, v_sxk + 8, v_syk - 8);
                                v_kampflooptime = 0; v_attack = 1;

                                for (v_pg = 0; v_pg != 3; ++v_pg)
                                {

                                        if (v_smk - 36 == v_gmk [v_pg])
                                        {
                                                v_glp [v_pg] = v_glp [v_pg] - v_stp;
                                        }
                                }
                        }
                }
        }
	//Süd
	else if ((v_sri == MOVE_SOUTH) && (v_syk != 120))
	{
		//Kolisionsdaten
		v_tile [1] = v_leveldaten [v_smk + 36];
		v_walk = p_spieler_koli ();

		if (v_walk == TRUE)
		{
                        v_tile [1] = v_leveldaten [v_smk + 37];
                        v_walk = p_spieler_koli ();
		}
		if (v_walk == TRUE)
		{
			move_sprite (5, v_sxk, v_syk + 16);		
			move_sprite (6, v_sxk, v_syk + 24);		
			move_sprite (7, v_sxk + 8, v_syk + 16);             
			move_sprite (8, v_sxk + 8, v_syk + 24);
			v_kampflooptime = 0; v_attack = 1;
			
			for (v_pg = 0; v_pg != 3; ++v_pg)
                        {
				if (v_smk + 36 == v_gmk [v_pg])
                                {
					v_glp [v_pg] = v_glp [v_pg] - v_stp;
                                }
                        }
			
		}
	}
  
	//West
        if ((v_sri == MOVE_WEST) && (v_sxk != 16))
        {

                v_tile [1] = v_leveldaten [v_smk - 1];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 17];
                        v_walk = p_spieler_koli ();
                }
                if (v_walk == TRUE)
                {
                        move_sprite (5, v_sxk - 16, v_syk);
                        move_sprite (6, v_sxk - 16, v_syk + 8);
			move_sprite (7, v_sxk - 8, v_syk);
			move_sprite (8, v_sxk - 8, v_syk + 8);
			v_kampflooptime = 0; v_attack = 1;
			
			for (v_pg = 0; v_pg != 3; ++v_pg)
                        {
				if (v_smk - 2 == v_gmk [v_pg])
                                {
					v_glp [v_pg] = v_glp [v_pg] - v_stp;
                                }
                        }
                
		}
	}
	//Ost
	if ((v_sri == MOVE_EAST) && (v_sxk != 144))
	{
		v_tile [1] = v_leveldaten [v_smk + 2];
                v_walk = p_spieler_koli ();

                if (v_walk == TRUE)
                {
                        v_tile [1] = v_leveldaten [v_smk + 20];
                        v_walk = p_spieler_koli ();
                }
                if (v_walk == TRUE)
                {
                        move_sprite (5, v_sxk + 16, v_syk);
                        move_sprite (6, v_sxk + 16, v_syk + 8);
                        move_sprite (7, v_sxk + 24, v_syk);
                        move_sprite (8, v_sxk + 24, v_syk + 8);
                        v_kampflooptime = 0; v_attack = 1;
                        
                        for (v_pg = 0; v_pg != 3; ++v_pg)
                        {
				if (v_smk + 2 == v_gmk [v_pg])
                                {
					v_glp [v_pg] = v_glp [v_pg] - v_stp;
                                }
                        }
                }
	}

        if ((v_glp [0] <= 0) && (v_gri [0] != 0))
        {
                v_gmk [0] = 0; v_gxk [0] = 0; v_gyk [0] = 0;
                
		//bleibt auskommentiert
		/* move_sprite (36, v_gxk [0], v_gyk [0]);
                move_sprite (37, v_gxk [0], v_gyk [0]);
		move_sprite (38, v_gxk [0], v_gyk [0]);
                move_sprite (39, v_gxk [0], v_gyk [0]);*/
		//end

                p_gegner_hide_1 ();
                v_gri [0] = 0;
                p_collectGold ();

                if (v_bosskampf == TRUE)
                {
                        v_bosskampf = FALSE;
                        if (v_lvl == 66) { p_gegner_ogerboss_end (); }
			else if (v_lvl == 165) { p_gegner_pilzwesen_end (); }
                }
          }
          if ((v_glp [1] <= 0) && (v_gri [1] != 0))
          {
                v_gmk [1] = 0; v_gxk [1] = 0; v_gyk [1] = 0; v_gri [1] = 0;
                p_gegner_hide_2 ();
                p_collectGold ();
          }
          if ((v_glp [2] <= 0) && (v_gri [2] != 0))
          {
                v_gmk [2] = 0; v_gxk [2] = 0; v_gyk [2] = 0;
                p_gegner_hide_3 ();
                v_gri [2] = 0;
                p_collectGold ();
          }
}

///Versteckt Attackesprites 
void p_spieler_hideAttack (void) __banked
{
        move_sprite (5, 0, 0);
        move_sprite (6, 0, 0);
        move_sprite (7, 0, 0);
        move_sprite (8, 0, 0);
}

void p_spieler_inc_ausdauer (void) __banked
{
        if (v_saus < v_smaus) ++v_saus;
        p_hud_showAD ();
        v_ausdauertimer = 0;
}
