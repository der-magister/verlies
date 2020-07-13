#!/bin/bash

rm -rf obj/*.o

lcc="/opt/gbdk/bin/lcc -Wa-l -Wl-m -Wl-j"

## Daten

#hud
lcc -Wf-bo8 -c -o obj/hudgui.o daten/hud/hudgui.c
lcc -Wf-bo8 -c -o obj/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wf-bo8 -c -o obj/v_statscreen.o daten/hud/v_statscreen.c
lcc -Wf-bo10 -c -o obj/rahmen.o gfx/rahmen.c

#karten
lcc -Wf-bo3 -c -o obj/k_felsengrund.o daten/karten/k_felsengrund.c
lcc -Wf-bo3 -c -o obj/k_gefaengnis.o daten/karten/k_gefaengnis.c
lcc -Wf-bo3 -c -o obj/k_oger.o daten/karten/k_oger.c
lcc -Wf-bo3 -c -o obj/k_wiesen.o daten/karten/k_wiesen.c
lcc -Wf-bo3 -c -o obj/k_feensee.o daten/karten/k_feensee.c
lcc -Wf-bo3 -c -o obj/k_dorfseefeen.o daten/karten/k_dorfseefeen.c
lcc -Wf-bo3 -c -o obj/k_eichenwald.o daten/karten/k_eichenwald.c
lcc -Wf-bo3 -c -o obj/nomap.o daten/karten/nomap.c

#lvl
lcc -Wf-bo5 -c -o obj/lvldatfelsengrund.o daten/lvl/lvldatfelsengrund.c
lcc -Wf-bo5 -c -o obj/lvldatstadtgefaengnis.o daten/lvl/lvldatstadtgefaengnis.c
lcc -Wf-bo5 -c -o obj/lvldatwiesen.o daten/lvl/lvldatwiesen.c
lcc -Wf-bo6 -c -o obj/lvldatogerhoehlen.o daten/lvl/lvldatogerhoehlen.c
lcc -Wf-bo6 -c -o obj/lvldatdorfseefeen.o daten/lvl/lvldatdorfseefeen.c
lcc -Wf-bo6 -c -o obj/lvldatfeensee.o daten/lvl/lvldatfeensee.c
lcc -Wf-bo18 -c -o obj/lvldateichenwald.o daten/lvl/lvldateichenwald.c
lcc -Wf-bo18 -c -o obj/lvldatalterbaum.o daten/lvl/lvldatalterbaum.c

#other
lcc -Wf-bo3 -c -o obj/gameover.o daten/other/gameover.c
lcc -Wf-bo3 -c -o obj/titel.o daten/other/titel.c
lcc -Wf-bo3 -c -o obj/kredits.o daten/other/kredits.c

#spriteset
lcc -Wf-bo2 -c -o obj/v_spriteset_1.o daten/spritesets/v_spriteset_1.c
lcc -Wf-bo2 -c -o obj/v_spriteset_2.o daten/spritesets/v_spriteset_2.c

#tileset
lcc -Wf-bo2 -c -o obj/font-82-127.o daten/tilesets/font-82-127.c
lcc -Wf-bo2 -c -o obj/grundtiles-38-81.o daten/tilesets/grundtiles-38-81.c
lcc -Wf-bo2 -c -o obj/felsengrund_1-8-37.o daten/tilesets/felsengrund_1-8-37.c
lcc -Wf-bo2 -c -o obj/felsengrund_2-4-19.o daten/tilesets/felsengrund_2-4-19.c
lcc -Wf-bo2 -c -o obj/felsengrund_3-4-19.o daten/tilesets/felsengrund_3-4-19.c
lcc -Wf-bo2 -c -o obj/ogerhoehlen-4-38.o daten/tilesets/ogerhoehlen-4-38.c
lcc -Wf-bo2 -c -o obj/stadtgefaengnis-14-37.o daten/tilesets/stadtgefaengnis-14-37.c
lcc -Wf-bo2 -c -o obj/wiesen_1-4-37.o daten/tilesets/wiesen_1-4-37.c
lcc -Wf-bo2 -c -o obj/feensee-4-37.o daten/tilesets/feensee-4-37.c
lcc -Wf-bo2 -c -o obj/eichenwald-4-42.o daten/tilesets/eichenwald-4-42.c
lcc -Wf-bo2 -c -o obj/alte-baum-4-38.o daten/tilesets/alte-baum-4-38.c

#locations
lcc -Wf-bo3 -c -o obj/locationstxt.o daten/txt/locations/locations.c

#Texte von Npcs und Gegnern
lcc -Wf-bo10 -c -o obj/ausdauerverkaeuferin1.o daten/txt/npcs/ausdauerverkaeuferin1.c
lcc -Wf-bo10 -c -o obj/ausdauerverkaeuferin2.o daten/txt/npcs/ausdauerverkaeuferin2.c
lcc -Wf-bo10 -c -o obj/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wf-bo10 -c -o obj/heilertxt1.o daten/txt/npcs/heilertxt1.c
lcc -Wf-bo10 -c -o obj/heilertxt2.o daten/txt/npcs/heilertxt2.c
lcc -Wf-bo10 -c -o obj/heiltrankverkaeuferin1.o daten/txt/npcs/heiltrankverkaeuferin1.c
lcc -Wf-bo10 -c -o obj/heiltrankverkaeuferin2.o daten/txt/npcs/heiltrankverkaeuferin2.c
lcc -Wf-bo10 -c -o obj/hugotxt1.o daten/txt/npcs/hugotxt1.c
lcc -Wf-bo10 -c -o obj/hugotxt2.o daten/txt/npcs/hugotxt2.c
lcc -Wf-bo10 -c -o obj/hugotxt3.o daten/txt/npcs/hugotxt3.c
lcc -Wf-bo10 -c -o obj/hugotxt4.o daten/txt/npcs/hugotxt4.c
lcc -Wf-bo10 -c -o obj/hugotxt5.o daten/txt/npcs/hugotxt5.c
lcc -Wf-bo10 -c -o obj/hugotxt6.o daten/txt/npcs/hugotxt6.c
lcc -Wf-bo10 -c -o obj/hugotxt7.o daten/txt/npcs/hugotxt7.c
lcc -Wf-bo10 -c -o obj/hugotxt8.o daten/txt/npcs/hugotxt8.c
lcc -Wf-bo10 -c -o obj/max-1.o daten/txt/npcs/max-1.c
lcc -Wf-bo10 -c -o obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wf-bo10 -c -o obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc  -Wf-bo10 -c -o obj/phobetxt1.o daten/txt/npcs/phobetxt1.c
lcc  -Wf-bo10 -c -o obj/phobetxt2.o daten/txt/npcs/phobetxt2.c
lcc  -Wf-bo10 -c -o obj/phobetxt3.o daten/txt/npcs/phobetxt3.c
lcc  -Wf-bo10 -c -o obj/provianthaendler1.o daten/txt/npcs/provianthaendler1.c
lcc  -Wf-bo10 -c -o obj/provianthaendler2.o daten/txt/npcs/provianthaendler2.c
lcc  -Wf-bo10 -c -o obj/saratxt.o daten/txt/npcs/sara.c
lcc  -Wf-bo10 -c -o obj/xavertxt1.o daten/txt/npcs/xavertxt1.c
lcc  -Wf-bo10 -c -o obj/xavertxt2.o daten/txt/npcs/xavertxt2.c
lcc  -Wf-bo10 -c -o obj/xavertxt3.o daten/txt/npcs/xavertxt3.c
lcc  -Wf-bo10 -c -o obj/xavertxt4.o daten/txt/npcs/xavertxt4.c
lcc  -Wf-bo10 -c -o obj/xavertxt5.o daten/txt/npcs/xavertxt5.c
lcc  -Wf-bo10 -c -o obj/xavertxt6.o daten/txt/npcs/xavertxt6.c
lcc  -Wf-bo10 -c -o obj/xavertxt7.o daten/txt/npcs/xavertxt7.c
lcc  -Wf-bo10 -c -o obj/xavertxt8.o daten/txt/npcs/xavertxt8.c
lcc  -Wf-bo10 -c -o obj/xavertxt9.o daten/txt/npcs/xavertxt9.c
lcc  -Wf-bo10 -c -o obj/xavertxt10.o daten/txt/npcs/xavertxt10.c
lcc  -Wf-bo10 -c -o obj/xavertxt11.o daten/txt/npcs/xavertxt11.c
lcc  -Wf-bo10 -c -o obj/xavertxt12.o daten/txt/npcs/xavertxt12.c
lcc  -Wf-bo10 -c -o obj/xavertxt13.o daten/txt/npcs/xavertxt13.c
lcc  -Wf-bo10 -c -o obj/xavertxt14.o daten/txt/npcs/xavertxt14.c
lcc  -Wf-bo10 -c -o obj/xavertxt15.o daten/txt/npcs/xavertxt15.c
lcc  -Wf-bo10 -c -o obj/xavertxt16.o daten/txt/npcs/xavertxt16.c
lcc  -Wf-bo10 -c -o obj/xavertxt17.o daten/txt/npcs/xavertxt17.c
lcc  -Wf-bo10 -c -o obj/xavertxt18.o daten/txt/npcs/xavertxt18.c
lcc  -Wf-bo10 -c -o obj/xavertxt19.o daten/txt/npcs/xavertxt19.c
lcc  -Wf-bo10 -c -o obj/xavertxt20.o daten/txt/npcs/xavertxt20.c
lcc  -Wf-bo10 -c -o obj/xavertxt21.o daten/txt/npcs/xavertxt21.c
lcc  -Wf-bo10 -c -o obj/xavertxt22.o daten/txt/npcs/xavertxt22.c
lcc  -Wf-bo10 -c -o obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c
lcc  -Wf-bo10 -c -o obj/zauberstaubhaendler1.o daten/txt/npcs/zauberstaubhaendler1.c
lcc  -Wf-bo10 -c -o obj/zauberstaubhaendler2.o daten/txt/npcs/zauberstaubhaendler2.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt1.o daten/txt/npcs/feenaeltestetxt1.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt2.o daten/txt/npcs/feenaeltestetxt2.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt3.o daten/txt/npcs/feenaeltestetxt3.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt4.o daten/txt/npcs/feenaeltestetxt4.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt5.o daten/txt/npcs/feenaeltestetxt5.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt6.o daten/txt/npcs/feenaeltestetxt6.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt7.o daten/txt/npcs/feenaeltestetxt7.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt8.o daten/txt/npcs/feenaeltestetxt8.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt9.o daten/txt/npcs/feenaeltestetxt9.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt10.o daten/txt/npcs/feenaeltestetxt10.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt11.o daten/txt/npcs/feenaeltestetxt11.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt12.o daten/txt/npcs/feenaeltestetxt12.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt13.o daten/txt/npcs/feenaeltestetxt13.c
lcc  -Wf-bo10 -c -o obj/feenaeltestetxt14.o daten/txt/npcs/feenaeltestetxt14.c
lcc  -Wf-bo10 -c -o obj/ranartxt1.o daten/txt/npcs/ranartxt1.c
lcc  -Wf-bo10 -c -o obj/ranartxt2.o daten/txt/npcs/ranartxt2.c
lcc  -Wf-bo10 -c -o obj/ranartxt3.o daten/txt/npcs/ranartxt3.c
lcc  -Wf-bo10 -c -o obj/ranartxt4.o daten/txt/npcs/ranartxt4.c
lcc  -Wf-bo10 -c -o obj/ranartxt5.o daten/txt/npcs/ranartxt5.c
lcc  -Wf-bo10 -c -o obj/pilzwesen1txt.o daten/txt/npcs/pilzwesen1.c
lcc  -Wf-bo10 -c -o obj/pilzwesen2txt.o daten/txt/npcs/pilzwesen2.c

# Texte Portale
lcc  -Wf-bo8 -c -o obj/portal.o daten/txt/portale/portal.c
lcc  -Wf-bo8 -c -o obj/portalfelsengrund.o daten/txt/portale/portalfelsengrund.c
lcc  -Wf-bo8 -c -o obj/portalfeensee.o daten/txt/portale/portalfeensee.c
lcc  -Wf-bo8 -c -o obj/portaleichenwald.o daten/txt/portale/portaleichenwald.c

#Texte Schilder
lcc  -Wf-bo10 -c -o obj/schildtxt1.o daten/txt/schilder/schildtxt1.c
lcc  -Wf-bo10 -c -o obj/schildtxt1b.o daten/txt/schilder/schildtxt1b.c
lcc  -Wf-bo10 -c -o obj/schildtxt1c.o daten/txt/schilder/schildtxt1c.c
lcc  -Wf-bo10 -c -o obj/schildtxt1d.o daten/txt/schilder/schildtxt1d.c
lcc  -Wf-bo10 -c -o obj/schildtxt1e.o daten/txt/schilder/schildtxt1e.c
lcc  -Wf-bo10 -c -o obj/schildtxt2.o daten/txt/schilder/schildtxt2.c
lcc  -Wf-bo10 -c -o obj/schildtxt3.o daten/txt/schilder/schildtxt3.c
lcc  -Wf-bo10 -c -o obj/schildtxt4.o daten/txt/schilder/schildtxt4.c
lcc  -Wf-bo10 -c -o obj/schildtxt5.o daten/txt/schilder/schildtxt5.c
lcc  -Wf-bo10 -c -o obj/schildtxt6.o daten/txt/schilder/schildtxt6.c
lcc  -Wf-bo10 -c -o obj/schildtxt7.o daten/txt/schilder/schildtxt7.c
lcc  -Wf-bo10 -c -o obj/schildtxt8.o daten/txt/schilder/schildtxt8.c

#andere Texte
lcc  -Wf-bo10 -c -o obj/schluessel.o daten/txt/schilder/schluessel.c
lcc  -Wf-bo10 -c -o obj/oelloch.o daten/txt/other/oelloch.c
lcc  -Wf-bo10 -c -o obj/oelloch2.o daten/txt/other/oelloch2.c

#Texte Truhen
lcc  -Wf-bo10 -c -o obj/ausdauertrank.o daten/txt/truhen/ausdauertrank.c
lcc  -Wf-bo10 -c -o obj/erhalten.o daten/txt/truhen/erhalten.c
lcc  -Wf-bo10 -c -o obj/goldvoll.o daten/txt/truhen/goldvoll.c
lcc  -Wf-bo10 -c -o obj/heiltrank.o daten/txt/truhen/heiltrank.c
lcc  -Wf-bo10 -c -o obj/kartetruhe.o daten/txt/truhen/kartetruhe.c
lcc  -Wf-bo10 -c -o obj/proviant.o daten/txt/truhen/proviant.c
lcc  -Wf-bo10 -c -o obj/schluesselt.o daten/txt/truhen/schluessel.c
lcc  -Wf-bo10 -c -o obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
lcc  -Wf-bo10 -c -o obj/truheleer.o daten/txt/truhen/truheleer.c
lcc  -Wf-bo10 -c -o obj/brotbuechse-1.o daten/txt/truhen/brotbuechse-1.c
lcc  -Wf-bo10 -c -o obj/brotbuechse-2.o daten/txt/truhen/brotbuechse-2.c
lcc  -Wf-bo10 -c -o obj/geldkatze1.o daten/txt/truhen/geldkatze1.c
lcc  -Wf-bo10 -c -o obj/wappenrock.o daten/txt/truhen/wappenrock.c
lcc  -Wf-bo10 -c -o obj/magischer_stein.o daten/txt/truhen/magischer_stein.c

## Daten Ende

#lvlablauf
lcc  -c -o obj/felsengrund.o felsengrund.c
lcc  -Wf-bo16 -c -o obj/stadtgefaengnis.o stadtgefaengnis.c
lcc  -Wf-bo16 -c -o obj/ogerhoehlen.o ogerhoehlen.c
lcc  -Wf-bo16 -c -o obj/wiesen.o wiesen.c
lcc  -Wf-bo16 -c -o obj/feensee.o feensee.c
lcc  -Wf-bo16 -c -o obj/eichenwald.o eichenwald.c
lcc  -Wf-bo17 -c -o obj/eichenwald2.o eichenwald2.c
lcc  -Wf-bo17 -c -o obj/alte-baum.o alte-baum.c

#main
lcc  -c -o obj/verlies.o verlies.c
lcc  -c -o obj/globals.o globals.c
lcc  -c -o obj/engine.o engine.c
lcc  -Wf-bo3 -c -o obj/locations.o locations.c
lcc  -Wf-bo3 -c -o obj/map.o map.c
lcc  -Wf-bo3 -c -o obj/other.o other.c
lcc  -Wf-bo4 -c -o obj/init.o init.c 
lcc  -Wf-bo7 -c -o obj/truhen.o truhen.c
lcc  -Wf-bo8 -c -o obj/hud.o hud.c
lcc  -Wf-bo8 -c -o obj/portale.o portale.c
lcc  -Wf-bo8 -c -o obj/infoscreen.o infoscreen.c
lcc  -Wf-bo9 -c -o obj/player.o player.c
lcc  -Wf-bo9 -c -o obj/tiledat.o tiledat.c
lcc  -Wf-bo10 -c -o obj/text.o text.c
lcc  -Wf-bo11 -c -o obj/lvlstatus.o lvlstatus.c
lcc  -Wf-bo12 -c -o obj/items.o items.c
lcc  -Wf-bo12 -c -o obj/npc.o npc.c
lcc  -Wf-bo12 -c -o obj/schilder.o schilder.c
lcc  -Wf-bo13 -c -o obj/gegner.o gegner.c
lcc  -Wf-bo13 -c -o obj/lvlgegner.o lvlgegner.c
lcc  -Wf-bo13 -c -o obj/tiledatg.o tiledatg.c
lcc  -Wf-bo14 -c -o obj/boss.o boss.c
lcc  -Wf-bo17 -c -o obj/umgebung.o umgebung.c

cd obj/

obj=$(ls | grep [.][o])

lcc  -Wl-yt0x019 -Wl-yo128 -o ../verlies.gb $obj 

