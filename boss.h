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
