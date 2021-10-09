import sys
from NARC import *

if len(sys.argv) > 2:
    if sys.argv[1].lower() == "extract":
            NARC_Unpack(sys.argv[2], sys.argv[3], False)
    elif sys.argv[1].lower() == "compile":
            NARC_Pack(sys.argv[2], sys.argv[3], False)
else:
    print("Usage:\n\nTo decompile: python NARCTool.py extract <NARC> <output directory>\nTo compile: python NARCTool.py compile <extracted NARC> <output directory>")
