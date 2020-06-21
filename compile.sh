#!/bin/bash

rm -rf obj/*.o

alias lcc='/opt/gbdk/bin/lcc'

#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_felsengrund.o daten/karten/k_felsengrund.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/k_gefaengnis.o daten/karten/k_gefaengnis.c

#hud
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hudgui.o daten/hud/hudgui.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_infoscreen.o daten/hud/v_infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/v_statscreen.o daten/hud/v_statscreen.c

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
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl1b.o daten/lvl/v_lvl1b.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl1c.o daten/lvl/v_lvl1c.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl5.o daten/lvl/v_lvl5.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl6.o daten/lvl/v_lvl6.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl7.o daten/lvl/v_lvl7.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl8.o daten/lvl/v_lvl8.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl9.o daten/lvl/v_lvl9.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl10.o daten/lvl/v_lvl10.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl11.o daten/lvl/v_lvl11.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl12.o daten/lvl/v_lvl12.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl13.o daten/lvl/v_lvl13.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl20.o daten/lvl/v_lvl20.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl21.o daten/lvl/v_lvl21.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl22.o daten/lvl/v_lvl22.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl22b.o daten/lvl/v_lvl22b.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl24.o daten/lvl/v_lvl24.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl25.o daten/lvl/v_lvl25.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl26.o daten/lvl/v_lvl26.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl27.o daten/lvl/v_lvl27.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl28.o daten/lvl/v_lvl28.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl29.o daten/lvl/v_lvl29.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl30.o daten/lvl/v_lvl30.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl31.o daten/lvl/v_lvl31.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl32.o daten/lvl/v_lvl32.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl33.o daten/lvl/v_lvl33.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl34.o daten/lvl/v_lvl34.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl35.o daten/lvl/v_lvl35.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl36.o daten/lvl/v_lvl36.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl37.o daten/lvl/v_lvl37.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl40.o daten/lvl/v_lvl40.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl41.o daten/lvl/v_lvl41.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl42.o daten/lvl/v_lvl42.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl43.o daten/lvl/v_lvl43.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl44.o daten/lvl/v_lvl44.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl45.o daten/lvl/v_lvl45.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl46.o daten/lvl/v_lvl46.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl47.o daten/lvl/v_lvl47.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl48.o daten/lvl/v_lvl48.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl49.o daten/lvl/v_lvl49.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl50.o daten/lvl/v_lvl50.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl51.o daten/lvl/v_lvl51.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl52.o daten/lvl/v_lvl52.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl53.o daten/lvl/v_lvl53.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl54.o daten/lvl/v_lvl54.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl55.o daten/lvl/v_lvl55.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl56.o daten/lvl/v_lvl56.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl57.o daten/lvl/v_lvl57.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl58.o daten/lvl/v_lvl58.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl59.o daten/lvl/v_lvl59.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl60.o daten/lvl/v_lvl60.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl61.o daten/lvl/v_lvl61.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl62.o daten/lvl/v_lvl62.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl63.o daten/lvl/v_lvl63.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl64.o daten/lvl/v_lvl64.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl65.o daten/lvl/v_lvl65.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo5 -c -o obj/v_lvl66.o daten/lvl/v_lvl66.c

#other
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/gameover.o daten/other/gameover.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/titel.o daten/other/titel.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/kredits.o daten/other/kredits.c

#spriteset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/v_spriteset_1.o daten/spritesets/v_spriteset_1.c

#tileset
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/font-82-127.o daten/tilesets/font-82-127.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/grundtiles-38-81.o daten/tilesets/grundtiles-38-81.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/felsengrund_1-8-37.o daten/tilesets/felsengrund_1-8-37.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/felsengrund_2-4-19.o daten/tilesets/felsengrund_2-4-19.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/felsengrund_3-4-19.o daten/tilesets/felsengrund_3-4-19.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/ogerhoehlen-4-38.o daten/tilesets/ogerhoehlen-4-38.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/stadtgefaengnis-14-37.o daten/tilesets/stadtgefaengnis-14-37.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo2 -c -o obj/wiesen_1-4-37.o daten/tilesets/wiesen_1-4-37.c

#locations
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/felsengrund.o daten/txt/locations/locations.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/logerhoehlen.o daten/txt/locations/ogerhoehlen.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/stadtgefaengnis.o daten/txt/locations/stadtgefaengnis.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/lwiesen.o daten/txt/locations/wiesen.c

lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/rahmen.o gfx/rahmen.c

#npcs
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin1.o daten/txt/npcs/ausdauerverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauerverkaeuferin2.o daten/txt/npcs/ausdauerverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/fiona-1.o daten/txt/npcs/fiona-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt1.o daten/txt/npcs/heilertxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heilertxt2.o daten/txt/npcs/heilertxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin1.o daten/txt/npcs/heiltrankverkaeuferin1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrankverkaeuferin2.o daten/txt/npcs/heiltrankverkaeuferin2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt1.o daten/txt/npcs/hugotxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt2.o daten/txt/npcs/hugotxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt3.o daten/txt/npcs/hugotxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt4.o daten/txt/npcs/hugotxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt5.o daten/txt/npcs/hugotxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt6.o daten/txt/npcs/hugotxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt7.o daten/txt/npcs/hugotxt7.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/hugotxt8.o daten/txt/npcs/hugotxt8.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/max-1.o daten/txt/npcs/max-1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss1.o daten/txt/npcs/ogerboss1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ogerboss2.o daten/txt/npcs/ogerboss2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt1.o daten/txt/npcs/phobetxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt2.o daten/txt/npcs/phobetxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/phobetxt3.o daten/txt/npcs/phobetxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler1.o daten/txt/npcs/provianthaendler1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/provianthaendler2.o daten/txt/npcs/provianthaendler2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt1.o daten/txt/npcs/saratxt1.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt2.o daten/txt/npcs/saratxt2.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt3.o daten/txt/npcs/saratxt3.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt4.o daten/txt/npcs/saratxt4.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt5.o daten/txt/npcs/saratxt5.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt6.o daten/txt/npcs/saratxt6.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/saratxt7.o daten/txt/npcs/saratxt7.c
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
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/handelnichtmoeglich.o daten/txt/other/handelnichtmoeglich.c

#schilder
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1.o daten/txt/schilder/schildtxt1.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1b.o daten/txt/schilder/schildtxt1b.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1c.o daten/txt/schilder/schildtxt1c.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1d.o daten/txt/schilder/schildtxt1d.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt1e.o daten/txt/schilder/schildtxt1e.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schildtxt2.o daten/txt/schilder/schildtxt2.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluessel.o daten/txt/schilder/schluessel.c

#truhen
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/ausdauertrank.o daten/txt/truhen/ausdauertrank.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/brotbuechse-1.o daten/txt/truhen/brotbuechse-1.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/erhalten.o daten/txt/truhen/erhalten.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/goldvoll.o daten/txt/truhen/goldvoll.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/heiltrank.o daten/txt/truhen/heiltrank.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/kartetruhe.o daten/txt/truhen/kartetruhe.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/proviant.o daten/txt/truhen/proviant.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schluesselt.o daten/txt/truhen/schluessel.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/schwerttruhe.o daten/txt/truhen/schwerttruhe.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/truheleer.o daten/txt/truhen/truheleer.c

#lvlablauf
lcc -Wa-l -Wl-m -Wl-j -c -o obj/felsengrund.o felsengrund.c

#main
lcc -Wa-l -Wl-m -Wl-j -c -o obj/verlies.o verlies.c
lcc -Wa-l -Wl-. -Wl-j -c -o obj/globals.o globals.c
lcc -Wa-l -Wl-m -Wl-j -c -o obj/engine.o engine.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/locations.o locations.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/map.o map.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo3 -c -o obj/other.o other.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo4 -c -o obj/init.o init.c 
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo7 -c -o obj/truhen.o truhen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/hud.o hud.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo8 -c -o obj/infoscreen.o infoscreen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/player.o player.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo9 -c -o obj/tiledat.o tiledat.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo10 -c -o obj/text.o text.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo11 -c -o obj/lvlstatus.o lvlstatus.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/items.o items.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/npc.o npc.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo12 -c -o obj/schilder.o schilder.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/gegner.o gegner.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/lvlgegner.o lvlgegner.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo13 -c -o obj/tiledatg.o tiledatg.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo14 -c -o obj/boss.o boss.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo15 -c -o obj/lvl1.o lvl1.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/l_stadtgefaengnis.o l_stadtgefaengnis.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/ogerhoehlen.o ogerhoehlen.c
#lcc -Wa-l -Wl-m -Wl-j -Wf-bo16 -c -o obj/wiesen.o wiesen.c
lcc -Wa-l -Wl-m -Wl-j -Wf-bo17 -c -o obj/umgebung.o umgebung.c

cd obj/

obj=$(ls | grep [.][o])

lcc -Wa-l -Wl-m -Wl-j -Wl-yt0x019 -Wl-yo128 -o ../verlies.gb $obj 

