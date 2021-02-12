#!/bin/bash

#kill -9 $(ps a | grep bgb.exe | grep -v grep | cut -d ' ' -f1)

date

# /tmp is mounted as tmpfs

echo "Lösche alte Dateien..."

rm -rf /tmp/*.o
rm -rf /tmp/*.asm
rm -rf /tmp/*.sym
rm -rf /tmp/*.lst

if [ -f /tmp/verlies.gb ]
then 
	rm -rf /tmp/verlies.gb
fi

## Daten

echo "Kompiliere..."

#hud
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/hudgui.o daten/hud/hudgui.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/v_statscreen.o daten/hud/v_statscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/rahmen.o gfx/rahmen.c

#karten
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_felsengrund.o daten/karten/k_felsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_gefaengnis.o daten/karten/k_gefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_oger.o daten/karten/k_oger.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_wiesen.o daten/karten/k_wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_feensee.o daten/karten/k_feensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_dorfseefeen.o daten/karten/k_dorfseefeen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/k_eichenwald.o daten/karten/k_eichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/nomap.o daten/karten/nomap.c

#lvl
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/lvldatfelsengrund.o daten/lvl/lvldatfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/lvldatstadtgefaengnis.o daten/lvl/lvldatstadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o /tmp/lvldatwiesen.o daten/lvl/lvldatwiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/lvldatogerhoehlen.o daten/lvl/lvldatogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/lvldatdorfseefeen.o daten/lvl/lvldatdorfseefeen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o /tmp/lvldatfeensee.o daten/lvl/lvldatfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/lvldateichenwald.o daten/lvl/lvldateichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/lvldatalterbaum.o daten/lvl/lvldatalterbaum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/lvldatgebirgspfad.o daten/lvl/lvldatgebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o /tmp/lvldatzwergenheim.o daten/lvl/lvldatzwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldatrotgebirge.o daten/lvl/lvldatrotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldatminen-1.o daten/lvl/lvldatminen-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldatminen-2.o daten/lvl/lvldatminen-2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldatminen-3.o daten/lvl/lvldatminen-3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldatgipfelpfad.o daten/lvl/lvldatgipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o /tmp/lvldattempel-tg.o daten/lvl/lvldattempel-tg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/lvldattempel-kg.o daten/lvl/lvldattempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/lvldattempel-E1.o daten/lvl/lvldattempel-E1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o /tmp/lvldattempel-E2.o daten/lvl/lvldattempel-E2.c

#other
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/gameover.o daten/other/gameover.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/titel.o daten/other/titel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/kredits.o daten/other/kredits.c

#spriteset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/v_spriteset_1.o daten/spritesets/v_spriteset_1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/v_spriteset_2.o daten/spritesets/v_spriteset_2.c

#tileset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o /tmp/tilesets.o daten/tilesets/tilesets.c

#locations
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/locationstxt.o daten/txt/locations/locations.c

#Texte von Npcs und Gegnern
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ausdauerverkaeuferin1.o daten/txt/npcs/ausdauerverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ausdauerverkaeuferin2.o daten/txt/npcs/ausdauerverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/heilertxt1.o daten/txt/npcs/heilertxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/heilertxt2.o daten/txt/npcs/heilertxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/heiltrankverkaeuferin1.o daten/txt/npcs/heiltrankverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/heiltrankverkaeuferin2.o daten/txt/npcs/heiltrankverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/hugotxt.o daten/txt/npcs/hugo.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/max-1.o daten/txt/npcs/max-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/phobetxt1.o daten/txt/npcs/phobetxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/phobetxt2.o daten/txt/npcs/phobetxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/phobetxt3.o daten/txt/npcs/phobetxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/provianthaendler1.o daten/txt/npcs/provianthaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/provianthaendler2.o daten/txt/npcs/provianthaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/saratxt.o daten/txt/npcs/sara.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt1.o daten/txt/npcs/xavertxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt2.o daten/txt/npcs/xavertxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt3.o daten/txt/npcs/xavertxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt4.o daten/txt/npcs/xavertxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt5.o daten/txt/npcs/xavertxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt6.o daten/txt/npcs/xavertxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt7.o daten/txt/npcs/xavertxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt8.o daten/txt/npcs/xavertxt8.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt9.o daten/txt/npcs/xavertxt9.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt10.o daten/txt/npcs/xavertxt10.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt11.o daten/txt/npcs/xavertxt11.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt12.o daten/txt/npcs/xavertxt12.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt13.o daten/txt/npcs/xavertxt13.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt14.o daten/txt/npcs/xavertxt14.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt15.o daten/txt/npcs/xavertxt15.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt16.o daten/txt/npcs/xavertxt16.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt17.o daten/txt/npcs/xavertxt17.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt18.o daten/txt/npcs/xavertxt18.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt19.o daten/txt/npcs/xavertxt19.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt20.o daten/txt/npcs/xavertxt20.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt21.o daten/txt/npcs/xavertxt21.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt22.o daten/txt/npcs/xavertxt22.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt1.o daten/txt/npcs/feenaeltestetxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt2.o daten/txt/npcs/feenaeltestetxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt3.o daten/txt/npcs/feenaeltestetxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt4.o daten/txt/npcs/feenaeltestetxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt5.o daten/txt/npcs/feenaeltestetxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt6.o daten/txt/npcs/feenaeltestetxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt7.o daten/txt/npcs/feenaeltestetxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt8.o daten/txt/npcs/feenaeltestetxt8.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt9.o daten/txt/npcs/feenaeltestetxt9.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt10.o daten/txt/npcs/feenaeltestetxt10.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt11.o daten/txt/npcs/feenaeltestetxt11.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt12.o daten/txt/npcs/feenaeltestetxt12.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt13.o daten/txt/npcs/feenaeltestetxt13.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/feenaeltestetxt14.o daten/txt/npcs/feenaeltestetxt14.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt1.o daten/txt/npcs/ranartxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt2.o daten/txt/npcs/ranartxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt3.o daten/txt/npcs/ranartxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt4.o daten/txt/npcs/ranartxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt5.o daten/txt/npcs/ranartxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt6.o daten/txt/npcs/ranartxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/ranartxt7.o daten/txt/npcs/ranartxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/pilzwesen1txt.o daten/txt/npcs/pilzwesen1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/pilzwesen2txt.o daten/txt/npcs/pilzwesen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/vanyratxt.o daten/txt/npcs/vanyra.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/othertxt.o daten/txt/npcs/others.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/zylratxt1.o daten/txt/npcs/zylra-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/hueterintxt.o daten/txt/npcs/hueterin.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/xavertxt.o daten/txt/npcs/xaver.c

# Texte Portale
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/portal.o daten/txt/portale/portal.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/portalfelsengrund.o daten/txt/portale/portalfelsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/portalfeensee.o daten/txt/portale/portalfeensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/portaleichenwald.o daten/txt/portale/portaleichenwald.c

#Texte Schilder
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/schildtxt1.o daten/txt/schilder/schildertxt.c

#andere Texte
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/schluessel.o daten/txt/schilder/schluessel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/oelloch.o daten/txt/other/oelloch.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/oelloch2.o daten/txt/other/oelloch2.c

#Texte Truhen
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/proviant.o daten/txt/truhen/proviant.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/wappenrock.o daten/txt/truhen/wappenrock.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/magischer_stein.o daten/txt/truhen/magischer_stein.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/kraeuterbeuteltxt.o daten/txt/truhen/kraeuterbeutel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/schaufeltxt.o daten/txt/truhen/schaufel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/zauberstaubtxt.o daten/txt/truhen/zauberstaub.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/portalrunetxt.o daten/txt/truhen/portalrune.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/truhentxt.o daten/txt/truhen/truhentxt.c

## Daten Ende

#lvlablauf
lcc -Wa-l -Wl-m -Wl-j -Wf-bo15 -c -o /tmp/felsengrund.o felsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/stadtgefaengnis.o stadtgefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/ogerhoehlen.o ogerhoehlen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/wiesen.o wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/feensee.o feensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o /tmp/eichenwald.o eichenwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/eichenwald2.o eichenwald2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/alte-baum.o alte-baum.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/gebirgspfad.o gebirgspfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/zwergenheim.o zwergenheim.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/rotgebirge.o rotgebirge.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/minen.o minen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/minen2.o minen2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/minen3.o minen3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/gipfelpfad.o gipfelpfad.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/tempel.o tempel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/tempel-kg.o tempel-kg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/tempel-e1.o tempel-e1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o /tmp/tempel-e2.o tempel-e2.c

#main
lcc -Wa-l -Wl-m -Wl-j -Wa-l -Wl-m -Wl-j -c -o /tmp/verlies.o verlies.c
lcc -Wa-l -Wl-m -Wl-j -c -o /tmp/globals.o globals.c
lcc -Wa-l -Wl-m -Wl-j -c -o /tmp/engine.o engine.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/locations.o locations.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/map.o map.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o /tmp/other.o other.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo4 -c -o /tmp/init.o init.c 
lcc -Wa-l -Wl-m -Wl-j -Wf-bo7 -c -o /tmp/truhen.o truhen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/hud.o hud.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/portale.o portale.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o /tmp/infoscreen.o infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o /tmp/player.o player.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o /tmp/tiledat.o tiledat.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o /tmp/text.o text.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo11 -c -o /tmp/lvlstatus.o lvlstatus.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/items.o items.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/npc.o npc.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/schilder.o schilder.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o /tmp/runen.o runen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o /tmp/gegner.o gegner.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o /tmp/lvlgegner.o lvlgegner.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo11 -c -o /tmp/tiledatg.o tiledatg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo14 -c -o /tmp/boss.o boss.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo21 -c -o /tmp/umgebung.o umgebung.c

cd /tmp/

obj=$(ls | grep [.][o])

echo "Erstelle Rom..."

lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo32 -Wm-yn"VERLIES" -o verlies.gb $obj

echo "Starte Emulation"

if [ -f /tmp/verlies.gb ]
then
	#mgba-qt ../verlies.gb &>/dev/null &

	#bgb.sh /tmp/verlies.gb
	
	#https://github.com/bbbbbr/romusage
	romusage verlies.map

	#killall -15 mednafen

	#flatpak run io.mgba.mGBA /tmp/verlies.gb &>/dev/null &

	#better performance on raspberry pi 400
	#/usr/games/mednafen -psx.dbg_level 0 -video.fs 0 -cheats 0 /tmp/verlies.gb &>/dev/null &
	
	wine "C:\apps\bgb\bgb.exe" /tmp/verlies.gb &>/dev/null &
fi

date

exit 0
