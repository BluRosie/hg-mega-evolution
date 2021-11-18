# Makefile
ifeq ($(strip $(DEVKITPRO)),)
$(error "Please set DEVKITPRO in your environment. export DEVKITPRO=<path to>devkitPro)
endif

ifeq ($(strip $(DEVKITARM)),)
$(error "Please set DEVKITARM in your environment. export DEVKITARM=<path to>devkitARM")
endif

TOOLCHAIN := $(DEVKITARM)

.PHONY: clean all


ifeq ($(OS),Windows_NT)
EXE := .exe
else
EXE := .exe
endif

default: all

ROMNAME = rom.nds
BUILDROM = test.nds
####################### Tools #########################
MSGENC = tools/msgenc$(EXE)
NITROGFX = tools/nitrogfx$(EXE)
NDSTOOL = tools/ndstool$(EXE)
JSONPROC = tools/jsonproc$(EXE)
O2NARC = tools/o2narc$(EXE)
KNARC = tools/knarc$(EXE)
BLZ = tools/blz$(EXE)
ARMIPS = tools/armips$(EXE)
POKEPICTOOL = tools/pokepic$(EXE)
NARCHIVE = tools/narchive$(EXE)
####################### Seting ########################
PREFIX = bin/arm-none-eabi-
AS = $(DEVKITARM)/$(PREFIX)as
CC = $(DEVKITARM)/$(PREFIX)gcc
LD = $(DEVKITARM)/$(PREFIX)ld
OBJCOPY = $(DEVKITARM)/$(PREFIX)objcopy

LDFLAGS = rom.ld -T linker.ld
ASFLAGS = -mthumb -I ./data
CFLAGS = -mthumb -mno-thumb-interwork -mcpu=arm7tdmi -mtune=arm7tdmi -mno-long-calls -march=armv4t -Wall -Wextra -Os -fira-loop-pressure -fipa-pta

PYTHON = python3.7
LINK = build/linked.o
OUTPUT = build/output.bin
####################### output #########################
C_SUBDIR = src
ASM_SUBDIR = asm
INCLUDE_SUBDIR = include
BUILD = build

INCLUDE_SRCS := $(wildcard $(INCLUDE_SUBDIR)/*.h)

C_SRCS := $(wildcard $(C_SUBDIR)/*.c)
C_OBJS := $(patsubst $(C_SUBDIR)/%.c,$(BUILD)/%.o,$(C_SRCS))

ASM_SRCS := $(wildcard $(ASM_SUBDIR)/*.s)
ASM_OBJS := $(patsubst $(ASM_SUBDIR)/%.s,$(BUILD)/%.d,$(ASM_SRCS))
OBJS     := $(C_OBJS) $(ASM_OBJS)

OW_SPRITES_SRC := $(wildcard data/graphics/overworlds/*.png)
OW_SPRITES_OBJS := $(patsubst data/graphics/overworlds/*.png,build/data/graphics/overworlds/%.swav,$(OW_SPRITES_SRC))

####################### Build #########################
build/%.d:asm/%.s
	$(AS) $(ASFLAGS) -c $< -o $@

build/%.o:src/%.c
	mkdir -p build
	@echo -e "\e[32;1mCompiling $<\e[37;1m"
	$(CC) $(CFLAGS) -c $< -o $@

$(LINK):$(OBJS)
	$(LD) $(LDFLAGS) -o $@ $(C_OBJS) $(ASM_OBJS)

$(OUTPUT):$(LINK)
	$(OBJCOPY) -O binary $< $@

all: $(OUTPUT)
	rm -rf base
	mkdir -p base
	mkdir -p narc
	mkdir -p narc/pokemonow
	mkdir -p narc/pokemonicon
	mkdir -p build/pokemonow
	mkdir -p build/a018
	mkdir -p build/text
	mkdir -p narc/text
	$(NDSTOOL) -x $(ROMNAME) -9 base/arm9.bin -7 base/arm7.bin -y9 base/overarm9.bin -y7 base/overarm7.bin -d base/root -y base/overlay -t base/banner.bin -h base/header.bin
	@echo -e "\e[32;1m$(ROMNAME) Decompression successful!!\e[37;1m"
	$(NARCHIVE) extract base/root/a/0/2/8 -o build/a028/ -nf
	$(PYTHON) scripts/make.py
	$(ARMIPS) armips/global.s
	$(NARCHIVE) extract base/root/a/0/2/7 -o build/text -nf
	$(PYTHON) scripts/build.py
	make move_narc
	$(NARCHIVE) create narc/synth.narc build/a028/ -nf
	mv narc/synth.narc base/root/a/0/2/8
	@echo -e "\e[32;1mMaking ROM..\e[37;1m"
	$(NDSTOOL) -c $(BUILDROM) -9 base/arm9.bin -7 base/arm7.bin -y9 base/overarm9.bin -y7 base/overarm7.bin -d base/root -y base/overlay -t base/banner.bin -h base/header.bin
	@echo -e "\e[32;1mDone.\e[37;1m"

clean:
	rm -rf build/*
	rm -rf narc/*
	rm -rf base/*

move_narc:
	@echo "battle hud layout:"
	$(NARCHIVE) extract base/root/a/0/0/7 -o build/a007/ -nf
	cp -r data/rawdata/battle_sprite/. build/a007
	$(NARCHIVE) create narc/a007.narc build/a007/ -nf
	mv narc/a007.narc base/root/a/0/0/7
	rm -rf build/a007/
	
	@echo "move particles:"
	$(NARCHIVE) extract base/root/a/0/2/9 -o build/a029/ -nf
	cp -r data/rawdata/move_spa/. build/a029
	$(NARCHIVE) create narc/a029.narc build/a029/ -nf
	mv narc/a029.narc base/root/a/0/2/9
	rm -rf build/a029/

	@echo "move animations:"
	$(NARCHIVE) extract base/root/a/0/1/0 -o build/a010/ -nf
	cp -r data/move/move_anim/. build/a010
	$(NARCHIVE) create narc/a010.narc build/a010/ -nf
	mv narc/a010.narc base/root/a/0/1/0
	#rm -rf build/a010/

	@echo "move subeffects:"
	$(NARCHIVE) extract base/root/a/0/0/1 -o build/a001/ -nf
	cp -r data/move/move_seq/. build/a001
	$(NARCHIVE) create narc/a001.narc build/a001/ -nf
	mv narc/a001.narc base/root/a/0/0/1
	rm -rf build/a001/

	@echo "item gfx:"
	$(NARCHIVE) extract base/root/a/0/1/8 -o build/a018/ -nf
	$(NARCHIVE) create narc/a018.narc build/a018/ -nf
	mv narc/a018.narc base/root/a/0/1/8

	@echo "scripts:"
	$(NARCHIVE) extract base/root/a/0/1/2 -o build/a012/ -nf
	cp -r data/script/. build/a012
	$(NARCHIVE) create narc/a012.narc build/a012/ -nf
	mv narc/a012.narc base/root/a/0/1/2
	rm -rf build/a012/
	
	@echo "pokemon icons:"
	mv narc/pokemonicon.narc base/root/a/0/2/0
	
	@echo "mon data:"
	cp base/root/a/0/0/2 narc/mondata.narc
	$(NARCHIVE) extract narc/mondata.narc -o narc/mondata -nf
	$(ARMIPS) armips/data/mondata.s
	$(NARCHIVE) create narc/mondata.narc narc/mondata -nf
	rm -rf narc/mondata
	cp narc/mondata.narc base/root/a/0/0/2
	
	@echo "mon learnset data:"
	$(NARCHIVE) extract base/root/a/0/3/3 -o narc/levelupdata -nf
	$(ARMIPS) armips/data/levelup.s
	$(NARCHIVE) create base/root/a/0/3/3 narc/levelupdata -nf
	rm -rf narc/levelupdata

	@echo "text data:"
	$(NARCHIVE) extract base/root/a/0/2/7 -o build/text/ -nf
	$(MSGENC) -e -c charmap.txt data/text/197.txt build/text/7_197
	$(MSGENC) -e -c charmap.txt data/text/221.txt build/text/7_221
	$(MSGENC) -e -c charmap.txt data/text/222.txt build/text/7_222
	$(MSGENC) -e -c charmap.txt data/text/223.txt build/text/7_223
	$(NARCHIVE) create base/root/a/0/2/7 build/text/ -nf
	
	@echo "mon sprite data:"
	$(NARCHIVE) extract base/root/a/0/0/4 -o build/pokemonpic -nf
	$(NARCHIVE) create base/root/a/0/0/4 build/pokemonpic -nf
	$(NARCHIVE) create base/root/pbr/pokegra.narc build/pokemonpic -nf
