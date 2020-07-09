SRC1=init.c engine.c hud.c player.c infoscreen.c lvlstatus.c schilder.c text.c locations.c npc.c map.c truhen.c gegner.c items.c other.c verlies.c

SRCDATMAIN=daten/hud/hudgui.c daten/hud/v_infoscreen.c daten/hud/v_statscreen.c

SRCDATTILESETS=daten/tilesets/v_felsengrund_1.c daten/tilesets/stadtgefaengnis.c

SRCDATSPRITESETS=daten/spritesets/v_spriteset_1.c

SRCDATLVL=tiledat.c tiledatg.c daten/lvl/v_lvl1a.c daten/lvl/v_lvl5.c daten/lvl/v_lvl6.c daten/lvl/v_lvl7.c daten/lvl/v_lvl8.c daten/lvl/v_lvl9.c daten/lvl/v_lvl10.c daten/lvl/v_lvl11.c daten/lvl/v_lvl12.c daten/lvl/v_lvl13.c

SRCSCHILDDAT=daten/txt/schilder/schildtxt1.c daten/txt/schilder/schildtxt1b.c gfx/rahmen.c daten/txt/schilder/schluessel.c

SRCTRUHEDAT=daten/txt/truhen/schwerttruhe.c daten/txt/truhen/kartetruhe.c daten/txt/truhen/truheleer.c daten/txt/truhen/erhalten.c daten/txt/truhen/goldvoll.c daten/txt/truhen/proviant.c

SRCLOCATONDAT=daten/txt/locations/felsengrund.c daten/txt/locations/stadtgefaengnis.c

SRCNPCTXT=daten/txt/npcs/heilertxt1.c daten/txt/npcs/heilertxt2.c daten/txt/npcs/xavertxt1.c daten/txt/npcs/xavertxt2.c daten/txt/npcs/xavertxt3.c daten/txt/npcs/xavertxt4.c daten/txt/npcs/xavertxt5.c daten/txt/npcs/xavertxt6.c daten/txt/npcs/xavertxt7.c daten/txt/npcs/xavertxt8.c daten/txt/npcs/saratxt1.c daten/txt/npcs/saratxt2.c daten/txt/npcs/saratxt3.c daten/txt/npcs/saratxt4.c daten/txt/npcs/phobetxt1.c daten/txt/npcs/phobetxt2.c daten/txt/npcs/phobetxt3.c

SRCMAPDAT=daten/karten/k_felsengrund.c daten/karten/k_gefaengnis.c

SRCOTHER=daten/other/gameover.c daten/other/techend.c daten/other/kredits.c daten/other/titel.c

SRCLVL=lvl1.c l_stadtgefaengnis.c

SRC=$(SRC1) $(SRCDATMAIN) $(SRCDATTILESETS) $(SRCDATSPRITESETS) $(SRCDATLVL) $(SRCLVL) $(SRCSCHILDDAT) $(SRCLOCATONDAT) $(SRCNPCTXT) $(SRCMAPDAT) $(SRCTRUHEDAT) $(SRCOTHER)

BIN=verlies.gb

SIZE=medium
#SIZE=small

#GBDK_Home=c:/apps/gbdk
GBDK_Home=/opt/gbdk


LIB = $(GBDK_Home)/lib/$(SIZE)/rgbds/gbz80/gbz80.lib $(GBDK_Home)/lib/$(SIZE)/rgbds/gb/gb.lib
CRT0 = $(GBDK_Home)/lib/$(SIZE)/rgbds/gb/crt0.o

OBJ = $(SRC:.c=.o)

CC = $(GBDK_Home)/bin/sdcc -mgbz80 --asm=rgbds -I $(GBDK_Home)/include -I $(GBDK_Home)/include/asm
all: $(BIN)

clean:
	rm $(OBJ)
	rm *.asm
	rm *.map
	rm *.sym
	rm *.lnk
	rm *.gb
	
%.o: %.s

$(BIN):	$(OBJ)
	$(CC) $(CRT0) $(OBJ) $(LIB)
	mv a.gb $(BIN)
	rgbfix -p -v -tverlies $(BIN) 
  
$(LIB): $(LIBOBJ)
	xlib $@ a $(LIBOBJ)

%.o: %.c
	$(CC) -c $<

%.asm: %.s
	astorgb.pl $< > $@

%.o: %.asm
	rgbasm -o$@ $<

%.s: %.ms
	maccer -o $@ $<
