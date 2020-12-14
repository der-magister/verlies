#!/bin/bash

kill -9 $(ps aux | grep bgb.exe | cut -d ' ' -f 2)

date

echo "Lösche alte Dateien..."

rm -rf obj/*.o

if [ -f verlies.gb ]
then 
	rm -rf verlies.gb
fi

## Daten

echo "Kompiliere..."

#hud
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hudgui.o daten/hud/hudgui.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_statscreen.o daten/hud/v_statscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/rahmen.o gfx/rahmen.c

#karten
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_felsengrund.o daten/karten/k_felsengrund.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_gefaengnis.o daten/karten/k_gefaengnis.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_oger.o daten/karten/k_oger.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_wiesen.o daten/karten/k_wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_feensee.o daten/karten/k_feensee.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_dorfseefeen.o daten/karten/k_dorfseefeen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_eichenwald.o daten/karten/k_eichenwald.c
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
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin1.o daten/txt/npcs/ausdauerverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin2.o daten/txt/npcs/ausdauerverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt1.o daten/txt/npcs/heilertxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt2.o daten/txt/npcs/heilertxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin1.o daten/txt/npcs/heiltrankverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin2.o daten/txt/npcs/heiltrankverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt.o daten/txt/npcs/hugo.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/max-1.o daten/txt/npcs/max-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt1.o daten/txt/npcs/phobetxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt2.o daten/txt/npcs/phobetxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt3.o daten/txt/npcs/phobetxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler1.o daten/txt/npcs/provianthaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler2.o daten/txt/npcs/provianthaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt.o daten/txt/npcs/sara.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt1.o daten/txt/npcs/xavertxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt2.o daten/txt/npcs/xavertxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt3.o daten/txt/npcs/xavertxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt4.o daten/txt/npcs/xavertxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt5.o daten/txt/npcs/xavertxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt6.o daten/txt/npcs/xavertxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt7.o daten/txt/npcs/xavertxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt8.o daten/txt/npcs/xavertxt8.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt9.o daten/txt/npcs/xavertxt9.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt10.o daten/txt/npcs/xavertxt10.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt11.o daten/txt/npcs/xavertxt11.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt12.o daten/txt/npcs/xavertxt12.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt13.o daten/txt/npcs/xavertxt13.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt14.o daten/txt/npcs/xavertxt14.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt15.o daten/txt/npcs/xavertxt15.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt16.o daten/txt/npcs/xavertxt16.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt17.o daten/txt/npcs/xavertxt17.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt18.o daten/txt/npcs/xavertxt18.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt19.o daten/txt/npcs/xavertxt19.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt20.o daten/txt/npcs/xavertxt20.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt21.o daten/txt/npcs/xavertxt21.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt22.o daten/txt/npcs/xavertxt22.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt1.o daten/txt/npcs/feenaeltestetxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt2.o daten/txt/npcs/feenaeltestetxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt3.o daten/txt/npcs/feenaeltestetxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt4.o daten/txt/npcs/feenaeltestetxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt5.o daten/txt/npcs/feenaeltestetxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt6.o daten/txt/npcs/feenaeltestetxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt7.o daten/txt/npcs/feenaeltestetxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt8.o daten/txt/npcs/feenaeltestetxt8.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt9.o daten/txt/npcs/feenaeltestetxt9.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt10.o daten/txt/npcs/feenaeltestetxt10.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt11.o daten/txt/npcs/feenaeltestetxt11.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt12.o daten/txt/npcs/feenaeltestetxt12.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt13.o daten/txt/npcs/feenaeltestetxt13.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt14.o daten/txt/npcs/feenaeltestetxt14.c
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
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauertrank.o daten/txt/truhen/ausdauertrank.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/erhalten.o daten/txt/truhen/erhalten.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/goldvoll.o daten/txt/truhen/goldvoll.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrank.o daten/txt/truhen/heiltrank.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/kartetruhe.o daten/txt/truhen/kartetruhe.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/proviant.o daten/txt/truhen/proviant.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluesselt.o daten/txt/truhen/schluessel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/truheleer.o daten/txt/truhen/truheleer.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/brotbuechse-1.o daten/txt/truhen/brotbuechse-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/brotbuechse-2.o daten/txt/truhen/brotbuechse-2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/geldkatze1.o daten/txt/truhen/geldkatze1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/geldkatze2.o daten/txt/truhen/geldkatze2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/wappenrock.o daten/txt/truhen/wappenrock.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/magischer_stein.o daten/txt/truhen/magischer_stein.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/aspektwaldtxt.o daten/txt/truhen/aspektwald.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/kraeuterbeuteltxt.o daten/txt/truhen/kraeuterbeutel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schaufeltxt.o daten/txt/truhen/schaufel.c

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

#main
lcc -Wa-l -Wl-m -Wl-j -Wa-l -Wl-m -Wl-j -c -o obj/verlies.o verlies.c
lcc -Wa-l -Wl-m -Wl-j -c -o obj/globals.o globals.c
lcc -Wa-l -Wl-m -Wl-j -c -o obj/engine.o engine.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/locations.o locations.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/map.o map.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/other.o other.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo4 -c -o obj/init.o init.c 
lcc -Wa-l -Wl-m -Wl-j -Wf-bo7 -c -o obj/truhen.o truhen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hud.o hud.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portale.o portale.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/infoscreen.o infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/player.o player.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/tiledat.o tiledat.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/text.o text.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo11 -c -o obj/lvlstatus.o lvlstatus.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/items.o items.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/npc.o npc.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/schilder.o schilder.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/gegner.o gegner.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o obj/lvlgegner.o lvlgegner.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo20 -c -o obj/tiledatg.o tiledatg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo14 -c -o obj/boss.o boss.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/umgebung.o umgebung.c

cd obj/

obj=$(ls | grep [.][o])

echo "Erstelle Rom..."

lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo256 -o ../verlies.gb $obj

date

echo "Starte Emulation"

if [ -f ../verlies.gb ]
then
	#mgba-qt ../verlies.gb &>/dev/null

	bgb ../verlies.gb &>/dev/null
fi

exit 0
