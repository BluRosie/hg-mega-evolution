#!/usr/bin/env python3

from glob import glob
from pathlib import Path
import os
import shutil
import itertools
import hashlib
import subprocess
import sys
from datetime import datetime

if sys.platform.startswith('win'):
    PathVar = os.environ.get('Path')
    Paths = PathVar.split(';')
    PATH = ''
    for candidatePath in Paths:
        if 'devkitARM' in candidatePath:
            PATH = candidatePath
            break
    if PATH == '':
        PATH = 'C://devkitPro//devkitARM//bin'
        if os.path.isdir(PATH) is False:
            print('...\nDevkit not found.')
            sys.exit(1)

    PREFIX = '/arm-none-eabi-'
    AS = PATH + PREFIX + 'as'
    CC = PATH + PREFIX + 'gcc'
    LD = PATH + PREFIX + 'ld'
    GR = 'deps/grit.exe'
    WAV2AGB = 'deps/wav2agb.exe'
    MID2AGB = 'deps/mid2agb.exe'
    OBJCOPY = PATH + PREFIX + 'objcopy'

SRC = './src'
GRAPHICS = './graphics'
ASSEMBLY = './armips/script'
STRINGS = './strings'
AUDIO = './audio'
BUILD = './build'
IMAGES = './Images'
ASFLAGS = ['-mthumb', '-I', ASSEMBLY]
LDFLAGS = ['PLA.ld', '-T', 'linker.ld']
CFLAGS = ['-mthumb', '-mno-thumb-interwork', '-mcpu=arm7tdmi', '-mtune=arm7tdmi',
          '-mno-long-calls', '-march=armv4t', '-Wall', '-Wextra', '-Os', '-fira-loop-pressure', '-fipa-pta']

def RunCommand(cmd: [str]):
    """Runs the command line command."""
    try:
        subprocess.check_output(cmd)
    except subprocess.CalledProcessError as e:
        try:
            print(e.output.decode(), file=sys.stderr)
        except:
            print(e)
        sys.exit(1)


def build_sprite():
    DIR = "data/graphics/sprites"
    NARC = "narc/pokemonpic.narc"
    BUILD = "build/pokemonpic"

    get_dir = os.listdir(DIR)
    fileExists = os.path.isfile(NARC)

    flag = 0
    cmd_narc = ["tools/narchive.exe"] + ["create", "narc/pokemonpic.narc", "build/pokemonpic","-nf"]
    if not os.path.exists(BUILD):
        os.makedirs(BUILD)

    for i in get_dir:
        flag = 0
        for s in os.listdir(DIR +"/" + i):
            if fileExists and os.path.getmtime(DIR + "/" + i) < os.path.getmtime(NARC):
                continue
            cmd = ["tools/gengfxnarc.exe"] + ["data/graphics/sprites",BUILD,str(len(get_dir) - 1)]
            print("编译宠物图片")
            RunCommand(cmd)
            flag = 1
            break
        if flag == 1:
            RunCommand(cmd_narc)
            break

def build_icon():
    DIR = "data/graphics/icongfx"
    NARC = "narc/pokemonicon.narc"

    get_dir = os.listdir(DIR)
    fileExists = os.path.isfile(NARC)

    flag = False

    cmd_narc = ["tools/narchive.exe"] + ["create", "narc/pokemonicon.narc", "narc/pokemonicon","-nf"]

    for i in get_dir:
        if int(i.replace(".png","")) > 999:
            OBJ = "narc/pokemonicon/2_" + i.replace(".png",".NCGR")
        else:
            OBJ = "narc/pokemonicon/1_" + i.replace(".png",".NCGR")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + "/" + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/nitrogfx.exe"] + ["data/graphics/icongfx/" + i, OBJ , "-clobbersize", "-version101"]
        flag = True
        RunCommand(cmd)
        
    if not fileExists or flag:
        for i in os.listdir("data/rawdata/first files from a020/"):
            shutil.copy("data/rawdata/first files from a020/" + i, "narc/pokemonicon/" + i)
        RunCommand(cmd_narc)

def build_ow():
    DIR = "data/graphics/overworlds"
    NARC = "narc/pokemonow.narc"

    get_dir = os.listdir(DIR)
    fileExists = os.path.isfile(NARC)

    flag = False
    file = []

    cmd_extract = ["tools/narchive.exe"] + ["extract", "base/root/a/0/8/1", "-o","narc/pokemonow","-nf"]
    cmd_narc = ["tools/narchive.exe"] + ["create", "narc/pokemonow.narc", "narc/pokemonow","-nf"]

    for i in get_dir:
        if "_shiny" in i:
            continue
        if len(i) > 7:
            OBJ = "build/pokemonow/2_" + i.replace(".png","")
        else:
            OBJ = "build/pokemonow/1_" + i.replace(".png","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + "/" + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/pngtobtx0.exe"] + [DIR + "/" + i,OBJ]
        print("build " + i)
        file.append(i.replace(".png",''))
        flag = True
        RunCommand(cmd)
        
    if not fileExists or flag:
        RunCommand(cmd_extract)
        for i in file:
            if len(i) > 3:
                shutil.copyfile("build/pokemonow/2_" + i, "narc/pokemonow/2_" + i)
            else:
                shutil.copyfile("build/pokemonow/1_" + i, "narc/pokemonow/1_" + i)
        RunCommand(cmd_narc)
            
def build_txt():
    DIR = "data/text"
    NARC = "narc/text.narc"
    BUILD = "build/text"

    get_dir = os.listdir(DIR)
    fileExists = os.path.isfile(NARC)

    flag = False

    cmd_narc = ["tools/narchive.exe"] + ["create", "narc/text.narc", "build/text","-nf"]
        
    for i in get_dir:
        if ".key" in i:
            continue
        OBJ = "build/text/7_" + i.replace(".txt","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + "/" + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/msgenc.exe"] + ["-e", "-c","charmap.txt", DIR + "/" + i,OBJ]
        flag = True
        RunCommand(cmd)

    if not fileExists or flag:
        RunCommand(cmd_narc)
        
def build_script():
    DIR = "armips/script/"
    BUILD = "data/script/"

    get_dir = os.listdir(DIR)
    if len(get_dir) == 0:
        return

    for i in get_dir:
        OBJ = BUILD + i.replace(".s","")
        if ".o" in i:
            continue
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = [AS] + ASFLAGS + ['-c', DIR + i, '-o', DIR + i.replace(".s",".o")]
        print("script "+i)
        RunCommand(cmd)
        cmd = [OBJCOPY, '-O', 'binary', DIR + i.replace(".s",".o"), OBJ]
        RunCommand(cmd)
        os.remove(DIR + i.replace(".s",".o"))

def build_anim_script():
    DIR = "armips/move/move_anim/"
    BUILD = "data/move/move_anim/"

    get_dir = os.listdir(DIR)
    if len(get_dir) == 0:
        return

    for i in get_dir:
        OBJ = BUILD + i.replace(".s","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/armips.exe"] + [DIR + i]
        print("script "+i)
        RunCommand(cmd)

def build_seq_script():
    DIR = "armips/move/move_seq/"
    BUILD = "data/move/move_seq/"

    get_dir = os.listdir(DIR)
    if len(get_dir) == 0:
        return

    for i in get_dir:
        OBJ = BUILD + i.replace(".s","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/armips.exe"] + [DIR + i]
        print("script "+i)
        RunCommand(cmd)

def build_effect_script():
    DIR = "armips/move/move_effect/"
    BUILD = "data/move/move_effect/"

    get_dir = os.listdir(DIR)
    if len(get_dir) == 0:
        return

    for i in get_dir:
        OBJ = BUILD + i.replace(".s","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/armips.exe"] + [DIR + i]
        print("script "+i)
        RunCommand(cmd)

def build_suub_script():
    DIR = "armips/move/move_sub/"
    BUILD = "data/move/move_sub/"

    get_dir = os.listdir(DIR)
    if len(get_dir) == 0:
        return

    for i in get_dir:
        OBJ = BUILD + "0_" + i.replace(".s","")
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/armips.exe"] + [DIR + i]
        print("script "+i)
        RunCommand(cmd)
    
def build_item_sprite():
    DIR = "data/graphics/item/"
    BUILD = "data/rawdata/itempic/"

    get_dir = os.listdir(DIR)

    for i in get_dir:
        OBJ = BUILD + "8_" + i.replace(".png","") + ".NCGR"
        OBJ2 = BUILD + "8_" + str(int(i.replace(".png","")) + 1)
        if os.path.isfile(OBJ) and os.path.getmtime(DIR + i) < os.path.getmtime(OBJ):
            continue
        cmd = ["tools/nitrogfx.exe"] + ["data/graphics/item/" + i, OBJ , "-clobbersize", "-version101"]
        print("item "+i)
        RunCommand(cmd)
        cmd = ["tools/nitrogfx.exe"] + ["data/graphics/item/" + i, OBJ2 + ".NCLR" , "-ir" ,"-bitdepth","4"]
        RunCommand(cmd)


if __name__ == '__main__':
    build_sprite()
    build_icon()
    build_ow()
    build_txt()
    #build_script()
    build_anim_script()
    build_seq_script()
    build_effect_script()
    build_item_sprite()
    build_suub_script()