.nds
.thumb

.include "armips/include/macros.s"
.include "armips/include/constants.s"
.include "armips/include/monnums.s"
.include "armips/include/itemnums.s"
.include "armips/include/movenums.s"

// the evolution data of each mon


evodata SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BULBASAUR
    evolution EVO_LEVEL_UP, 16, SPECIES_IVYSAUR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_IVYSAUR
    evolution EVO_LEVEL_UP, 32, SPECIES_VENUSAUR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VENUSAUR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHARMANDER
    evolution EVO_LEVEL_UP, 16, SPECIES_CHARMELEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHARMELEON
    evolution EVO_LEVEL_UP, 36, SPECIES_CHARIZARD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHARIZARD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SQUIRTLE
    evolution EVO_LEVEL_UP, 16, SPECIES_WARTORTLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WARTORTLE
    evolution EVO_LEVEL_UP, 36, SPECIES_BLASTOISE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BLASTOISE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CATERPIE
    evolution EVO_LEVEL_UP, 7, SPECIES_METAPOD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_METAPOD
    evolution EVO_LEVEL_UP, 10, SPECIES_BUTTERFREE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BUTTERFREE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WEEDLE
    evolution EVO_LEVEL_UP, 7, SPECIES_KAKUNA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KAKUNA
    evolution EVO_LEVEL_UP, 10, SPECIES_BEEDRILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BEEDRILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIDGEY
    evolution EVO_LEVEL_UP, 18, SPECIES_PIDGEOTTO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIDGEOTTO
    evolution EVO_LEVEL_UP, 36, SPECIES_PIDGEOT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIDGEOT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RATTATA
    evolution EVO_LEVEL_UP, 20, SPECIES_RATICATE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RATICATE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPEAROW
    evolution EVO_LEVEL_UP, 20, SPECIES_FEAROW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FEAROW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EKANS
    evolution EVO_LEVEL_UP, 22, SPECIES_ARBOK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARBOK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIKACHU
    evolution EVO_USE_ITEM, ITEM_THUNDERSTONE, SPECIES_RAICHU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RAICHU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SANDSHREW
    evolution EVO_LEVEL_UP, 22, SPECIES_SANDSLASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SANDSLASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDORAN_F
    evolution EVO_LEVEL_UP, 16, SPECIES_NIDORINA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDORINA
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_NIDOQUEEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDOQUEEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDORAN_M
    evolution EVO_LEVEL_UP, 16, SPECIES_NIDORINO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDORINO
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_NIDOKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NIDOKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLEFAIRY
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_CLEFABLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLEFABLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VULPIX
    evolution EVO_USE_ITEM, ITEM_FIRE_STONE, SPECIES_NINETALES
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NINETALES
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JIGGLYPUFF
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_WIGGLYTUFF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WIGGLYTUFF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZUBAT
    evolution EVO_LEVEL_UP, 22, SPECIES_GOLBAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLBAT
    evolution EVO_HAPPINESS, 0, SPECIES_CROBAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ODDISH
    evolution EVO_LEVEL_UP, 21, SPECIES_GLOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLOOM
    evolution EVO_USE_ITEM, ITEM_LEAF_STONE, SPECIES_VILEPLUME
    evolution EVO_USE_ITEM, ITEM_SUN_STONE, SPECIES_BELLOSSOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VILEPLUME
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PARAS
    evolution EVO_LEVEL_UP, 24, SPECIES_PARASECT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PARASECT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VENONAT
    evolution EVO_LEVEL_UP, 31, SPECIES_VENOMOTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VENOMOTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DIGLETT
    evolution EVO_LEVEL_UP, 26, SPECIES_DUGTRIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUGTRIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEOWTH
    evolution EVO_LEVEL_UP, 28, SPECIES_PERSIAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PERSIAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PSYDUCK
    evolution EVO_LEVEL_UP, 33, SPECIES_GOLDUCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLDUCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANKEY
    evolution EVO_LEVEL_UP, 28, SPECIES_PRIMEAPE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PRIMEAPE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GROWLITHE
    evolution EVO_USE_ITEM, ITEM_FIRE_STONE, SPECIES_ARCANINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARCANINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_POLIWAG
    evolution EVO_LEVEL_UP, 25, SPECIES_POLIWHIRL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_POLIWHIRL
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_POLIWRATH
    evolution EVO_LEVEL_UP, 32, SPECIES_POLITOED
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_POLIWRATH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ABRA
    evolution EVO_LEVEL_UP, 16, SPECIES_KADABRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KADABRA
    evolution EVO_USE_ITEM, ITEM_DAWN_STONE, SPECIES_ALAKAZAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ALAKAZAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MACHOP
    evolution EVO_LEVEL_UP, 28, SPECIES_MACHOKE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MACHOKE
    evolution EVO_LEVEL_UP, 36, SPECIES_MACHAMP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MACHAMP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BELLSPROUT
    evolution EVO_LEVEL_UP, 21, SPECIES_WEEPINBELL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WEEPINBELL
    evolution EVO_USE_ITEM, ITEM_LEAF_STONE, SPECIES_VICTREEBEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VICTREEBEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TENTACOOL
    evolution EVO_LEVEL_UP, 30, SPECIES_TENTACRUEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TENTACRUEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GEODUDE
    evolution EVO_LEVEL_UP, 25, SPECIES_GRAVELER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GRAVELER
    evolution EVO_LEVEL_UP, 36, SPECIES_GOLEM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLEM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PONYTA
    evolution EVO_LEVEL_UP, 40, SPECIES_RAPIDASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RAPIDASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLOWPOKE
    evolution EVO_LEVEL_UP, 37, SPECIES_SLOWBRO
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_SLOWKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLOWBRO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGNEMITE
    evolution EVO_LEVEL_UP, 30, SPECIES_MAGNETON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGNETON
    evolution EVO_LEVEL_ELECTRIC_FIELD, 0, SPECIES_MAGNEZONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FARFETCHD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DODUO
    evolution EVO_LEVEL_UP, 31, SPECIES_DODRIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DODRIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEEL
    evolution EVO_LEVEL_UP, 34, SPECIES_DEWGONG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEWGONG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GRIMER
    evolution EVO_LEVEL_UP, 38, SPECIES_MUK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MUK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHELLDER
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_CLOYSTER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLOYSTER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GASTLY
    evolution EVO_LEVEL_UP, 25, SPECIES_HAUNTER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HAUNTER
    evolution EVO_LEVEL_UP, 16, SPECIES_GENGAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GENGAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ONIX
    evolution EVO_LEVEL_UP, 30, SPECIES_STEELIX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DROWZEE
    evolution EVO_LEVEL_UP, 26, SPECIES_HYPNO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HYPNO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KRABBY
    evolution EVO_LEVEL_UP, 28, SPECIES_KINGLER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KINGLER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VOLTORB
    evolution EVO_LEVEL_UP, 30, SPECIES_ELECTRODE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELECTRODE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EXEGGCUTE
    evolution EVO_USE_ITEM, ITEM_LEAF_STONE, SPECIES_EXEGGUTOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EXEGGUTOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CUBONE
    evolution EVO_LEVEL_UP, 28, SPECIES_MAROWAK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAROWAK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HITMONLEE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HITMONCHAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LICKITUNG
    evolution EVO_KNOWS_MOVE, MOVE_ROLLOUT, SPECIES_LICKILICKY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KOFFING
    evolution EVO_LEVEL_UP, 35, SPECIES_WEEZING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WEEZING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RHYHORN
    evolution EVO_LEVEL_UP, 42, SPECIES_RHYDON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RHYDON
    evolution EVO_LEVEL_UP, 30, SPECIES_RHYPERIOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHANSEY
    evolution EVO_HAPPINESS, 0, SPECIES_BLISSEY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TANGELA
    evolution EVO_KNOWS_MOVE, MOVE_ANCIENT_POWER, SPECIES_TANGROWTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KANGASKHAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HORSEA
    evolution EVO_LEVEL_UP, 32, SPECIES_SEADRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEADRA
    evolution EVO_LEVEL_UP, 30, SPECIES_KINGDRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLDEEN
    evolution EVO_LEVEL_UP, 33, SPECIES_SEAKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEAKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STARYU
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_STARMIE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STARMIE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MR_MIME
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCYTHER
    evolution EVO_LEVEL_UP, 30, SPECIES_SCIZOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JYNX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELECTABUZZ
    evolution EVO_LEVEL_UP, 30, SPECIES_ELECTIVIRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGMAR
    evolution EVO_USE_ITEM, ITEM_FIRE_STONE, SPECIES_MAGMORTAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PINSIR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TAUROS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGIKARP
    evolution EVO_LEVEL_UP, 20, SPECIES_GYARADOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GYARADOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LAPRAS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DITTO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EEVEE
    evolution EVO_LEVEL_MOSSY_STONE, 0, SPECIES_LEAFEON
    evolution EVO_LEVEL_ICY_STONE, 0, SPECIES_GLACEON
    evolution EVO_USE_ITEM, ITEM_THUNDERSTONE, SPECIES_JOLTEON
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_VAPOREON
    evolution EVO_USE_ITEM, ITEM_FIRE_STONE, SPECIES_FLAREON
    evolution EVO_HAPPINESS_DAY, 0, SPECIES_ESPEON
    evolution EVO_HAPPINESS_NIGHT, 0, SPECIES_UMBREON
    terminateevodata

evodata SPECIES_VAPOREON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JOLTEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FLAREON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PORYGON
    evolution EVO_LEVEL_UP, 30, SPECIES_PORYGON2
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_OMANYTE
    evolution EVO_LEVEL_UP, 40, SPECIES_OMASTAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_OMASTAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KABUTO
    evolution EVO_LEVEL_UP, 40, SPECIES_KABUTOPS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KABUTOPS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AERODACTYL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNORLAX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARTICUNO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZAPDOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MOLTRES
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRATINI
    evolution EVO_LEVEL_UP, 30, SPECIES_DRAGONAIR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRAGONAIR
    evolution EVO_LEVEL_UP, 55, SPECIES_DRAGONITE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRAGONITE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEWTWO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHIKORITA
    evolution EVO_LEVEL_UP, 16, SPECIES_BAYLEEF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BAYLEEF
    evolution EVO_LEVEL_UP, 32, SPECIES_MEGANIUM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEGANIUM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CYNDAQUIL
    evolution EVO_LEVEL_UP, 14, SPECIES_QUILAVA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_QUILAVA
    evolution EVO_LEVEL_UP, 36, SPECIES_TYPHLOSION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TYPHLOSION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TOTODILE
    evolution EVO_LEVEL_UP, 18, SPECIES_CROCONAW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CROCONAW
    evolution EVO_LEVEL_UP, 30, SPECIES_FERALIGATR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FERALIGATR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SENTRET
    evolution EVO_LEVEL_UP, 15, SPECIES_FURRET
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FURRET
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HOOTHOOT
    evolution EVO_LEVEL_UP, 20, SPECIES_NOCTOWL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NOCTOWL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LEDYBA
    evolution EVO_LEVEL_UP, 18, SPECIES_LEDIAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LEDIAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPINARAK
    evolution EVO_LEVEL_UP, 22, SPECIES_ARIADOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARIADOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CROBAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHINCHOU
    evolution EVO_LEVEL_UP, 27, SPECIES_LANTURN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LANTURN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PICHU
    evolution EVO_HAPPINESS, 0, SPECIES_PIKACHU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLEFFA
    evolution EVO_HAPPINESS, 0, SPECIES_CLEFAIRY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_IGGLYBUFF
    evolution EVO_HAPPINESS, 0, SPECIES_JIGGLYPUFF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TOGEPI
    evolution EVO_HAPPINESS, 0, SPECIES_TOGETIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TOGETIC
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_TOGEKISS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NATU
    evolution EVO_LEVEL_UP, 25, SPECIES_XATU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_XATU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAREEP
    evolution EVO_LEVEL_UP, 15, SPECIES_FLAAFFY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FLAAFFY
    evolution EVO_LEVEL_UP, 30, SPECIES_AMPHAROS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AMPHAROS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BELLOSSOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MARILL
    evolution EVO_LEVEL_UP, 18, SPECIES_AZUMARILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AZUMARILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SUDOWOODO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_POLITOED
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HOPPIP
    evolution EVO_LEVEL_UP, 18, SPECIES_SKIPLOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SKIPLOOM
    evolution EVO_LEVEL_UP, 27, SPECIES_JUMPLUFF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JUMPLUFF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AIPOM
    evolution EVO_KNOWS_MOVE, MOVE_DOUBLE_HIT, SPECIES_AMBIPOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SUNKERN
    evolution EVO_USE_ITEM, ITEM_SUN_STONE, SPECIES_SUNFLORA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SUNFLORA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_YANMA
    evolution EVO_KNOWS_MOVE, MOVE_ANCIENT_POWER, SPECIES_YANMEGA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WOOPER
    evolution EVO_LEVEL_UP, 20, SPECIES_QUAGSIRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_QUAGSIRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ESPEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_UMBREON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MURKROW
    evolution EVO_USE_ITEM, ITEM_DUSK_STONE, SPECIES_HONCHKROW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLOWKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MISDREAVUS
    evolution EVO_USE_ITEM, ITEM_DUSK_STONE, SPECIES_MISMAGIUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_UNOWN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WOBBUFFET
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GIRAFARIG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PINECO
    evolution EVO_LEVEL_UP, 31, SPECIES_FORRETRESS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FORRETRESS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUNSPARCE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLIGAR
    evolution EVO_USE_ITEM_NIGHT, ITEM_RAZOR_FANG, SPECIES_GLISCOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STEELIX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNUBBULL
    evolution EVO_LEVEL_UP, 23, SPECIES_GRANBULL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GRANBULL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_QWILFISH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCIZOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHUCKLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HERACROSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNEASEL
    evolution EVO_USE_ITEM_NIGHT, ITEM_RAZOR_CLAW, SPECIES_WEAVILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TEDDIURSA
    evolution EVO_LEVEL_UP, 30, SPECIES_URSARING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_URSARING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLUGMA
    evolution EVO_LEVEL_UP, 38, SPECIES_MAGCARGO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGCARGO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWINUB
    evolution EVO_LEVEL_UP, 33, SPECIES_PILOSWINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PILOSWINE
    evolution EVO_KNOWS_MOVE, MOVE_ANCIENT_POWER, SPECIES_MAMOSWINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CORSOLA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REMORAID
    evolution EVO_LEVEL_UP, 25, SPECIES_OCTILLERY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_OCTILLERY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DELIBIRD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANTINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SKARMORY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HOUNDOUR
    evolution EVO_LEVEL_UP, 24, SPECIES_HOUNDOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HOUNDOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KINGDRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PHANPY
    evolution EVO_LEVEL_UP, 25, SPECIES_DONPHAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DONPHAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PORYGON2
    evolution EVO_LEVEL_UP, 30, SPECIES_PORYGON_Z
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STANTLER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SMEARGLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TYROGUE
    evolution EVO_LEVEL_MORE_DEFENSE, 20, SPECIES_HITMONCHAN
    evolution EVO_LEVEL_MORE_ATTACK, 20, SPECIES_HITMONLEE
    evolution EVO_LEVEL_ATK_DEF_EQUAL, 20, SPECIES_HITMONTOP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HITMONTOP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SMOOCHUM
    evolution EVO_LEVEL_UP, 30, SPECIES_JYNX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELEKID
    evolution EVO_LEVEL_UP, 30, SPECIES_ELECTABUZZ
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGBY
    evolution EVO_LEVEL_UP, 30, SPECIES_MAGMAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MILTANK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BLISSEY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RAIKOU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ENTEI
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SUICUNE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LARVITAR
    evolution EVO_LEVEL_UP, 30, SPECIES_PUPITAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PUPITAR
    evolution EVO_LEVEL_UP, 55, SPECIES_TYRANITAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TYRANITAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUGIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HO_OH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CELEBI
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TREECKO
    evolution EVO_LEVEL_UP, 16, SPECIES_GROVYLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GROVYLE
    evolution EVO_LEVEL_UP, 36, SPECIES_SCEPTILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCEPTILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TORCHIC
    evolution EVO_LEVEL_UP, 16, SPECIES_COMBUSKEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_COMBUSKEN
    evolution EVO_LEVEL_UP, 36, SPECIES_BLAZIKEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BLAZIKEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MUDKIP
    evolution EVO_LEVEL_UP, 16, SPECIES_MARSHTOMP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MARSHTOMP
    evolution EVO_LEVEL_UP, 36, SPECIES_SWAMPERT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWAMPERT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_POOCHYENA
    evolution EVO_LEVEL_UP, 18, SPECIES_MIGHTYENA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MIGHTYENA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZIGZAGOON
    evolution EVO_LEVEL_UP, 20, SPECIES_LINOONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LINOONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WURMPLE
    evolution EVO_LEVEL_PID_LOW, 7, SPECIES_SILCOON
    evolution EVO_LEVEL_PID_HIGH, 7, SPECIES_CASCOON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SILCOON
    evolution EVO_LEVEL_UP, 10, SPECIES_BEAUTIFLY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BEAUTIFLY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CASCOON
    evolution EVO_LEVEL_UP, 10, SPECIES_DUSTOX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUSTOX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LOTAD
    evolution EVO_LEVEL_UP, 14, SPECIES_LOMBRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LOMBRE
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_LUDICOLO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUDICOLO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEEDOT
    evolution EVO_LEVEL_UP, 14, SPECIES_NUZLEAF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NUZLEAF
    evolution EVO_USE_ITEM, ITEM_LEAF_STONE, SPECIES_SHIFTRY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHIFTRY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TAILLOW
    evolution EVO_LEVEL_UP, 22, SPECIES_SWELLOW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWELLOW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WINGULL
    evolution EVO_LEVEL_UP, 25, SPECIES_PELIPPER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PELIPPER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RALTS
    evolution EVO_LEVEL_UP, 20, SPECIES_KIRLIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KIRLIA
    evolution EVO_LEVEL_UP, 30, SPECIES_GARDEVOIR
    evolution EVO_USE_ITEM_MALE, ITEM_DAWN_STONE, SPECIES_GALLADE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GARDEVOIR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SURSKIT
    evolution EVO_LEVEL_UP, 22, SPECIES_MASQUERAIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MASQUERAIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHROOMISH
    evolution EVO_LEVEL_UP, 23, SPECIES_BRELOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BRELOOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLAKOTH
    evolution EVO_LEVEL_UP, 18, SPECIES_VIGOROTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VIGOROTH
    evolution EVO_LEVEL_UP, 36, SPECIES_SLAKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SLAKING
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NINCADA
    evolution EVO_LEVEL_GEN_NEW_MON_1, 20, SPECIES_NINJASK
    evolution EVO_LEVEL_GEN_NEW_MON_2, 20, SPECIES_SHEDINJA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NINJASK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHEDINJA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WHISMUR
    evolution EVO_LEVEL_UP, 20, SPECIES_LOUDRED
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LOUDRED
    evolution EVO_LEVEL_UP, 40, SPECIES_EXPLOUD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EXPLOUD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAKUHITA
    evolution EVO_LEVEL_UP, 24, SPECIES_HARIYAMA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HARIYAMA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AZURILL
    evolution EVO_HAPPINESS, 0, SPECIES_MARILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NOSEPASS
    evolution EVO_LEVEL_ELECTRIC_FIELD, 0, SPECIES_PROBOPASS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SKITTY
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_DELCATTY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DELCATTY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SABLEYE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAWILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARON
    evolution EVO_LEVEL_UP, 32, SPECIES_LAIRON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LAIRON
    evolution EVO_LEVEL_UP, 42, SPECIES_AGGRON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AGGRON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEDITITE
    evolution EVO_LEVEL_UP, 37, SPECIES_MEDICHAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MEDICHAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELECTRIKE
    evolution EVO_LEVEL_UP, 26, SPECIES_MANECTRIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANECTRIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PLUSLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MINUN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VOLBEAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ILLUMISE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROSELIA
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_ROSERADE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GULPIN
    evolution EVO_LEVEL_UP, 26, SPECIES_SWALOT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWALOT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CARVANHA
    evolution EVO_LEVEL_UP, 30, SPECIES_SHARPEDO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHARPEDO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WAILMER
    evolution EVO_LEVEL_UP, 40, SPECIES_WAILORD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WAILORD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_NUMEL
    evolution EVO_LEVEL_UP, 33, SPECIES_CAMERUPT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CAMERUPT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TORKOAL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPOINK
    evolution EVO_LEVEL_UP, 32, SPECIES_GRUMPIG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GRUMPIG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPINDA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TRAPINCH
    evolution EVO_LEVEL_UP, 35, SPECIES_VIBRAVA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VIBRAVA
    evolution EVO_LEVEL_UP, 45, SPECIES_FLYGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FLYGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CACNEA
    evolution EVO_LEVEL_UP, 32, SPECIES_CACTURNE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CACTURNE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWABLU
    evolution EVO_LEVEL_UP, 35, SPECIES_ALTARIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ALTARIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZANGOOSE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEVIPER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUNATONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SOLROCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BARBOACH
    evolution EVO_LEVEL_UP, 30, SPECIES_WHISCASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WHISCASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CORPHISH
    evolution EVO_LEVEL_UP, 30, SPECIES_CRAWDAUNT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRAWDAUNT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BALTOY
    evolution EVO_LEVEL_UP, 36, SPECIES_CLAYDOL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLAYDOL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LILEEP
    evolution EVO_LEVEL_UP, 40, SPECIES_CRADILY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRADILY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ANORITH
    evolution EVO_LEVEL_UP, 40, SPECIES_ARMALDO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARMALDO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FEEBAS
    evolution EVO_MAX_BEAUTY, 170, SPECIES_MILOTIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MILOTIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CASTFORM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KECLEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHUPPET
    evolution EVO_LEVEL_UP, 37, SPECIES_BANETTE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BANETTE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUSKULL
    evolution EVO_LEVEL_UP, 37, SPECIES_DUSCLOPS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUSCLOPS
    evolution EVO_LEVEL_UP, 30, SPECIES_DUSKNOIR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TROPIUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHIMECHO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ABSOL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WYNAUT
    evolution EVO_LEVEL_UP, 15, SPECIES_WOBBUFFET
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNORUNT
    evolution EVO_LEVEL_UP, 42, SPECIES_GLALIE
    evolution EVO_USE_ITEM_FEMALE, ITEM_DAWN_STONE, SPECIES_FROSLASS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLALIE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPHEAL
    evolution EVO_LEVEL_UP, 32, SPECIES_SEALEO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEALEO
    evolution EVO_LEVEL_UP, 44, SPECIES_WALREIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WALREIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CLAMPERL
    evolution EVO_USE_ITEM_DAY, ITEM_WATER_STONE, SPECIES_HUNTAIL
    evolution EVO_USE_ITEM_NIGHT, ITEM_WATER_STONE, SPECIES_GOREBYSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HUNTAIL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOREBYSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RELICANTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUVDISC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BAGON
    evolution EVO_LEVEL_UP, 30, SPECIES_SHELGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHELGON
    evolution EVO_LEVEL_UP, 50, SPECIES_SALAMENCE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SALAMENCE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BELDUM
    evolution EVO_LEVEL_UP, 20, SPECIES_METANG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_METANG
    evolution EVO_LEVEL_UP, 45, SPECIES_METAGROSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_METAGROSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REGIROCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REGICE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REGISTEEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LATIAS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LATIOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KYOGRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GROUDON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RAYQUAZA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JIRACHI
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEOXYS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TURTWIG
    evolution EVO_LEVEL_UP, 18, SPECIES_GROTLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GROTLE
    evolution EVO_LEVEL_UP, 32, SPECIES_TORTERRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TORTERRA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHIMCHAR
    evolution EVO_LEVEL_UP, 14, SPECIES_MONFERNO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MONFERNO
    evolution EVO_LEVEL_UP, 36, SPECIES_INFERNAPE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_INFERNAPE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIPLUP
    evolution EVO_LEVEL_UP, 16, SPECIES_PRINPLUP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PRINPLUP
    evolution EVO_LEVEL_UP, 36, SPECIES_EMPOLEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EMPOLEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STARLY
    evolution EVO_LEVEL_UP, 14, SPECIES_STARAVIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STARAVIA
    evolution EVO_LEVEL_UP, 34, SPECIES_STARAPTOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STARAPTOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BIDOOF
    evolution EVO_LEVEL_UP, 15, SPECIES_BIBAREL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BIBAREL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KRICKETOT
    evolution EVO_LEVEL_UP, 10, SPECIES_KRICKETUNE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KRICKETUNE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHINX
    evolution EVO_LEVEL_UP, 15, SPECIES_LUXIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUXIO
    evolution EVO_LEVEL_UP, 30, SPECIES_LUXRAY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUXRAY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BUDEW
    evolution EVO_HAPPINESS_DAY, 0, SPECIES_ROSELIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROSERADE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRANIDOS
    evolution EVO_LEVEL_UP, 30, SPECIES_RAMPARDOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RAMPARDOS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHIELDON
    evolution EVO_LEVEL_UP, 30, SPECIES_BASTIODON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BASTIODON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BURMY
    evolution EVO_LEVEL_FEMALE, 20, SPECIES_WORMADAM
    evolution EVO_LEVEL_MALE, 20, SPECIES_MOTHIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WORMADAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MOTHIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_COMBEE
    evolution EVO_LEVEL_FEMALE, 21, SPECIES_VESPIQUEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VESPIQUEN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PACHIRISU
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BUIZEL
    evolution EVO_LEVEL_UP, 26, SPECIES_FLOATZEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FLOATZEL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHERUBI
    evolution EVO_LEVEL_UP, 25, SPECIES_CHERRIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHERRIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHELLOS
    evolution EVO_LEVEL_UP, 30, SPECIES_GASTRODON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GASTRODON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AMBIPOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRIFLOON
    evolution EVO_LEVEL_UP, 28, SPECIES_DRIFBLIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRIFBLIM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BUNEARY
    evolution EVO_HAPPINESS, 0, SPECIES_LOPUNNY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LOPUNNY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MISMAGIUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HONCHKROW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLAMEOW
    evolution EVO_LEVEL_UP, 38, SPECIES_PURUGLY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PURUGLY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHINGLING
    evolution EVO_HAPPINESS_NIGHT, 0, SPECIES_CHIMECHO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STUNKY
    evolution EVO_LEVEL_UP, 34, SPECIES_SKUNTANK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SKUNTANK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BRONZOR
    evolution EVO_LEVEL_UP, 33, SPECIES_BRONZONG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BRONZONG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BONSLY
    evolution EVO_KNOWS_MOVE, MOVE_MIMIC, SPECIES_SUDOWOODO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MIMEJR
    evolution EVO_KNOWS_MOVE, MOVE_MIMIC, SPECIES_MR_MIME
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HAPPINY
    evolution EVO_USE_ITEM_DAY, ITEM_OVAL_STONE, SPECIES_CHANSEY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHATOT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SPIRITOMB
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GIBLE
    evolution EVO_LEVEL_UP, 24, SPECIES_GABITE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GABITE
    evolution EVO_LEVEL_UP, 48, SPECIES_GARCHOMP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GARCHOMP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MUNCHLAX
    evolution EVO_HAPPINESS, 0, SPECIES_SNORLAX
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RIOLU
    evolution EVO_HAPPINESS_DAY, 0, SPECIES_LUCARIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUCARIO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HIPPOPOTAS
    evolution EVO_LEVEL_UP, 34, SPECIES_HIPPOWDON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HIPPOWDON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SKORUPI
    evolution EVO_LEVEL_UP, 40, SPECIES_DRAPION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRAPION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CROAGUNK
    evolution EVO_LEVEL_UP, 37, SPECIES_TOXICROAK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TOXICROAK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CARNIVINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FINNEON
    evolution EVO_LEVEL_UP, 31, SPECIES_LUMINEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LUMINEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANTYKE
    evolution EVO_MON_IN_PARTY, SPECIES_REMORAID, SPECIES_MANTINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNOVER
    evolution EVO_LEVEL_UP, 40, SPECIES_ABOMASNOW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ABOMASNOW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WEAVILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGNEZONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LICKILICKY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RHYPERIOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TANGROWTH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELECTIVIRE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAGMORTAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TOGEKISS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_YANMEGA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LEAFEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLACEON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GLISCOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MAMOSWINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PORYGON_Z
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GALLADE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PROBOPASS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUSKNOIR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FROSLASS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_UXIE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MESPRIT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AZELF
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DIALGA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PALKIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HEATRAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REGIGIGAS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GIRATINA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRESSELIA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PHIONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANAPHY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DARKRAI
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHAYMIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARCEUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EGG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BAD_EGG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEOXYS_ATTACK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEOXYS_DEFENSE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEOXYS_SPEED
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WORMADAM_SANDY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WORMADAM_TRASHY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GIRATINA_ORIGIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHAYMIN_SKY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM_HEAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM_WASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM_FROST
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM_FAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROTOM_MOW
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata





evodata SPECIES_508
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_509
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_510
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_511
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_512
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_513
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_514
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_515
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_516
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_517
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_518
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_519
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_520
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_521
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_522
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_523
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_524
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_525
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_526
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_527
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_528
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_529
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_530
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_531
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_532
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_533
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_534
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_535
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_536
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_537
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_538
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_539
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_540
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_541
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_542
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_543
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VICTINI
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SNIVY
    evolution EVO_LEVEL_UP, 17, SPECIES_SERVINE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SERVINE
    evolution EVO_LEVEL_UP, 36, SPECIES_SERPERIOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SERPERIOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TEPIG
    evolution EVO_LEVEL_UP, 17, SPECIES_PIGNITE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIGNITE
    evolution EVO_LEVEL_UP, 36, SPECIES_EMBOAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EMBOAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_OSHAWOTT
    evolution EVO_LEVEL_UP, 17, SPECIES_DEWOTT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEWOTT
    evolution EVO_LEVEL_UP, 36, SPECIES_SAMUROTT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SAMUROTT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PATRAT
    evolution EVO_LEVEL_UP, 20, SPECIES_WATCHOG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WATCHOG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LILLIPUP
    evolution EVO_LEVEL_UP, 16, SPECIES_HERDIER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HERDIER
    evolution EVO_LEVEL_UP, 32, SPECIES_STOUTLAND
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STOUTLAND
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PURRLOIN
    evolution EVO_LEVEL_UP, 20, SPECIES_LIEPARD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LIEPARD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PANSAGE
    evolution EVO_USE_ITEM, ITEM_LEAF_STONE, SPECIES_SIMISAGE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SIMISAGE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PANSEAR
    evolution EVO_USE_ITEM, ITEM_FIRE_STONE, SPECIES_SIMISEAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SIMISEAR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PANPOUR
    evolution EVO_USE_ITEM, ITEM_WATER_STONE, SPECIES_SIMIPOUR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SIMIPOUR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MUNNA
    evolution EVO_USE_ITEM, ITEM_MOON_STONE, SPECIES_MUSHARNA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MUSHARNA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PIDOVE
    evolution EVO_LEVEL_UP, 21, SPECIES_TRANQUILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TRANQUILL
    evolution EVO_LEVEL_UP, 32, SPECIES_UNFEZANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_UNFEZANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BLITZLE
    evolution EVO_LEVEL_UP, 27, SPECIES_ZEBSTRIKA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZEBSTRIKA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ROGGENROLA
    evolution EVO_LEVEL_UP, 25, SPECIES_BOLDORE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BOLDORE
    evolution EVO_LEVEL_UP,30, SPECIES_GIGALITH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GIGALITH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WOOBAT
    evolution EVO_HAPPINESS, 0, SPECIES_SWOOBAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWOOBAT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRILBUR
    evolution EVO_LEVEL_UP, 31, SPECIES_EXCADRILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EXCADRILL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AUDINO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TIMBURR
    evolution EVO_LEVEL_UP, 25, SPECIES_GURDURR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GURDURR
    evolution EVO_LEVEL_UP, 30, SPECIES_CONKELDURR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CONKELDURR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TYMPOLE
    evolution EVO_LEVEL_UP, 25, SPECIES_PALPITOAD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PALPITOAD
    evolution EVO_LEVEL_UP, 36, SPECIES_SEISMITOAD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEISMITOAD
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_THROH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SAWK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SEWADDLE
    evolution EVO_LEVEL_UP, 20, SPECIES_SWADLOON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWADLOON
    evolution EVO_HAPPINESS, 0, SPECIES_LEAVANNY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LEAVANNY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VENIPEDE
    evolution EVO_LEVEL_UP, 22, SPECIES_WHIRLIPEDE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WHIRLIPEDE
    evolution EVO_LEVEL_UP, 30, SPECIES_SCOLIPEDE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCOLIPEDE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_COTTONEE
    evolution EVO_USE_ITEM, ITEM_SUN_STONE, SPECIES_WHIMSICOTT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_WHIMSICOTT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PETILIL
    evolution EVO_USE_ITEM, ITEM_SUN_STONE, SPECIES_LILLIGANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LILLIGANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BASCULIN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SANDILE
    evolution EVO_LEVEL_UP, 29, SPECIES_KROKOROK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KROKOROK
    evolution EVO_LEVEL_UP, 40, SPECIES_KROOKODILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KROOKODILE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DARUMAKA
    evolution EVO_LEVEL_UP, 35, SPECIES_DARMANITAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DARMANITAN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MARACTUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DWEBBLE
    evolution EVO_LEVEL_UP, 34, SPECIES_CRUSTLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRUSTLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCRAGGY
    evolution EVO_LEVEL_UP, 39, SPECIES_SCRAFTY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SCRAFTY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SIGILYPH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_YAMASK
    evolution EVO_LEVEL_UP, 34, SPECIES_COFAGRIGUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_COFAGRIGUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TIRTOUGA
    evolution EVO_LEVEL_UP, 37, SPECIES_CARRACOSTA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CARRACOSTA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARCHEN
    evolution EVO_LEVEL_UP, 37, SPECIES_ARCHEOPS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ARCHEOPS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TRUBBISH
    evolution EVO_LEVEL_UP, 36, SPECIES_GARBODOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GARBODOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZORUA
    evolution EVO_LEVEL_UP, 30, SPECIES_ZOROARK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZOROARK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MINCCINO
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_CINCCINO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CINCCINO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOTHITA
    evolution EVO_LEVEL_UP, 32, SPECIES_GOTHORITA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOTHORITA
    evolution EVO_LEVEL_UP, 41, SPECIES_GOTHITELLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOTHITELLE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SOLOSIS
    evolution EVO_LEVEL_UP, 32, SPECIES_DUOSION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUOSION
    evolution EVO_LEVEL_UP, 41, SPECIES_REUNICLUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_REUNICLUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DUCKLETT
    evolution EVO_LEVEL_UP, 35, SPECIES_SWANNA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SWANNA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VANILLITE
    evolution EVO_LEVEL_UP, 35, SPECIES_VANILLISH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VANILLISH
    evolution EVO_LEVEL_UP, 47, SPECIES_VANILLUXE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VANILLUXE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEERLING
    evolution EVO_LEVEL_UP, 34, SPECIES_SAWSBUCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SAWSBUCK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EMOLGA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KARRABLAST
    evolution EVO_LEVEL_UP, 30, SPECIES_ESCAVALIER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ESCAVALIER
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FOONGUS
    evolution EVO_LEVEL_UP, 39, SPECIES_AMOONGUSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AMOONGUSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FRILLISH
    evolution EVO_LEVEL_UP, 40, SPECIES_JELLICENT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JELLICENT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ALOMOMOLA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_JOLTIK
    evolution EVO_LEVEL_UP, 36, SPECIES_GALVANTULA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GALVANTULA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FERROSEED
    evolution EVO_LEVEL_UP, 40, SPECIES_FERROTHORN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FERROTHORN
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KLINK
    evolution EVO_LEVEL_UP, 38, SPECIES_KLANG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KLANG
    evolution EVO_LEVEL_UP, 49, SPECIES_KLINKLANG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KLINKLANG
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TYNAMO
    evolution EVO_LEVEL_UP, 39, SPECIES_EELEKTRIK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EELEKTRIK
    evolution EVO_USE_ITEM, ITEM_THUNDERSTONE, SPECIES_EELEKTROSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_EELEKTROSS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ELGYEM
    evolution EVO_LEVEL_UP, 42, SPECIES_BEHEEYEM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BEHEEYEM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LITWICK
    evolution EVO_LEVEL_UP, 41, SPECIES_LAMPENT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LAMPENT
    evolution EVO_USE_ITEM, ITEM_DUSK_STONE, SPECIES_CHANDELURE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CHANDELURE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_AXEW
    evolution EVO_LEVEL_UP, 38, SPECIES_FRAXURE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_FRAXURE
    evolution EVO_LEVEL_UP, 48, SPECIES_HAXORUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HAXORUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CUBCHOO
    evolution EVO_LEVEL_UP, 37, SPECIES_BEARTIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BEARTIC
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_CRYOGONAL
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_SHELMET
    evolution EVO_LEVEL_UP, 30, SPECIES_ACCELGOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ACCELGOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_STUNFISK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MIENFOO
    evolution EVO_LEVEL_UP, 50, SPECIES_MIENSHAO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MIENSHAO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DRUDDIGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLETT
    evolution EVO_LEVEL_UP, 43, SPECIES_GOLURK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GOLURK
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_PAWNIARD
    evolution EVO_LEVEL_UP, 52, SPECIES_BISHARP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BISHARP
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BOUFFALANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RUFFLET
    evolution EVO_LEVEL_UP, 54, SPECIES_BRAVIARY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_BRAVIARY
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VULLABY
    evolution EVO_LEVEL_UP, 54, SPECIES_MANDIBUZZ
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MANDIBUZZ
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HEATMOR
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DURANT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_DEINO
    evolution EVO_LEVEL_UP, 50, SPECIES_ZWEILOUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZWEILOUS
    evolution EVO_LEVEL_UP, 64, SPECIES_HYDREIGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_HYDREIGON
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LARVESTA
    evolution EVO_LEVEL_UP, 59, SPECIES_VOLCARONA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VOLCARONA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_COBALION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TERRAKION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_VIRIZION
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_TORNADUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_THUNDURUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_RESHIRAM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_ZEKROM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_LANDORUS
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KYUREM
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_KELDEO
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_MELOETTA
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_GENESECT
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_650
    evolution EVO_LEVEL_UP, 16, SPECIES_651
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_651
    evolution EVO_LEVEL_UP, 36, SPECIES_652
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_652
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_653
    evolution EVO_LEVEL_UP, 16, SPECIES_654
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_654
    evolution EVO_LEVEL_UP, 36, SPECIES_655
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_655
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_656
    evolution EVO_LEVEL_UP, 16, SPECIES_657
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_657
    evolution EVO_LEVEL_UP, 36, SPECIES_658
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_658
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_659
    evolution EVO_LEVEL_UP, 20, SPECIES_660
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_660
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_661
    evolution EVO_LEVEL_UP, 17, SPECIES_662
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_662
    evolution EVO_LEVEL_UP, 35, SPECIES_663
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_663
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_664
    evolution EVO_LEVEL_UP, 9, SPECIES_665
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_665
    evolution EVO_LEVEL_UP, 12, SPECIES_666
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_666
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_667
    evolution EVO_LEVEL_UP, 35, SPECIES_668
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_668
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_669
    evolution EVO_LEVEL_UP, 19, SPECIES_670
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_670
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_671
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_671
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_672
    evolution EVO_LEVEL_UP, 32, SPECIES_673
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_673
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_674 //与恶
    evolution EVO_LEVEL_UP, 32, SPECIES_675
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_675
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_676
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_677
    evolution EVO_LEVEL_UP, 25, SPECIES_678
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_678
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_679
    evolution EVO_LEVEL_UP, 35, SPECIES_680
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_680
    evolution EVO_USE_ITEM, ITEM_DAWN_STONE, SPECIES_681
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_681
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_682
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_683
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_683
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_684
    evolution EVO_USE_ITEM, ITEM_SHINY_STONE, SPECIES_685
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_685
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_686
    evolution EVO_LEVEL_UP, 30, SPECIES_687
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_687
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_688
    evolution EVO_LEVEL_UP, 39, SPECIES_689
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_689
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_690
    evolution EVO_LEVEL_UP, 48, SPECIES_691
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_691
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_692
    evolution EVO_LEVEL_UP, 37, SPECIES_693
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_693
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_694
    evolution EVO_USE_ITEM, ITEM_SUN_STONE, SPECIES_695
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_695
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_696
    evolution EVO_LEVEL_UP, 39, SPECIES_697
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_697
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_698
    evolution EVO_LEVEL_UP, 39, SPECIES_699
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_699
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_700
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_701
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_702
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_703
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_704
    evolution EVO_LEVEL_UP, 40, SPECIES_705
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_705
    evolution EVO_LEVEL_UP, 50, SPECIES_706
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_706
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_707
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_708
    evolution EVO_LEVEL_UP, 40, SPECIES_709
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_709
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_710
    evolution EVO_LEVEL_UP, 40, SPECIES_711
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_711
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_712
    evolution EVO_LEVEL_UP, 37, SPECIES_713
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_713
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_714
    evolution EVO_LEVEL_UP, 48, SPECIES_715
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_715
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_716
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_717
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_718
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_719
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_720
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_721
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_722
    evolution EVO_LEVEL_UP, 16, SPECIES_723
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_723
    evolution EVO_LEVEL_UP, 34, SPECIES_724
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_724
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_725
    evolution EVO_LEVEL_UP, 16, SPECIES_726
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_726
    evolution EVO_LEVEL_UP, 36, SPECIES_727
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_727
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_728
    evolution EVO_LEVEL_UP, 16, SPECIES_729
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_729
    evolution EVO_LEVEL_UP, 34, SPECIES_730
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_730
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_731
    evolution EVO_LEVEL_UP, 14, SPECIES_732
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_732
    evolution EVO_LEVEL_UP, 28, SPECIES_733
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_733
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_734
    evolution EVO_LEVEL_UP, 20, SPECIES_735
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_735
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_736
    evolution EVO_LEVEL_UP, 20, SPECIES_737
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_737
    evolution EVO_USE_ITEM, ITEM_THUNDERSTONE, SPECIES_738
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_738
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_739
    evolution EVO_LEVEL_ELECTRIC_FIELD, 1, SPECIES_740
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_740
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_741
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_742
    evolution EVO_LEVEL_UP, 25, SPECIES_743
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_743
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_744
    evolution EVO_LEVEL_UP, 25, SPECIES_745
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_745
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_746
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_747
    evolution EVO_LEVEL_UP, 38, SPECIES_748
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_748
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_749
    evolution EVO_LEVEL_UP, 30, SPECIES_750
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_750
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_751
    evolution EVO_LEVEL_UP, 22, SPECIES_752
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_752
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_753
    evolution EVO_LEVEL_UP,34, SPECIES_754
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_754
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_755
    evolution EVO_LEVEL_UP, 24, SPECIES_756
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_756
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_757
    evolution EVO_LEVEL_UP, 33, SPECIES_758
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_758
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_759
    evolution EVO_LEVEL_UP, 27, SPECIES_760
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_760
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_761
    evolution EVO_LEVEL_UP, 18, SPECIES_762
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_762
    evolution EVO_KNOWS_MOVE, MOVE_STOMP, SPECIES_763
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_763
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_764
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_765
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_766
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_767
    evolution EVO_LEVEL_UP, 30, SPECIES_768
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_768
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_769
    evolution EVO_LEVEL_UP, 42, SPECIES_770
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_770
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_771
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_772
    evolution EVO_HAPPINESS, 158, SPECIES_773
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_773
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_774
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_775
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_776
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_777
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_778
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_779
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_780
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_781
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_782
    evolution EVO_LEVEL_UP, 35, SPECIES_783
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_783
    evolution EVO_LEVEL_UP,45, SPECIES_784
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_784
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_785
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_786
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_787
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_788
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_789
    evolution EVO_LEVEL_UP, 43, SPECIES_790
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_790
    evolution EVO_HAPPINESS_DAY, 200, SPECIES_791
    evolution EVO_HAPPINESS_NIGHT, 200, SPECIES_792
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_791
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_792
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_793
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_794
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_795
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_796
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_797
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_798
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_799
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_800
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_801
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_802
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_803
    evolution EVO_KNOWS_MOVE, MOVE_DRAGON_PULSE, SPECIES_804
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_804
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_805
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_806
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_807
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_808
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_809
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_810
    evolution EVO_LEVEL_UP, 16, SPECIES_811
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_811
    evolution EVO_LEVEL_UP, 35, SPECIES_812
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_812
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_813
    evolution EVO_LEVEL_UP, 16, SPECIES_814
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_814
    evolution EVO_LEVEL_UP, 35, SPECIES_815
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_815
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_816
    evolution EVO_LEVEL_UP, 16, SPECIES_817
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_817
    evolution EVO_LEVEL_UP, 35, SPECIES_818
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_818
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_819
    evolution EVO_LEVEL_UP, 24, SPECIES_820
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_820
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_821
    evolution EVO_LEVEL_UP, 18, SPECIES_822
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_822
    evolution EVO_LEVEL_UP, 38, SPECIES_823
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_823
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_824
    evolution EVO_LEVEL_UP, 10, SPECIES_825
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_825
    evolution EVO_LEVEL_UP, 30, SPECIES_826
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_826
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_827
    evolution EVO_LEVEL_UP,18, SPECIES_828
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_828
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_829
    evolution EVO_LEVEL_UP, 20, SPECIES_830
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_830
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_831
    evolution EVO_LEVEL_UP, 24, SPECIES_832
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_832
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_833
    evolution EVO_LEVEL_UP, 22, SPECIES_834
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_834
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_835
    evolution EVO_LEVEL_UP, 25, SPECIES_836
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_836
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_837
    evolution EVO_LEVEL_UP, 18, SPECIES_838
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_838
    evolution EVO_LEVEL_UP, 34, SPECIES_839
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_839
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_840
    evolution EVO_USE_ITEM, ITEM_TART_APPLE, SPECIES_841
    evolution EVO_USE_ITEM, ITEM_SWEET_APPLE, SPECIES_842
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_841
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_842
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_843
    evolution EVO_LEVEL_UP, 36, SPECIES_844
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_844
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_845
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_846
    evolution EVO_LEVEL_UP, 26, SPECIES_847
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_847
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_848
    evolution EVO_LEVEL_UP, 30, SPECIES_849
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_849
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_850
    evolution EVO_LEVEL_UP, 28, SPECIES_851
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_851
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_852
    evolution EVO_KNOWS_MOVE, MOVE_TAUNT, SPECIES_853
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_853
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_854
    evolution EVO_USE_ITEM, ITEM_CRACKED_POT, SPECIES_855
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_855
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_856
    evolution EVO_LEVEL_UP, 32, SPECIES_857
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_857
    evolution EVO_LEVEL_UP, 42, SPECIES_858
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_858
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_859
    evolution EVO_LEVEL_UP, 32, SPECIES_860
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_860
    evolution EVO_LEVEL_UP, 42, SPECIES_861
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_861
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_862
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_863
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_864
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_865
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_866
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_867
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_868
    evolution EVO_LEVEL_UP, 20, SPECIES_869
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_869
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_870
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_871
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_872
    evolution EVO_HAPPINESS_NIGHT, 158, SPECIES_873
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_873
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_874
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_875
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_876
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_877
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_878
    evolution EVO_LEVEL_UP, 34, SPECIES_879
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_879
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_880
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_881
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_882
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_883
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_884
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_885
    evolution EVO_LEVEL_UP, 50, SPECIES_886
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_886
    evolution EVO_LEVEL_UP, 60, SPECIES_887
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_887
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_888
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_889
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_890
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_891
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_892
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_893
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata


evodata SPECIES_894
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_895
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_896
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_897
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_898
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_899
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_900
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_901
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_902
    evolution EVO_LEVEL_UP, 40, SPECIES_RAPIDASH
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_903
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_904
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata

evodata SPECIES_905
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    evolution EVO_NONE, 0, SPECIES_NONE
    terminateevodata