.nds
.thumb

.open "base/overlay/overlay_0001.bin", 0x021E5900

.org 0x021F73C4

.halfword NUM_OF_MON_OVERWORLDS + 0x1E4 // update the limiter
// 0x1E4 is the start of the follower mon tags


.org 0x021F92FC

.word gOWTagToFileNum


.org 0x021FA280

.word gOWTagToFileNum

.close


.open "base/arm9.bin", 0x02000000

.org 0x02069D70

.area 0x58

get_mon_ow_tag:
	push {r3-r7, lr}
	mov r5, r0
	mov r6, r1
	mov r7, r2
	ldr r1, =(NUM_OF_MONS)
	cmp r5, r1
	bgt @@_not_mon_ow
	ldr r1, =(SPECIES_ARCEUS)
	cmp r5, r1
	bgt @@_handleNewMons
	mov r4, #0x1AC / 2
	lsl r4, r4, #1
	b @@_getOWDataNum

@@_not_mon_ow:
	mov r4, #0x1AC / 2
	lsl r4, r4, #1
	b @@_return_r4

@@_handleNewMons:
	mov r4, #0x1E4 / 2
	lsl r4, r4, #1

@@_getOWDataNum: // assume valid index because there is no reason it would not be
	bl 0x0206A304 // get_ow_data_file_num
	add r4, r4, r0 // add data file num to adjustment value
	mov r0, r5
	bl does_species_have_dimorphism
	cmp r0, #0
	beq @@_handleForms
	cmp r7, #1
	bne @@_return_r4
	add r4, r4, #1
	b @@_return_r4 // if female then no further adjustment needs to be made

@@_handleForms:
	add r4, r4, r6 // if a mon has no form, then there is no reason the form field should have a value

@@_return_r4:
	mov r0, r4
	pop {r3-r7, pc}


.pool

.endarea


.org 0x0206A30C

.word gSpeciesToOWNum // update the table, wherever it is


.org 0x0206A338

.area 0x28


// rewrite this to use a byte per mon instead of a whole hword
// might rewrite to use a nybble eventually

// r0 is species
does_species_have_dimorphism:
	push {r3, lr}
	cmp r0, #0
	ble @@_invalidMon
	ldr r1, =(NUM_OF_MONS)
	cmp r0, r1
	ble @@_validMon

@@_invalidMon:
	bl 0x0202551C
	mov r0, #0
	b @@_getDimorphism
	
@@_validMon:
	sub r0, r0, #1

@@_getDimorphism:
	ldr r1, =gDimorphismTable
	ldrb r0, [r1, r0]
	pop {r3, pc}

.pool

.endarea

.close
