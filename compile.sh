#!/bin/bash

#kill -9 $(ps a | grep bgb.exe | grep -v grep | cut -d ' ' -f1)

date

# obj is mounted as tmpfs

echo "Lösche alte Dateien..."

rm -rf obj/*.o
rm -rf obj/*.asm
rm -rf obj/*.sym
rm -rf obj/*.lst
rm -rf obj/*.noi
rm -rf obj/*.map

if [ -f obj/verlies.gb ]
then 
	rm -rf obj/verlies.gb
fi

## Daten

echo "Kompiliere..."

#hud
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/hudgui.o daten/hud/hudgui.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_statscreen.o daten/hud/v_statscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo10 -c -o obj/rahmen.o gfx/rahmen.c

#karten
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/maps.o daten/karten/maps.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/nomap.o daten/karten/nomap.c

#lvl
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatfelsengrund.o daten/lvl/lvldatfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatstadtgefaengnis.o daten/lvl/lvldatstadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatwiesen.o daten/lvl/lvldatwiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatogerhoehlen.o daten/lvl/lvldatogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatdorfseefeen.o daten/lvl/lvldatdorfseefeen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatfeensee.o daten/lvl/lvldatfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldateichenwald.o daten/lvl/lvldateichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatalterbaum.o daten/lvl/lvldatalterbaum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatgebirgspfad.o daten/lvl/lvldatgebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatzwergenheim.o daten/lvl/lvldatzwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatrotgebirge.o daten/lvl/lvldatrotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatminen-1.o daten/lvl/lvldatminen-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatminen-2.o daten/lvl/lvldatminen-2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatminen-3.o daten/lvl/lvldatminen-3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatgipfelpfad.o daten/lvl/lvldatgipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldattempel-tg.o daten/lvl/lvldattempel-tg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o obj/lvldattempel-kg.o daten/lvl/lvldattempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o obj/lvldattempel-E1.o daten/lvl/lvldattempel-E1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o obj/lvldattempel-E2.o daten/lvl/lvldattempel-E2.c

#other
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/gameover.o daten/other/gameover.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/titel.o daten/other/titel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/kredits.o daten/other/kredits.c

#spriteset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/v_spriteset_1.o daten/spritesets/v_spriteset_1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/v_spriteset_2.o daten/spritesets/v_spriteset_2.c

#tileset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/tilesets.o daten/tilesets/tilesets.c

#locations
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/locationstxt.o daten/txt/locations/locations.c

#Texte von Npcs und Gegnern
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin.o daten/txt/npcs/ausdauerverkaeuferin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt.o daten/txt/npcs/heilertxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin.o daten/txt/npcs/heiltrankverkaeuferin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt.o daten/txt/npcs/hugo.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/max-1.o daten/txt/npcs/max-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt1.o daten/txt/npcs/phobetxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler.o daten/txt/npcs/provianthaendler.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt.o daten/txt/npcs/sara.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt.o daten/txt/npcs/feenaeltestetxt.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt1.o daten/txt/npcs/ranartxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt2.o daten/txt/npcs/ranartxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt3.o daten/txt/npcs/ranartxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt4.o daten/txt/npcs/ranartxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt5.o daten/txt/npcs/ranartxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt6.o daten/txt/npcs/ranartxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt7.o daten/txt/npcs/ranartxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/pilzwesen1txt.o daten/txt/npcs/pilzwesen1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/pilzwesen2txt.o daten/txt/npcs/pilzwesen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/vanyratxt.o daten/txt/npcs/vanyra.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/othertxt.o daten/txt/npcs/others.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zylratxt1.o daten/txt/npcs/zylra-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hueterintxt.o daten/txt/npcs/hueterin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt.o daten/txt/npcs/xaver.c

# Texte Portale
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portal.o daten/txt/portale/portal.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portalfelsengrund.o daten/txt/portale/portalfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portalfeensee.o daten/txt/portale/portalfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portaleichenwald.o daten/txt/portale/portaleichenwald.c

#Texte Schilder
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1.o daten/txt/schilder/schildertxt.c

#andere Texte
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluessel.o daten/txt/schilder/schluessel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/oelloch.o daten/txt/other/oelloch.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/oelloch2.o daten/txt/other/oelloch2.c

#Texte Truhen
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/proviant.o daten/txt/truhen/proviant.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/wappenrock.o daten/txt/truhen/wappenrock.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/magischer_stein.o daten/txt/truhen/magischer_stein.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/kraeuterbeuteltxt.o daten/txt/truhen/kraeuterbeutel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schaufeltxt.o daten/txt/truhen/schaufel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubtxt.o daten/txt/truhen/zauberstaub.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/portalrunetxt.o daten/txt/truhen/portalrune.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/truhentxt.o daten/txt/truhen/truhentxt.c

## Daten Ende

#lvlablauf
lcc -Wa-l -Wl-m -Wl-j -Wf-bo15 -c -o obj/felsengrund.o felsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/stadtgefaengnis.o stadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/ogerhoehlen.o ogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/wiesen.o wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/feensee.o feensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/eichenwald.o eichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/eichenwald2.o eichenwald2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/alte-baum.o alte-baum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/gebirgspfad.o gebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/zwergenheim.o zwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/rotgebirge.o rotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/minen.o minen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/minen2.o minen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/minen3.o minen3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/gipfelpfad.o gipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/tempel.o tempel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/tempel-kg.o tempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/tempel-e1.o tempel-e1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/tempel-e2.o tempel-e2.c

#main
lcc -Wa-l  -Wl-m -Wl-j -Wa-l -Wl-m -Wl-j -c -o obj/verlies.o verlies.c
lcc -Wa-l  -Wl-m -Wl-j -c -o obj/globals.o globals.c
lcc -Wa-l  -Wl-m -Wl-j -c -o obj/engine.o engine.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o obj/locations.o locations.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o obj/map.o map.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo3 -c -o obj/other.o other.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo4 -c -o obj/init.o init.c 
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo7 -c -o obj/truhen.o truhen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/hud.o hud.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/portale.o portale.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo8 -c -o obj/infoscreen.o infoscreen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo9 -c -o obj/player.o player.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo9 -c -o obj/tiledat.o tiledat.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo10 -c -o obj/text.o text.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo11 -c -o obj/lvlstatus.o lvlstatus.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o obj/items.o items.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o obj/npc.o npc.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o obj/schilder.o schilder.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo12 -c -o obj/runen.o runen.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo13 -c -o obj/gegner.o gegner.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo13 -c -o obj/lvlgegner.o lvlgegner.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo11 -c -o obj/tiledatg.o tiledatg.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo14 -c -o obj/boss.o boss.c
lcc -Wa-l  -Wl-m -Wl-j -Wf-bo21 -c -o obj/umgebung.o umgebung.c

cd obj/

obj=$(ls | grep [.][o])

echo "Erstelle Rom..."

lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo32 -Wm-yn"VERLIES" -o verlies.gb $obj

if [ -f verlies.gb ]
then

#	echo "Starte Emulation"
	
	#mgba-qt ../verlies.gb &>/dev/null &
	
	#https://github.com/bbbbbr/romusage
	romusage verlies.map

	#cp obj/verlies.gb /home/magister/repos/verlies/verlies.gb
	#killall -15 mednafen

	#flatpak run io.mgba.mGBA obj/verlies.gb &>/dev/null &

	#better performance on raspberry pi 400
	#/usr/games/mednafen -psx.dbg_level 0 -video.fs 0 -gb.system_type dmg -gb.xscale 4,000000 -gb.yscale 4,000000 obj/verlies.gb &>/dev/null &
	
#	wine "C:\apps\bgb\bgb.exe" obj/verlies.gb &>/dev/null &
	BGB.exe C:\\magister\\repos\\verlies\\obj\\verlies.gb &

	#bgb.sh verlies.gb

fi

cd ..

date

exit 0
