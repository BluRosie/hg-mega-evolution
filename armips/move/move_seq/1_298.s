.nds
.thumb
.include "armips/include/battlescriptcmd.s"

//文本文件197
FairyMessage equ 1285
.create "data/move/move_seq/1_298", 0x0
//黑暗光环出场提示
seq_297:
    printmessage FairyMessage, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    endscript

.close