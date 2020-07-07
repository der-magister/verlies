#ifndef _BOSS_H_
#define _BOSS_H_ 

extern void p_boss_init () BANKED;
extern void p_gegner_set_boss (UINT8 v_nr) BANKED;
extern void p_gegner_ogerboss () BANKED;
extern void p_gegner_ogerboss_end () BANKED;
extern void p_gegner_pilzwesen (void) BANKED;
extern void p_boss_effect_pilzwesen (void) BANKED;
extern void p_boss_treffer (void) BANKED; 
/* void p_gegner_bosskampf1 () BANKED;
void p_gegner_bosskampf2 () BANKED;
void p_gegner_bosskampf3 () BANKED; */

#endif
