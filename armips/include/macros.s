// level up learnset macros

.macro levelup,species

	.if species < 10
		.create "narc/levelupdata/3_00" + tostring(species),0
	.elseif species < 100
		.create "narc/levelupdata/3_0" + tostring(species),0
	.else
		.create "narc/levelupdata/3_" + tostring(species),0
	.endif

.endmacro

.macro learnset,move,level
    .word (level << 16 | move)
.endmacro

.macro terminatelearnset
    .word 0xFFFF
	
	.close
.endmacro


// mon data macros

.macro mondata,species

	.if species < 10
		.create "narc/mondata/mondata_00" + tostring(species),0
	.elseif species < 100
		.create "narc/mondata/mondata_0" + tostring(species),0
	.else
		.create "narc/mondata/mondata_" + tostring(species),0
	.endif

.endmacro

.macro basestats,hp,atk,def,spd,spatk,spdef
	.byte hp, atk, def, spd, spatk, spdef
.endmacro

.macro types,type1,type2
	.byte type1
	.byte type2
.endmacro

.macro catchrate,num
	.byte num
.endmacro

.macro baseexp,num
	.byte num
.endmacro

.macro evyields,hp,atk,def,spd,spatk,spdef
	.halfword (hp | atk << 2 | def << 4 | spd << 6 | spatk << 8 | spdef << 10)
.endmacro

.macro items,item1,item2
	.halfword item1
	.halfword item2
.endmacro

.macro genderratio,num
	.byte num
.endmacro

.macro eggcycles,num
	.byte num
.endmacro

.macro basefriendship,num
	.byte num
.endmacro

.macro growthrate,num
	.byte num
.endmacro

.macro egggroups,group1,group2
	.byte group1
	.byte group2
.endmacro

.macro abilities,abi1,abi2
	.byte abi1
	.byte abi2
.endmacro

.macro runchance,num
	.byte num
.endmacro

.macro colorflip,color,flip
	.byte (color | flip << 7)
.endmacro

.macro tmdata,num1,num2,num3,num4 // defined specifically in separate files though
	.halfword 0 // padding
	
	.word num1
	.word num2
	.word num3
	.word num4
	
	.close
.endmacro


// evolution data macros

.macro evodata,species

	.if species < 10
		.create "narc/evodata/evodata_00" + tostring(species),0
	.elseif species < 100
		.create "narc/evodata/evodata_0" + tostring(species),0
	.else
		.create "narc/evodata/evodata_" + tostring(species),0
	.endif
	
.endmacro

.macro evolution,method,parameter,species
	.halfword method
	.halfword parameter
	.halfword species
.endmacro

.macro terminateevodata
	.halfword 0
	
	.close
.endmacro


// egg move macros

.macro eggmove,move
	.halfword move
.endmacro

.macro eggmoveentry,species
	.if species == 1
		.create "narc/eggmoves/kowaza_0",0
	.endif
	
	.halfword species+20000
.endmacro

.macro terminateeggmoves
	.halfword 0xFFFF
	
	.close
.endmacro


// baby mon macro

.macro babymon,species,baby
	.if species == 0
		.create "narc/babymons.narc",0
	.endif

	.org (species * 2)
	
	.halfword baby
	
	.if species == NUM_OF_MONS
		.close
	.endif
.endmacro


// tutor move bitfield macro

.macro tutordata,species,data1,data2
	.if species == 1
		.create "narc/tutordata.narc",0
	.endif

	.org ((species - 1) * 8)
	
	.word data1
	.word data2
.endmacro

.macro heightentry,species,fback,mback,ffront,mfront
	.if (species * 4) < 10
		.create "build/a005/5_000" + tostring(species * 4),0
	.elseif (species * 4) < 100
		.create "build/a005/5_00" + tostring(species * 4),0
	.elseif (species * 4) < 1000
		.create "build/a005/5_0" + tostring(species * 4),0
	.else
		.create "build/a005/5_" + tostring(species * 4),0
	.endif
	
	.if fback != "null"
		.byte fback
	.endif
	
	.close

	.if (species * 4 + 1) < 10
		.create "build/a005/5_000" + tostring(species * 4 + 1),0
	.elseif (species * 4 + 1) < 100
		.create "build/a005/5_00" + tostring(species * 4 + 1),0
	.elseif (species * 4 + 1) < 1000
		.create "build/a005/5_0" + tostring(species * 4 + 1),0
	.else
		.create "build/a005/5_" + tostring(species * 4 + 1),0
	.endif
	
	.if mback != "null"
		.byte mback
	.endif
	
	.close

	.if (species * 4 + 2) < 10
		.create "build/a005/5_000" + tostring(species * 4 + 2),0
	.elseif (species * 4 + 2) < 100
		.create "build/a005/5_00" + tostring(species * 4 + 2),0
	.elseif (species * 4 + 2) < 1000
		.create "build/a005/5_0" + tostring(species * 4 + 2),0
	.else
		.create "build/a005/5_" + tostring(species * 4 + 2),0
	.endif
	
	.if ffront != "null"
		.byte ffront
	.endif
	
	.close

	.if (species * 4 + 3) < 10
		.create "build/a005/5_000" + tostring(species * 4 + 3),0
	.elseif (species * 4 + 3) < 100
		.create "build/a005/5_00" + tostring(species * 4 + 3),0
	.elseif (species * 4 + 3) < 1000
		.create "build/a005/5_0" + tostring(species * 4 + 3),0
	.else
		.create "build/a005/5_" + tostring(species * 4 + 3),0
	.endif
	
	.if mfront != "null"
		.byte mfront
	.endif
	
	.close
.endmacro

.macro dataentry,species,monoffy,shadowoffx,shadowsize
	.if species <= SPECIES_ARCEUS // a species in the current game
		.orga (species * 0x59) + 0x56 // edit the last 3 bytes of the structure apparently
	.else // generic frame data (it is bulbasaur)
		.orga (species * 0x59)
		.byte 0x00, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x0A, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x09, 0x05, 0x0B, 0x00, 0x0B, 0x00, 0x00, 0x01, 0x0F, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00
	.endif
	
	.byte monoffy
	.byte shadowoffx
	.byte shadowsize
.endmacro


// mon overworld narc a141 macro

.macro overworlddata,ownum,canenter,bouncespeed
	.if ownum < 10
		.create "narc/overworlddata/a141_000" + tostring(ownum),0
	.elseif ownum < 100
		.create "narc/overworlddata/a141_00" + tostring(ownum),0
	.elseif ownum < 1000
		.create "narc/overworlddata/a141_0" + tostring(ownum),0
	.else
		.create "narc/overworlddata/a141_" + tostring(ownum),0
	.endif
	
	.byte 0
	.byte canenter
	.byte bouncespeed
	.byte 0
	
	.close
.endmacro


// mon dex area macros (narc a133)

.macro specialareas,monnum,timeofday
	.if (timeofday == 0) // morning time
		.if (2 + monnum) < 10
			.create "narc/a133/a133_000" + tostring(2 + monnum),0
		.elseif (2 + monnum) < 100
			.create "narc/a133/a133_00" + tostring(2 + monnum),0
		.elseif (2 + monnum) < 1000
			.create "narc/a133/a133_0" + tostring(2 + monnum),0
		.else
			.create "narc/a133/a133_" + tostring(2 + monnum),0
		.endif
	.elseif (timeofday == 1) // day time
		.if (2 + monnum + NUM_OF_MONS) < 10
			.create "narc/a133/a133_000" + tostring(2 + monnum + NUM_OF_MONS),0
		.elseif (2 + monnum + NUM_OF_MONS) < 100
			.create "narc/a133/a133_00" + tostring(2 + monnum + NUM_OF_MONS),0
		.elseif (2 + monnum + NUM_OF_MONS) < 1000
			.create "narc/a133/a133_0" + tostring(2 + monnum + NUM_OF_MONS),0
		.else
			.create "narc/a133/a133_" + tostring(2 + monnum + NUM_OF_MONS),0
		.endif
	.elseif (timeofday == 2) // night time
		.if (2 + monnum + (2*NUM_OF_MONS)) < 10
			.create "narc/a133/a133_000" + tostring(2 + monnum + (2*NUM_OF_MONS)),0
		.elseif (2 + monnum + (2*NUM_OF_MONS)) < 100
			.create "narc/a133/a133_00" + tostring(2 + monnum + (2*NUM_OF_MONS)),0
		.elseif (2 + monnum + (2*NUM_OF_MONS)) < 1000
			.create "narc/a133/a133_0" + tostring(2 + monnum + (2*NUM_OF_MONS)),0
		.else
			.create "narc/a133/a133_" + tostring(2 + monnum + (2*NUM_OF_MONS)),0
		.endif
	.else // timeofday == 3
		.create "narc/a133/a133_" + tostring(2 + monnum + (6*NUM_OF_MONS)),0
	.endif
.endmacro

.macro routesandcities,monnum,timeofday
	.if (timeofday == 0) // morning time
		.create "narc/a133/a133_" + tostring(2 + monnum + (3*NUM_OF_MONS)),0
	.elseif (timeofday == 1) // day time
		.create "narc/a133/a133_" + tostring(2 + monnum + (4*NUM_OF_MONS)),0
	.elseif (timeofday == 2) // night time
		.create "narc/a133/a133_" + tostring(2 + monnum + (5*NUM_OF_MONS)),0
	.else // timeofday == 3
		.create "narc/a133/a133_" + tostring(2 + monnum + (7*NUM_OF_MONS)),0
	.endif
.endmacro

.macro dexendareadata
	.word 0
	
	.close
.endmacro

.macro wilddata,files
	.if files < 10
		.create "narc/wilddata/wilddata_00" + tostring(files),0
	.elseif files < 100
		.create "narc/wilddata/wilddata_0" + tostring(files),0
	.else
		.create "narc/wilddata/wilddata_" + tostring(files),0
	.endif
.endmacro

.macro wildrate,a1,a2,a3,a4,a5,a6
	.byte a1,a2,a3,a4,a5,a6,0x0,0x0
.endmacro

.macro walk_lv,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
	.byte a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
.endmacro

.macro morning_poke,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
	.halfword a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
.endmacro

.macro day_poke,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
	.halfword a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
.endmacro

.macro night_poke,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
	.halfword a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12
.endmacro

.macro pokegear,a1,a2,a3,a4
	.halfword a1,a2,a3,a4
.endmacro

.macro wildmon,level1,level2,mon
	.byte level1
	.byte level2
	.halfword mon
.endmacro

.macro swarm,a1,a2,a3,a4
	.halfword a1,a2,a3,a4
	.close
.endmacro


.macro move,movenum

	.if movenum < 10
		.create "narc/a011/move_00" + tostring(movenum),0
	.elseif movenum < 100
		.create "narc/a011/move_0" + tostring(movenum),0
	.else
		.create "narc/a011/move_" + tostring(movenum),0
	.endif
	
.endmacro

.macro battleeffect,num
	.halfword num
.endmacro

.macro pss,num
	.byte num
.endmacro

.macro basepower,num
	.byte num
.endmacro

.macro type,num
	.byte num
.endmacro

.macro accuracy,num
	.byte num
.endmacro

.macro pp,num
	.byte num
.endmacro

.macro effectchance,num
	.byte num
.endmacro

.macro target,num
	.halfword num
.endmacro

.macro priority,num
	.byte num
.endmacro

.macro flags,num
	.byte num
.endmacro

.macro appeal,num
	.byte num
.endmacro

.macro contesttype,num
	.byte num
.endmacro

.macro terminatedata
	.halfword 0
	
	.close
.endmacro
