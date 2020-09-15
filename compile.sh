#!/bin/bash

date

echo "Lösche alte Objektdateien..."

rm -rf obj/*.o

## Daten

echo "Kompiliere..."

#hud
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hudgui.o daten/hud/hudgui.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_infoscreen.o daten/hud/v_infoscreen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_statscreen.o daten/hud/v_statscreen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/rahmen.o gfx/rahmen.c

#karten
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_felsengrund.o daten/karten/k_felsengrund.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_gefaengnis.o daten/karten/k_gefaengnis.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_oger.o daten/karten/k_oger.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_wiesen.o daten/karten/k_wiesen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_feensee.o daten/karten/k_feensee.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_dorfseefeen.o daten/karten/k_dorfseefeen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_eichenwald.o daten/karten/k_eichenwald.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/nomap.o daten/karten/nomap.c

#lvl
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatfelsengrund.o daten/lvl/lvldatfelsengrund.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatstadtgefaengnis.o daten/lvl/lvldatstadtgefaengnis.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/lvldatwiesen.o daten/lvl/lvldatwiesen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatogerhoehlen.o daten/lvl/lvldatogerhoehlen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatdorfseefeen.o daten/lvl/lvldatdorfseefeen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo6 -c -o obj/lvldatfeensee.o daten/lvl/lvldatfeensee.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldateichenwald.o daten/lvl/lvldateichenwald.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatalterbaum.o daten/lvl/lvldatalterbaum.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatgebirgspfad.o daten/lvl/lvldatgebirgspfad.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo18 -c -o obj/lvldatzwergenheim.o daten/lvl/lvldatzwergenheim.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo19 -c -o obj/lvldatrotgebirge.o daten/lvl/lvldatrotgebirge.c

#other
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/gameover.o daten/other/gameover.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/titel.o daten/other/titel.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/kredits.o daten/other/kredits.c

#spriteset
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/v_spriteset_1.o daten/spritesets/v_spriteset_1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/v_spriteset_2.o daten/spritesets/v_spriteset_2.c

#tileset
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/tilesets.o daten/tilesets/tilesets.c

#locations
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/locationstxt.o daten/txt/locations/locations.c

#Texte von Npcs und Gegnern
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin1.o daten/txt/npcs/ausdauerverkaeuferin1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin2.o daten/txt/npcs/ausdauerverkaeuferin2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/fiona-1.o daten/txt/npcs/fiona-1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt1.o daten/txt/npcs/heilertxt1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt2.o daten/txt/npcs/heilertxt2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin1.o daten/txt/npcs/heiltrankverkaeuferin1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin2.o daten/txt/npcs/heiltrankverkaeuferin2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt.o daten/txt/npcs/hugo.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/max-1.o daten/txt/npcs/max-1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt1.o daten/txt/npcs/phobetxt1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt2.o daten/txt/npcs/phobetxt2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt3.o daten/txt/npcs/phobetxt3.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler1.o daten/txt/npcs/provianthaendler1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler2.o daten/txt/npcs/provianthaendler2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt.o daten/txt/npcs/sara.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt1.o daten/txt/npcs/xavertxt1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt2.o daten/txt/npcs/xavertxt2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt3.o daten/txt/npcs/xavertxt3.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt4.o daten/txt/npcs/xavertxt4.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt5.o daten/txt/npcs/xavertxt5.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt6.o daten/txt/npcs/xavertxt6.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt7.o daten/txt/npcs/xavertxt7.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt8.o daten/txt/npcs/xavertxt8.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt9.o daten/txt/npcs/xavertxt9.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt10.o daten/txt/npcs/xavertxt10.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt11.o daten/txt/npcs/xavertxt11.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt12.o daten/txt/npcs/xavertxt12.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt13.o daten/txt/npcs/xavertxt13.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt14.o daten/txt/npcs/xavertxt14.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt15.o daten/txt/npcs/xavertxt15.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt16.o daten/txt/npcs/xavertxt16.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt17.o daten/txt/npcs/xavertxt17.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt18.o daten/txt/npcs/xavertxt18.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt19.o daten/txt/npcs/xavertxt19.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt20.o daten/txt/npcs/xavertxt20.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt21.o daten/txt/npcs/xavertxt21.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/xavertxt22.o daten/txt/npcs/xavertxt22.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt1.o daten/txt/npcs/feenaeltestetxt1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt2.o daten/txt/npcs/feenaeltestetxt2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt3.o daten/txt/npcs/feenaeltestetxt3.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt4.o daten/txt/npcs/feenaeltestetxt4.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt5.o daten/txt/npcs/feenaeltestetxt5.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt6.o daten/txt/npcs/feenaeltestetxt6.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt7.o daten/txt/npcs/feenaeltestetxt7.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt8.o daten/txt/npcs/feenaeltestetxt8.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt9.o daten/txt/npcs/feenaeltestetxt9.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt10.o daten/txt/npcs/feenaeltestetxt10.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt11.o daten/txt/npcs/feenaeltestetxt11.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt12.o daten/txt/npcs/feenaeltestetxt12.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt13.o daten/txt/npcs/feenaeltestetxt13.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/feenaeltestetxt14.o daten/txt/npcs/feenaeltestetxt14.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt1.o daten/txt/npcs/ranartxt1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt2.o daten/txt/npcs/ranartxt2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt3.o daten/txt/npcs/ranartxt3.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt4.o daten/txt/npcs/ranartxt4.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt5.o daten/txt/npcs/ranartxt5.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt6.o daten/txt/npcs/ranartxt6.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ranartxt7.o daten/txt/npcs/ranartxt7.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/pilzwesen1txt.o daten/txt/npcs/pilzwesen1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/pilzwesen2txt.o daten/txt/npcs/pilzwesen2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/vanyratxt.o daten/txt/npcs/vanyra.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/othertxt.o daten/txt/npcs/others.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/zylratxt1.o daten/txt/npcs/zylra-1.c

# Texte Portale
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portal.o daten/txt/portale/portal.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portalfelsengrund.o daten/txt/portale/portalfelsengrund.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portalfeensee.o daten/txt/portale/portalfeensee.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portaleichenwald.o daten/txt/portale/portaleichenwald.c

#Texte Schilder
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1.o daten/txt/schilder/schildertxt.c

#andere Texte
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluessel.o daten/txt/schilder/schluessel.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/oelloch.o daten/txt/other/oelloch.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/oelloch2.o daten/txt/other/oelloch2.c

#Texte Truhen
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauertrank.o daten/txt/truhen/ausdauertrank.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/erhalten.o daten/txt/truhen/erhalten.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/goldvoll.o daten/txt/truhen/goldvoll.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrank.o daten/txt/truhen/heiltrank.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/kartetruhe.o daten/txt/truhen/kartetruhe.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/proviant.o daten/txt/truhen/proviant.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluesselt.o daten/txt/truhen/schluessel.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/truheleer.o daten/txt/truhen/truheleer.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/brotbuechse-1.o daten/txt/truhen/brotbuechse-1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/brotbuechse-2.o daten/txt/truhen/brotbuechse-2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/geldkatze1.o daten/txt/truhen/geldkatze1.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/geldkatze2.o daten/txt/truhen/geldkatze2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/wappenrock.o daten/txt/truhen/wappenrock.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/magischer_stein.o daten/txt/truhen/magischer_stein.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/aspektwaldtxt.o daten/txt/truhen/aspektwald.c

## Daten Ende

#lvlablauf
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo15 -c -o obj/felsengrund.o felsengrund.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/stadtgefaengnis.o stadtgefaengnis.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/ogerhoehlen.o ogerhoehlen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/wiesen.o wiesen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/feensee.o feensee.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/eichenwald.o eichenwald.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/eichenwald2.o eichenwald2.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/alte-baum.o alte-baum.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/gebirgspfad.o gebirgspfad.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/zwergenheim.o zwergenheim.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/rotgebirge.o rotgebirge.c

#main
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wa-l -Wl-m -Wl-j -c -o obj/verlies.o verlies.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -c -o obj/globals.o globals.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -c -o obj/engine.o engine.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/locations.o locations.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/map.o map.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/other.o other.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo4 -c -o obj/init.o init.c 
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo7 -c -o obj/truhen.o truhen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hud.o hud.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/portale.o portale.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/infoscreen.o infoscreen.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/player.o player.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/tiledat.o tiledat.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/text.o text.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo11 -c -o obj/lvlstatus.o lvlstatus.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/items.o items.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/npc.o npc.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/schilder.o schilder.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/gegner.o gegner.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/lvlgegner.o lvlgegner.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/tiledatg.o tiledatg.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo14 -c -o obj/boss.o boss.c
/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/umgebung.o umgebung.c

cd obj/

obj=$(ls | grep [.][o])

echo "Erstelle Rom..."

/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo128 -o ../verlies.gb $obj

date

