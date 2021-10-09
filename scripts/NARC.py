import struct
import os
import glob
import subprocess

file_extensions = {
    # BMD0
    0x424D4430 : ".bmd0",
    0x30444D42 : ".bmd0",

    # BTX0
    0x42545830 : ".btx0",
    0x30585442 : ".btx0",

    # NCSR
    0x4E435352 : ".ncsr",
    0x5253434E : ".ncsr",

    # NCLR
    0x4E434C52 : ".nclr",
    0x524C434E : ".nclr",

    # NGCR
    0x4E434752 : ".ncgr",
    0x5247434E : ".ncgr",

    # NANR
    0x4E414E52 : ".nanr",
    0x524E414E : ".nanr",

    # NMAR
    0x4E4D4152 : ".nmar",
    0x52414D4E : ".nmar",

    # NCMR
    0x4E4D4352 : ".nmcr",
    0x52434D4E : ".nmcr",

    # NCER
    0x4E434552 : ".ncer",
    0x5245434E : ".ncer",

    # LZ
    0x11 : ".lzss"
}

# NARC Tool
def NARC_Unpack(narc, output=None, decompress = True):
    if output is None:
         output = narc.split('.')[0] + "_u"

    with open(narc, "rb") as narc_file:
        #print("Getting data...")
        # Header
        magic, constant, fileSize, headerSize, nSections = struct.unpack("<LLLHH", narc_file.read(struct.calcsize("<LLLHH")))

        # File Allocation Table Block (FATB)
        fatb_magic, fatb_sectionSize, fatb_nFiles = struct.unpack("<LLL", narc_file.read(struct.calcsize("<LLL")))
        fatb_startoffsets = []
        fatb_endoffsets = []
        fntb_firstoffsets = []
        fntb_firstfilepos = []
        fntb_parentdir = []
        fntb_sizeName = []
        fntb_name = []
        fntb_dirnum = []

        for x in range(0, fatb_nFiles):
            fatb_startoffsets.append(struct.unpack("L", narc_file.read(struct.calcsize("L"))))
            fatb_endoffsets.append(struct.unpack("L", narc_file.read(struct.calcsize("L"))))

        # File Name Table Block (FNTB)
        fntb_magic, fntb_sectionSize = struct.unpack("<LL", narc_file.read(struct.calcsize("<LL")))
        fntb_directorystartoffset, fntb_firstfileposroot, fntb_nDir = struct.unpack("<LHH", narc_file.read(struct.calcsize("<LHH")))

        # The Pokémon games do not use nested directories. As a result, the check will always default to fntb_nDir == 1.
        # The directory code has not been tested therefore. You have been warned.
        #if (fntb_nDir != 1):
        #    for x in range(0, fntb_nDir):
        #        fntb_firstoffsets.append(struct.unpack("<L", narc_file.read(4)))
        #        print(fntb_firstoffsets[x])
        #        fntb_firstfilepos.append(struct.unpack("<H", narc_file.read(2)))
        #        print(fntb_firstfilepos[x])
        #        fntb_parentdir.append(struct.unpack("<H", narc_file.read(2)))
        #        print(fntb_parentdir[x])
        #        fntb_sizeName.append(struct.unpack("<B", narc_file.read(1)))
        #        print(fntb_sizeName[x])
        #        if fntb_sizeName[x][0] == 0:
        #            fntb_name.append(x)
        #        else:
        #            fntb_name.append(narc_file.read(fntb_sizeName[x][0]).decode('utf-8'))
        #        print(fntb_name[x])
        #        fntb_dirnum.append(struct.unpack("<H", narc_file.read(2)))
        #        print(fntb_dirnum[x])
        #elif fntb_nDir == 1:
        #    for x in range(0, fatb_nFiles):
        #        fntb_name.append(str(x))
        #    pass
        for x in range(0, fatb_nFiles):
            fntb_name.append(str(x))
        pass

        # File Images (FIMG)
        fimg_offset = narc_file.tell() + 0x8
        fimg_magic, fimg_sectionSize = struct.unpack("<LL", narc_file.read(8))

        # Extract it now
        try:
            os.mkdir(output)
        except FileExistsError:
            pass

        #print("Extracting...")
        for x in range(0, fatb_nFiles):
            extension = ""
            narc_file.seek(fimg_offset + fatb_startoffsets[x][0], 0)
            #if struct.unpack("<B", narc_file.read(1))[0] != 0x11:
            #    narc_file.seek(-1, 1)
            #    try:
            #        extension = file_extensions[struct.unpack("<L", narc_file.read(4))[0]]
            #    except KeyError:
            #        extension = ".bin"
            #    narc_file.seek(-4, 1)
            #else:
            #    narc_file.seek(-1, 1)
            #    extension = file_extensions[0x11]
            narc_file.seek(-1, 1)
            extension = file_extensions[0x11]

            #with open(os.path.join(output, str(fntb_name[x]) +  extension), "wb") as file:
            #    file.write(narc_file.read(fatb_endoffsets[x][0] - fatb_startoffsets[x][0]))

        if decompress == True:
            lz_cfg = open(os.path.join(output, "lz.cfg"), "w")
            for lz_file in glob.glob(os.path.join(os.getcwd(), output, "*.lzss")):
                print("Decompressing %s" % lz_file)
                cmd = [os.path.join("Formats", "LZSS", "DSDecmp"), lz_file, lz_file]
                subprocess.check_output(cmd)
                lz_cfg.write(os.path.basename(lz_file) + "\n")
        print("Narc Unpack Done!")
    return

def NARC_Pack(unpacked_narc, output=None, compress=True):
    if output is None:
         output = narc.split('.')[0] + "_u"

    #print("Getting files in folder...")
    blacklist = {"lz.cfg"}
    files = sorted((z for z in os.listdir(os.path.join(unpacked_narc)) if z not in blacklist), key = lambda x: int(os.path.splitext(x)[0]))

    if compress == True:
        with open(os.path.join(unpacked_narc, "lz.cfg"), "r") as lz_cfg:
            for lz_file in lz_cfg.read().splitlines():
                print('Compressing %s' % lz_file)
                cmd = [os.path.join("Formats", "LZSS", "DSDecmp"), '-c', 'lz11', os.path.join(unpacked_narc, lz_file), os.path.join(unpacked_narc, lz_file)]
                subprocess.check_output(cmd)

    # FIMG creation
    fimg_data = b""
    file_sizes = []
    fimg_end = 0
    with open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fimg.bin", "wb") as fimg:
        fimg.write(struct.pack("<L", 0x46494D47))
        for x in range(0, len(files)):
            file = open(os.path.join(os.getcwd(), unpacked_narc, files[x]), "rb")
            file_sizes.append(len(fimg_data))
            fimg_data += file.read()
        fimg.write(struct.pack("<L", len(fimg_data) + 8))
        fimg.write(fimg_data)
        fimg_end = len(fimg_data)

    # FNTB creation
    # 42 54 4E 46 10 00 00 00 04 00 00 00 00 00 01 00
    with open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fntb.bin", "wb") as fntb:
        fntb.write(struct.pack("<L", 0x464E5442))
        fntb.write(struct.pack("<L", 0x10))
        fntb.write(struct.pack("<L", 0x4))
        fntb.write(struct.pack("<H", 0x0))
        fntb.write(struct.pack("<H", 0x1))

    # FATB creation
    with open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fatb.bin", "wb") as fatb:
        fatb.write(struct.pack("<L", 0x46415442))
        fatb.write(struct.pack("<L", 0x4 + 0x4 + 0x4 + (0x8 * len(file_sizes))))
        fatb.write(struct.pack("<L", len(file_sizes)))
        for x in range(0, len(file_sizes)):
            try:
                fatb.write(struct.pack("<L", file_sizes[x]))
                fatb.write(struct.pack("<L", file_sizes[x+1]))
            except IndexError:
                fatb.write(struct.pack("<L", fimg_end)) # We have reached the last offset

    # Bring it all together
    print("Making the NARC...")
    narc_data = b""
    with open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + ".narc", "wb") as narc:
        narc.write(struct.pack("<L", 0x4352414E))
        narc.write(struct.pack("<L", 0x0100FFFE))
        fimg = open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fimg.bin", "rb")
        fntb = open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fntb.bin", "rb")
        fatb = open(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fatb.bin", "rb")
        narc_data += fatb.read()
        narc_data += fntb.read()
        narc_data += fimg.read()
        size = 0x10 + len(narc_data)
        narc.write(struct.pack("<L", size))
        narc.write(struct.pack("<H", 0x10))
        narc.write(struct.pack("<H", 0x3))
        narc.write(narc_data)
        fatb.close()
        fntb.close()
        fimg.close()

    # Cleanup
    try:
        os.remove(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fimg.bin")
        os.remove(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fntb.bin")
        os.remove(os.path.join(output, os.path.basename(unpacked_narc.split("_")[0])) + "_fatb.bin")
    except FileNotFoundError:
        pass

    # Done!
    #print("Done!")
