.nds
.thumb
.include "armips/include/battlescriptcmd.s"

//文本文件197
DarkMessage equ 1282
.create "data/move/move_seq/1_297", 0x0
//黑暗光环出场提示
seq_297:
    printmessage DarkMessage, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    endscript

.close