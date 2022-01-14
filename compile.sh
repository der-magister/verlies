#!/bin/bash

date

# tmp is mounted as tmpfs

echo "Lösche alte Dateien..."

if [ -d /tmp/obj ]
then
	rm -rf /tmp/obj/*.o
	rm -rf /tmp/obj/*.asm
	rm -rf /tmp/obj/*.sym
	rm -rf /tmp/obj/*.lst
	rm -rf /tmp/obj/*.noi
	rm -rf /tmp/obj/*.mapii
else 
	mkdir /tmp/obj
fi

if [ -f /tmp/obj/verlies.gb ]
then 
	rm -rf /tmp/obj/verlies.gb
fi

## Daten

echo "Kompiliere..."

#hud
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/hudgui.o daten/hud/hudgui.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/v_statscreen.o daten/hud/v_statscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/rahmen.o gfx/rahmen.c

#karten
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/maps.o daten/karten/maps.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/nomap.o daten/karten/nomap.c

#lvl
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/obj/lvldatfelsengrund.o daten/lvl/lvldatfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/obj/lvldatstadtgefaengnis.o daten/lvl/lvldatstadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/obj/lvldatwiesen.o daten/lvl/lvldatwiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/obj/lvldatogerhoehlen.o daten/lvl/lvldatogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/obj/lvldatdorfseefeen.o daten/lvl/lvldatdorfseefeen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/obj/lvldatfeensee.o daten/lvl/lvldatfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/obj/lvldateichenwald.o daten/lvl/lvldateichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/obj/lvldatalterbaum.o daten/lvl/lvldatalterbaum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/obj/lvldatgebirgspfad.o daten/lvl/lvldatgebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/obj/lvldatzwergenheim.o daten/lvl/lvldatzwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldatrotgebirge.o daten/lvl/lvldatrotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldatminen-1.o daten/lvl/lvldatminen-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldatminen-2.o daten/lvl/lvldatminen-2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldatminen-3.o daten/lvl/lvldatminen-3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldatgipfelpfad.o daten/lvl/lvldatgipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/obj/lvldattempel-tg.o daten/lvl/lvldattempel-tg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/obj/lvldattempel-kg.o daten/lvl/lvldattempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/obj/lvldattempel-E1.o daten/lvl/lvldattempel-E1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/obj/lvldattempel-E2.o daten/lvl/lvldattempel-E2.c

#other
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/gameover.o daten/other/gameover.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/titel.o daten/other/titel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/kredits.o daten/other/kredits.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/anleitung.o daten/other/anleitung.c

#spriteset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/obj/v_spriteset_1.o daten/spritesets/v_spriteset_1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/obj/v_spriteset_2.o daten/spritesets/v_spriteset_2.c

#tileset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/obj/tilesets.o daten/tilesets/tilesets.c

#locations
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/locationstxt.o daten/txt/locations/locations.c

#Texte von Npcs und Gegnern
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ausdauerverkaeuferin.o daten/txt/npcs/ausdauerverkaeuferin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/heilertxt.o daten/txt/npcs/heilertxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/heiltrankverkaeuferin.o daten/txt/npcs/heiltrankverkaeuferin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/hugotxt.o daten/txt/npcs/hugo.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/max-1.o daten/txt/npcs/max-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/phobetxt1.o daten/txt/npcs/phobetxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/provianthaendler.o daten/txt/npcs/provianthaendler.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/saratxt.o daten/txt/npcs/sara.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/feenaeltestetxt.o daten/txt/npcs/feenaeltestetxt.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt1.o daten/txt/npcs/ranartxt1.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt2.o daten/txt/npcs/ranartxt2.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt3.o daten/txt/npcs/ranartxt3.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt4.o daten/txt/npcs/ranartxt4.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt5.o daten/txt/npcs/ranartxt5.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt6.o daten/txt/npcs/ranartxt6.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt7.o daten/txt/npcs/ranartxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/ranartxt.o daten/txt/npcs/ranartxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/pilzwesen1txt.o daten/txt/npcs/pilzwesen1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/pilzwesen2txt.o daten/txt/npcs/pilzwesen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/vanyratxt.o daten/txt/npcs/vanyra.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/othertxt.o daten/txt/npcs/others.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/zylratxt1.o daten/txt/npcs/zylra-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/hueterintxt.o daten/txt/npcs/hueterin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/xavertxt.o daten/txt/npcs/xaver.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/kraeuterhaendlertxt.o daten/txt/npcs/kraeuterhaendler.c

# Texte Portale
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/portaltxt.o daten/txt/portale/portal.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/portalfelsengrund.o daten/txt/portale/portalfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/portalfeensee.o daten/txt/portale/portalfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/portaleichenwald.o daten/txt/portale/portaleichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/portalzwergenheim.o daten/txt/portale/portalzwergenheim.c

#Texte Schilder
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/schildtxt1.o daten/txt/schilder/schildertxt.c

#andere Texte
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/schluessel.o daten/txt/schilder/schluessel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/oelloch.o daten/txt/other/oelloch.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/oelloch2.o daten/txt/other/oelloch2.c

#Texte Truhen
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/proviant.o daten/txt/truhen/proviant.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/wappenrock.o daten/txt/truhen/wappenrock.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/magischer_stein.o daten/txt/truhen/magischer_stein.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/kraeuterbeuteltxt.o daten/txt/truhen/kraeuterbeutel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/schaufeltxt.o daten/txt/truhen/schaufel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/zauberstaubtxt.o daten/txt/truhen/zauberstaub.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/portalrunetxt.o daten/txt/truhen/portalrune.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/truhentxt.o daten/txt/truhen/truhentxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/alphatxt.o daten/txt/other/alpha.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/introtxt.o daten/txt/other/intro.c

## Daten Ende

#lvlablauf
lcc -Wa-l -Wl-m -Wl-j -Wf-bo15 -c -o /tmp/obj/felsengrund.o felsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/obj/stadtgefaengnis.o stadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/obj/ogerhoehlen.o ogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/obj/wiesen.o wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/obj/feensee.o feensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/obj/eichenwald.o eichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/eichenwald2.o eichenwald2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/alte-baum.o alte-baum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/gebirgspfad.o gebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/zwergenheim.o zwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/rotgebirge.o rotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/minen.o minen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/minen2.o minen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/minen3.o minen3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/gipfelpfad.o gipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/tempel.o tempel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/tempel-kg.o tempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/tempel-e1.o tempel-e1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/obj/tempel-e2.o tempel-e2.c

#main
lcc -Wa-l  -Wl-m -Wl-j -Wa-l -Wl-m -Wl-j -c -o /tmp/obj/verlies.o verlies.c
lcc -Wa-l  -Wl-m -Wl-j -c -o /tmp/obj/globals.o globals.c
lcc -Wa-l  -Wl-m -Wl-j -c -o /tmp/obj/engine.o engine.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/locations.o locations.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/map.o map.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/obj/other.o other.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo4 -c -o /tmp/obj/init.o init.c 
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo7 -c -o /tmp/obj/truhen.o truhen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/hud.o hud.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/portale.o portale.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/obj/infoscreen.o infoscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo9 -c -o /tmp/obj/player.o player.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo9 -c -o /tmp/obj/tiledat.o tiledat.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/obj/text.o text.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo11 -c -o /tmp/obj/lvlstatus.o lvlstatus.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo11 -c -o /tmp/obj/tiledatg.o tiledatg.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/obj/items.o items.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/obj/npc.o npc.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/obj/schilder.o schilder.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/obj/runen.o runen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo13 -c -o /tmp/obj/lvlgegner.o lvlgegner.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo14 -c -o /tmp/obj/boss.o boss.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo14 -c -o /tmp/obj/gegner.o gegner.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo21 -c -o /tmp/obj/umgebung.o umgebung.c

cd /tmp/obj/

files=$(ls | grep [.][o])

echo "Erstelle Rom..."

lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo32 -Wm-yn"VERLIES" -o verlies.gb $files

if [ -f verlies.gb ]
then

#	echo "Starte Emulation"
	
	#mgba-qt ../verlies.gb &>/dev/null &
	
	#https://github.com/bbbbbr/romusage
	romusage verlies.map

	#cp /tmp/obj/verlies.gb /home/magister/repos/verlies/verlies.gb
	#killall -15 mednafen

	#flatpak run io.mgba.mGBA /tmp/obj/verlies.gb &>/dev/null &

	#better performance on raspberry pi 400
	#/usr/games/mednafen -psx.dbg_level 0 -video.fs 0 -gb.system_type dmg -gb.xscale 4,000000 -gb.yscale 4,000000 /tmp/obj/verlies.gb &>/dev/null &
	
#	wine "C:\apps\bgb\bgb.exe" /tmp/obj/verlies.gb &>/dev/null &
	#bgb.exe verlies.gb &

	#bgb verlies.gb
	#emulicious.sh /tmp/obj/verlies.gb

fi

cd ..

date

exit 0

#2022, mail@heikowolf.info
