.nds
.thumb



// the mon ow num table maps each species to the overworld file that represents it (after 297)
// this number is primarily used for narc a141 access (specific bits determining whether or not a pokemon can be inside, etc.)

.create "build/a028/8_8", 0x0

gSpeciesToOWNum:
/* SPECIES_NONE            */ .halfword 0
/* SPECIES_BULBASAUR       */ .halfword 0
/* SPECIES_IVYSAUR         */ .halfword 1
/* SPECIES_VENUSAUR        */ .halfword 2
/* SPECIES_CHARMANDER      */ .halfword 4
/* SPECIES_CHARMELEON      */ .halfword 5
/* SPECIES_CHARIZARD       */ .halfword 6
/* SPECIES_SQUIRTLE        */ .halfword 7
/* SPECIES_WARTORTLE       */ .halfword 8
/* SPECIES_BLASTOISE       */ .halfword 9
/* SPECIES_CATERPIE        */ .halfword 10
/* SPECIES_METAPOD         */ .halfword 11
/* SPECIES_BUTTERFREE      */ .halfword 12
/* SPECIES_WEEDLE          */ .halfword 13
/* SPECIES_KAKUNA          */ .halfword 14
/* SPECIES_BEEDRILL        */ .halfword 15
/* SPECIES_PIDGEY          */ .halfword 16
/* SPECIES_PIDGEOTTO       */ .halfword 17
/* SPECIES_PIDGEOT         */ .halfword 18
/* SPECIES_RATTATA         */ .halfword 19
/* SPECIES_RATICATE        */ .halfword 20
/* SPECIES_SPEAROW         */ .halfword 21
/* SPECIES_FEAROW          */ .halfword 22
/* SPECIES_EKANS           */ .halfword 23
/* SPECIES_ARBOK           */ .halfword 24
/* SPECIES_PIKACHU         */ .halfword 25
/* SPECIES_RAICHU          */ .halfword 27
/* SPECIES_SANDSHREW       */ .halfword 28
/* SPECIES_SANDSLASH       */ .halfword 29
/* SPECIES_NIDORAN_F       */ .halfword 30
/* SPECIES_NIDORINA        */ .halfword 31
/* SPECIES_NIDOQUEEN       */ .halfword 32
/* SPECIES_NIDORAN_M       */ .halfword 33
/* SPECIES_NIDORINO        */ .halfword 34
/* SPECIES_NIDOKING        */ .halfword 35
/* SPECIES_CLEFAIRY        */ .halfword 36
/* SPECIES_CLEFABLE        */ .halfword 37
/* SPECIES_VULPIX          */ .halfword 38
/* SPECIES_NINETALES       */ .halfword 39
/* SPECIES_JIGGLYPUFF      */ .halfword 40
/* SPECIES_WIGGLYTUFF      */ .halfword 41
/* SPECIES_ZUBAT           */ .halfword 42
/* SPECIES_GOLBAT          */ .halfword 43
/* SPECIES_ODDISH          */ .halfword 44
/* SPECIES_GLOOM           */ .halfword 45
/* SPECIES_VILEPLUME       */ .halfword 46
/* SPECIES_PARAS           */ .halfword 47
/* SPECIES_PARASECT        */ .halfword 48
/* SPECIES_VENONAT         */ .halfword 49
/* SPECIES_VENOMOTH        */ .halfword 50
/* SPECIES_DIGLETT         */ .halfword 51
/* SPECIES_DUGTRIO         */ .halfword 52
/* SPECIES_MEOWTH          */ .halfword 1046
/* SPECIES_PERSIAN         */ .halfword 54
/* SPECIES_PSYDUCK         */ .halfword 55
/* SPECIES_GOLDUCK         */ .halfword 56
/* SPECIES_MANKEY          */ .halfword 57
/* SPECIES_PRIMEAPE        */ .halfword 58
/* SPECIES_GROWLITHE       */ .halfword 59
/* SPECIES_ARCANINE        */ .halfword 60
/* SPECIES_POLIWAG         */ .halfword 61
/* SPECIES_POLIWHIRL       */ .halfword 62
/* SPECIES_POLIWRATH       */ .halfword 63
/* SPECIES_ABRA            */ .halfword 64
/* SPECIES_KADABRA         */ .halfword 65
/* SPECIES_ALAKAZAM        */ .halfword 66
/* SPECIES_MACHOP          */ .halfword 67
/* SPECIES_MACHOKE         */ .halfword 68
/* SPECIES_MACHAMP         */ .halfword 69
/* SPECIES_BELLSPROUT      */ .halfword 70
/* SPECIES_WEEPINBELL      */ .halfword 71
/* SPECIES_VICTREEBEL      */ .halfword 72
/* SPECIES_TENTACOOL       */ .halfword 73
/* SPECIES_TENTACRUEL      */ .halfword 74
/* SPECIES_GEODUDE         */ .halfword 75
/* SPECIES_GRAVELER        */ .halfword 76
/* SPECIES_GOLEM           */ .halfword 77
/* SPECIES_PONYTA          */ .halfword 1042
/* SPECIES_RAPIDASH        */ .halfword 78
/* SPECIES_SLOWPOKE        */ .halfword 80
/* SPECIES_SLOWBRO         */ .halfword 1044
/* SPECIES_MAGNEMITE       */ .halfword 82
/* SPECIES_MAGNETON        */ .halfword 83
/* SPECIES_FARFETCHD       */ .halfword 84
/* SPECIES_DODUO           */ .halfword 85
/* SPECIES_DODRIO          */ .halfword 86
/* SPECIES_SEEL            */ .halfword 87
/* SPECIES_DEWGONG         */ .halfword 88
/* SPECIES_GRIMER          */ .halfword 89
/* SPECIES_MUK             */ .halfword 90
/* SPECIES_SHELLDER        */ .halfword 91
/* SPECIES_CLOYSTER        */ .halfword 92
/* SPECIES_GASTLY          */ .halfword 93
/* SPECIES_HAUNTER         */ .halfword 94
/* SPECIES_GENGAR          */ .halfword 95
/* SPECIES_ONIX            */ .halfword 96
/* SPECIES_DROWZEE         */ .halfword 97
/* SPECIES_HYPNO           */ .halfword 98
/* SPECIES_KRABBY          */ .halfword 99
/* SPECIES_KINGLER         */ .halfword 100
/* SPECIES_VOLTORB         */ .halfword 101
/* SPECIES_ELECTRODE       */ .halfword 102
/* SPECIES_EXEGGCUTE       */ .halfword 103
/* SPECIES_EXEGGUTOR       */ .halfword 104
/* SPECIES_CUBONE          */ .halfword 105
/* SPECIES_MAROWAK         */ .halfword 106
/* SPECIES_HITMONLEE       */ .halfword 107
/* SPECIES_HITMONCHAN      */ .halfword 108
/* SPECIES_LICKITUNG       */ .halfword 109
/* SPECIES_KOFFING         */ .halfword 110
/* SPECIES_WEEZING         */ .halfword 111
/* SPECIES_RHYHORN         */ .halfword 112
/* SPECIES_RHYDON          */ .halfword 113
/* SPECIES_CHANSEY         */ .halfword 114
/* SPECIES_TANGELA         */ .halfword 115
/* SPECIES_KANGASKHAN      */ .halfword 116
/* SPECIES_HORSEA          */ .halfword 117
/* SPECIES_SEADRA          */ .halfword 118
/* SPECIES_GOLDEEN         */ .halfword 119
/* SPECIES_SEAKING         */ .halfword 120
/* SPECIES_STARYU          */ .halfword 121
/* SPECIES_STARMIE         */ .halfword 122
/* SPECIES_MR_MIME         */ .halfword 123
/* SPECIES_SCYTHER         */ .halfword 124
/* SPECIES_JYNX            */ .halfword 125
/* SPECIES_ELECTABUZZ      */ .halfword 126
/* SPECIES_MAGMAR          */ .halfword 127
/* SPECIES_PINSIR          */ .halfword 128
/* SPECIES_TAUROS          */ .halfword 129
/* SPECIES_MAGIKARP        */ .halfword 130
/* SPECIES_GYARADOS        */ .halfword 131
/* SPECIES_LAPRAS          */ .halfword 132
/* SPECIES_DITTO           */ .halfword 133
/* SPECIES_EEVEE           */ .halfword 134
/* SPECIES_VAPOREON        */ .halfword 135
/* SPECIES_JOLTEON         */ .halfword 136
/* SPECIES_FLAREON         */ .halfword 137
/* SPECIES_PORYGON         */ .halfword 138
/* SPECIES_OMANYTE         */ .halfword 139
/* SPECIES_OMASTAR         */ .halfword 140
/* SPECIES_KABUTO          */ .halfword 141
/* SPECIES_KABUTOPS        */ .halfword 142
/* SPECIES_AERODACTYL      */ .halfword 143
/* SPECIES_SNORLAX         */ .halfword 144
/* SPECIES_ARTICUNO        */ .halfword 1049
/* SPECIES_ZAPDOS          */ .halfword 1051
/* SPECIES_MOLTRES         */ .halfword 1053
/* SPECIES_DRATINI         */ .halfword 148
/* SPECIES_DRAGONAIR       */ .halfword 149
/* SPECIES_DRAGONITE       */ .halfword 150
/* SPECIES_MEWTWO          */ .halfword 151
/* SPECIES_MEW             */ .halfword 152
/* SPECIES_CHIKORITA       */ .halfword 153
/* SPECIES_BAYLEEF         */ .halfword 154
/* SPECIES_MEGANIUM        */ .halfword 155
/* SPECIES_CYNDAQUIL       */ .halfword 157
/* SPECIES_QUILAVA         */ .halfword 158
/* SPECIES_TYPHLOSION      */ .halfword 159
/* SPECIES_TOTODILE        */ .halfword 160
/* SPECIES_CROCONAW        */ .halfword 161
/* SPECIES_FERALIGATR      */ .halfword 162
/* SPECIES_SENTRET         */ .halfword 163
/* SPECIES_FURRET          */ .halfword 164
/* SPECIES_HOOTHOOT        */ .halfword 165
/* SPECIES_NOCTOWL         */ .halfword 166
/* SPECIES_LEDYBA          */ .halfword 167
/* SPECIES_LEDIAN          */ .halfword 168
/* SPECIES_SPINARAK        */ .halfword 169
/* SPECIES_ARIADOS         */ .halfword 170
/* SPECIES_CROBAT          */ .halfword 171
/* SPECIES_CHINCHOU        */ .halfword 172
/* SPECIES_LANTURN         */ .halfword 173
/* SPECIES_PICHU           */ .halfword 174
/* SPECIES_CLEFFA          */ .halfword 176
/* SPECIES_IGGLYBUFF       */ .halfword 177
/* SPECIES_TOGEPI          */ .halfword 178
/* SPECIES_TOGETIC         */ .halfword 179
/* SPECIES_NATU            */ .halfword 180
/* SPECIES_XATU            */ .halfword 181
/* SPECIES_MAREEP          */ .halfword 182
/* SPECIES_FLAAFFY         */ .halfword 183
/* SPECIES_AMPHAROS        */ .halfword 184
/* SPECIES_BELLOSSOM       */ .halfword 185
/* SPECIES_MARILL          */ .halfword 186
/* SPECIES_AZUMARILL       */ .halfword 187
/* SPECIES_SUDOWOODO       */ .halfword 188
/* SPECIES_POLITOED        */ .halfword 189
/* SPECIES_HOPPIP          */ .halfword 190
/* SPECIES_SKIPLOOM        */ .halfword 191
/* SPECIES_JUMPLUFF        */ .halfword 192
/* SPECIES_AIPOM           */ .halfword 193
/* SPECIES_SUNKERN         */ .halfword 194
/* SPECIES_SUNFLORA        */ .halfword 195
/* SPECIES_YANMA           */ .halfword 196
/* SPECIES_WOOPER          */ .halfword 197
/* SPECIES_QUAGSIRE        */ .halfword 198
/* SPECIES_ESPEON          */ .halfword 199
/* SPECIES_UMBREON         */ .halfword 200
/* SPECIES_MURKROW         */ .halfword 201
/* SPECIES_SLOWKING        */ .halfword 202
/* SPECIES_MISDREAVUS      */ .halfword 203
/* SPECIES_UNOWN           */ .halfword 204
/* SPECIES_WOBBUFFET       */ .halfword 232
/* SPECIES_GIRAFARIG       */ .halfword 234
/* SPECIES_PINECO          */ .halfword 235
/* SPECIES_FORRETRESS      */ .halfword 236
/* SPECIES_DUNSPARCE       */ .halfword 237
/* SPECIES_GLIGAR          */ .halfword 238
/* SPECIES_STEELIX         */ .halfword 239
/* SPECIES_SNUBBULL        */ .halfword 241
/* SPECIES_GRANBULL        */ .halfword 242
/* SPECIES_QWILFISH        */ .halfword 243
/* SPECIES_SCIZOR          */ .halfword 244
/* SPECIES_SHUCKLE         */ .halfword 245
/* SPECIES_HERACROSS       */ .halfword 246
/* SPECIES_SNEASEL         */ .halfword 248
/* SPECIES_TEDDIURSA       */ .halfword 249
/* SPECIES_URSARING        */ .halfword 250
/* SPECIES_SLUGMA          */ .halfword 251
/* SPECIES_MAGCARGO        */ .halfword 252
/* SPECIES_SWINUB          */ .halfword 253
/* SPECIES_PILOSWINE       */ .halfword 254
/* SPECIES_CORSOLA         */ .halfword 255
/* SPECIES_REMORAID        */ .halfword 256
/* SPECIES_OCTILLERY       */ .halfword 257
/* SPECIES_DELIBIRD        */ .halfword 258
/* SPECIES_MANTINE         */ .halfword 259
/* SPECIES_SKARMORY        */ .halfword 260
/* SPECIES_HOUNDOUR        */ .halfword 261
/* SPECIES_HOUNDOOM        */ .halfword 262
/* SPECIES_KINGDRA         */ .halfword 263
/* SPECIES_PHANPY          */ .halfword 264
/* SPECIES_DONPHAN         */ .halfword 265
/* SPECIES_PORYGON2        */ .halfword 266
/* SPECIES_STANTLER        */ .halfword 267
/* SPECIES_SMEARGLE        */ .halfword 268
/* SPECIES_TYROGUE         */ .halfword 269
/* SPECIES_HITMONTOP       */ .halfword 270
/* SPECIES_SMOOCHUM        */ .halfword 271
/* SPECIES_ELEKID          */ .halfword 272
/* SPECIES_MAGBY           */ .halfword 273
/* SPECIES_MILTANK         */ .halfword 274
/* SPECIES_BLISSEY         */ .halfword 275
/* SPECIES_RAIKOU          */ .halfword 276
/* SPECIES_ENTEI           */ .halfword 277
/* SPECIES_SUICUNE         */ .halfword 278
/* SPECIES_LARVITAR        */ .halfword 279
/* SPECIES_PUPITAR         */ .halfword 280
/* SPECIES_TYRANITAR       */ .halfword 281
/* SPECIES_LUGIA           */ .halfword 282
/* SPECIES_HO_OH           */ .halfword 283
/* SPECIES_CELEBI          */ .halfword 284
/* SPECIES_TREECKO         */ .halfword 285
/* SPECIES_GROVYLE         */ .halfword 286
/* SPECIES_SCEPTILE        */ .halfword 287
/* SPECIES_TORCHIC         */ .halfword 288
/* SPECIES_COMBUSKEN       */ .halfword 289
/* SPECIES_BLAZIKEN        */ .halfword 290
/* SPECIES_MUDKIP          */ .halfword 291
/* SPECIES_MARSHTOMP       */ .halfword 292
/* SPECIES_SWAMPERT        */ .halfword 293
/* SPECIES_POOCHYENA       */ .halfword 294
/* SPECIES_MIGHTYENA       */ .halfword 295
/* SPECIES_ZIGZAGOON       */ .halfword 296
/* SPECIES_LINOONE         */ .halfword 297
/* SPECIES_WURMPLE         */ .halfword 298
/* SPECIES_SILCOON         */ .halfword 299
/* SPECIES_BEAUTIFLY       */ .halfword 300
/* SPECIES_CASCOON         */ .halfword 301
/* SPECIES_DUSTOX          */ .halfword 302
/* SPECIES_LOTAD           */ .halfword 303
/* SPECIES_LOMBRE          */ .halfword 304
/* SPECIES_LUDICOLO        */ .halfword 305
/* SPECIES_SEEDOT          */ .halfword 306
/* SPECIES_NUZLEAF         */ .halfword 307
/* SPECIES_SHIFTRY         */ .halfword 308
/* SPECIES_TAILLOW         */ .halfword 309
/* SPECIES_SWELLOW         */ .halfword 310
/* SPECIES_WINGULL         */ .halfword 311
/* SPECIES_PELIPPER        */ .halfword 312
/* SPECIES_RALTS           */ .halfword 313
/* SPECIES_KIRLIA          */ .halfword 314
/* SPECIES_GARDEVOIR       */ .halfword 315
/* SPECIES_SURSKIT         */ .halfword 316
/* SPECIES_MASQUERAIN      */ .halfword 317
/* SPECIES_SHROOMISH       */ .halfword 318
/* SPECIES_BRELOOM         */ .halfword 319
/* SPECIES_SLAKOTH         */ .halfword 320
/* SPECIES_VIGOROTH        */ .halfword 321
/* SPECIES_SLAKING         */ .halfword 322
/* SPECIES_NINCADA         */ .halfword 323
/* SPECIES_NINJASK         */ .halfword 324
/* SPECIES_SHEDINJA        */ .halfword 325
/* SPECIES_WHISMUR         */ .halfword 326
/* SPECIES_LOUDRED         */ .halfword 327
/* SPECIES_EXPLOUD         */ .halfword 328
/* SPECIES_MAKUHITA        */ .halfword 329
/* SPECIES_HARIYAMA        */ .halfword 330
/* SPECIES_AZURILL         */ .halfword 331
/* SPECIES_NOSEPASS        */ .halfword 332
/* SPECIES_SKITTY          */ .halfword 333
/* SPECIES_DELCATTY        */ .halfword 334
/* SPECIES_SABLEYE         */ .halfword 335
/* SPECIES_MAWILE          */ .halfword 336
/* SPECIES_ARON            */ .halfword 337
/* SPECIES_LAIRON          */ .halfword 338
/* SPECIES_AGGRON          */ .halfword 339
/* SPECIES_MEDITITE        */ .halfword 340
/* SPECIES_MEDICHAM        */ .halfword 341
/* SPECIES_ELECTRIKE       */ .halfword 342
/* SPECIES_MANECTRIC       */ .halfword 343
/* SPECIES_PLUSLE          */ .halfword 344
/* SPECIES_MINUN           */ .halfword 345
/* SPECIES_VOLBEAT         */ .halfword 346
/* SPECIES_ILLUMISE        */ .halfword 347
/* SPECIES_ROSELIA         */ .halfword 348
/* SPECIES_GULPIN          */ .halfword 349
/* SPECIES_SWALOT          */ .halfword 350
/* SPECIES_CARVANHA        */ .halfword 351
/* SPECIES_SHARPEDO        */ .halfword 352
/* SPECIES_WAILMER         */ .halfword 353
/* SPECIES_WAILORD         */ .halfword 354
/* SPECIES_NUMEL           */ .halfword 355
/* SPECIES_CAMERUPT        */ .halfword 356
/* SPECIES_TORKOAL         */ .halfword 357
/* SPECIES_SPOINK          */ .halfword 358
/* SPECIES_GRUMPIG         */ .halfword 359
/* SPECIES_SPINDA          */ .halfword 360
/* SPECIES_TRAPINCH        */ .halfword 361
/* SPECIES_VIBRAVA         */ .halfword 362
/* SPECIES_FLYGON          */ .halfword 363
/* SPECIES_CACNEA          */ .halfword 364
/* SPECIES_CACTURNE        */ .halfword 365
/* SPECIES_SWABLU          */ .halfword 366
/* SPECIES_ALTARIA         */ .halfword 367
/* SPECIES_ZANGOOSE        */ .halfword 368
/* SPECIES_SEVIPER         */ .halfword 369
/* SPECIES_LUNATONE        */ .halfword 370
/* SPECIES_SOLROCK         */ .halfword 371
/* SPECIES_BARBOACH        */ .halfword 372
/* SPECIES_WHISCASH        */ .halfword 373
/* SPECIES_CORPHISH        */ .halfword 374
/* SPECIES_CRAWDAUNT       */ .halfword 375
/* SPECIES_BALTOY          */ .halfword 376
/* SPECIES_CLAYDOL         */ .halfword 377
/* SPECIES_LILEEP          */ .halfword 378
/* SPECIES_CRADILY         */ .halfword 379
/* SPECIES_ANORITH         */ .halfword 380
/* SPECIES_ARMALDO         */ .halfword 381
/* SPECIES_FEEBAS          */ .halfword 382
/* SPECIES_MILOTIC         */ .halfword 383
/* SPECIES_CASTFORM        */ .halfword 384
/* SPECIES_KECLEON         */ .halfword 385
/* SPECIES_SHUPPET         */ .halfword 386
/* SPECIES_BANETTE         */ .halfword 387
/* SPECIES_DUSKULL         */ .halfword 388
/* SPECIES_DUSCLOPS        */ .halfword 389
/* SPECIES_TROPIUS         */ .halfword 390
/* SPECIES_CHIMECHO        */ .halfword 391
/* SPECIES_ABSOL           */ .halfword 392
/* SPECIES_WYNAUT          */ .halfword 393
/* SPECIES_SNORUNT         */ .halfword 394
/* SPECIES_GLALIE          */ .halfword 395
/* SPECIES_SPHEAL          */ .halfword 396
/* SPECIES_SEALEO          */ .halfword 397
/* SPECIES_WALREIN         */ .halfword 398
/* SPECIES_CLAMPERL        */ .halfword 399
/* SPECIES_HUNTAIL         */ .halfword 400
/* SPECIES_GOREBYSS        */ .halfword 401
/* SPECIES_RELICANTH       */ .halfword 402
/* SPECIES_LUVDISC         */ .halfword 403
/* SPECIES_BAGON           */ .halfword 404
/* SPECIES_SHELGON         */ .halfword 405
/* SPECIES_SALAMENCE       */ .halfword 406
/* SPECIES_BELDUM          */ .halfword 407
/* SPECIES_METANG          */ .halfword 408
/* SPECIES_METAGROSS       */ .halfword 409
/* SPECIES_REGIROCK        */ .halfword 410
/* SPECIES_REGICE          */ .halfword 411
/* SPECIES_REGISTEEL       */ .halfword 412
/* SPECIES_LATIAS          */ .halfword 413
/* SPECIES_LATIOS          */ .halfword 414
/* SPECIES_KYOGRE          */ .halfword 415
/* SPECIES_GROUDON         */ .halfword 416
/* SPECIES_RAYQUAZA        */ .halfword 417
/* SPECIES_JIRACHI         */ .halfword 418
/* SPECIES_DEOXYS          */ .halfword 419
/* SPECIES_TURTWIG         */ .halfword 423
/* SPECIES_GROTLE          */ .halfword 424
/* SPECIES_TORTERRA        */ .halfword 425
/* SPECIES_CHIMCHAR        */ .halfword 426
/* SPECIES_MONFERNO        */ .halfword 427
/* SPECIES_INFERNAPE       */ .halfword 428
/* SPECIES_PIPLUP          */ .halfword 429
/* SPECIES_PRINPLUP        */ .halfword 430
/* SPECIES_EMPOLEON        */ .halfword 431
/* SPECIES_STARLY          */ .halfword 432
/* SPECIES_STARAVIA        */ .halfword 433
/* SPECIES_STARAPTOR       */ .halfword 434
/* SPECIES_BIDOOF          */ .halfword 435
/* SPECIES_BIBAREL         */ .halfword 436
/* SPECIES_KRICKETOT       */ .halfword 437
/* SPECIES_KRICKETUNE      */ .halfword 438
/* SPECIES_SHINX           */ .halfword 439
/* SPECIES_LUXIO           */ .halfword 440
/* SPECIES_LUXRAY          */ .halfword 441
/* SPECIES_BUDEW           */ .halfword 442
/* SPECIES_ROSERADE        */ .halfword 443
/* SPECIES_CRANIDOS        */ .halfword 444
/* SPECIES_RAMPARDOS       */ .halfword 445
/* SPECIES_SHIELDON        */ .halfword 446
/* SPECIES_BASTIODON       */ .halfword 447
/* SPECIES_BURMY           */ .halfword 448
/* SPECIES_WORMADAM        */ .halfword 451
/* SPECIES_MOTHIM          */ .halfword 454
/* SPECIES_COMBEE          */ .halfword 455
/* SPECIES_VESPIQUEN       */ .halfword 457
/* SPECIES_PACHIRISU       */ .halfword 458
/* SPECIES_BUIZEL          */ .halfword 459
/* SPECIES_FLOATZEL        */ .halfword 460
/* SPECIES_CHERUBI         */ .halfword 461
/* SPECIES_CHERRIM         */ .halfword 462
/* SPECIES_SHELLOS         */ .halfword 463
/* SPECIES_GASTRODON       */ .halfword 465
/* SPECIES_AMBIPOM         */ .halfword 467
/* SPECIES_DRIFLOON        */ .halfword 468
/* SPECIES_DRIFBLIM        */ .halfword 469
/* SPECIES_BUNEARY         */ .halfword 470
/* SPECIES_LOPUNNY         */ .halfword 471
/* SPECIES_MISMAGIUS       */ .halfword 472
/* SPECIES_HONCHKROW       */ .halfword 473
/* SPECIES_GLAMEOW         */ .halfword 474
/* SPECIES_PURUGLY         */ .halfword 475
/* SPECIES_CHINGLING       */ .halfword 476
/* SPECIES_STUNKY          */ .halfword 477
/* SPECIES_SKUNTANK        */ .halfword 478
/* SPECIES_BRONZOR         */ .halfword 479
/* SPECIES_BRONZONG        */ .halfword 480
/* SPECIES_BONSLY          */ .halfword 481
/* SPECIES_MIMEJR          */ .halfword 482
/* SPECIES_HAPPINY         */ .halfword 483
/* SPECIES_CHATOT          */ .halfword 484
/* SPECIES_SPIRITOMB       */ .halfword 485
/* SPECIES_GIBLE           */ .halfword 486
/* SPECIES_GABITE          */ .halfword 488
/* SPECIES_GARCHOMP        */ .halfword 490
/* SPECIES_MUNCHLAX        */ .halfword 492
/* SPECIES_RIOLU           */ .halfword 493
/* SPECIES_LUCARIO         */ .halfword 494
/* SPECIES_HIPPOPOTAS      */ .halfword 495
/* SPECIES_HIPPOWDON       */ .halfword 497
/* SPECIES_SKORUPI         */ .halfword 499
/* SPECIES_DRAPION         */ .halfword 500
/* SPECIES_CROAGUNK        */ .halfword 501
/* SPECIES_TOXICROAK       */ .halfword 502
/* SPECIES_CARNIVINE       */ .halfword 503
/* SPECIES_FINNEON         */ .halfword 504
/* SPECIES_LUMINEON        */ .halfword 505
/* SPECIES_MANTYKE         */ .halfword 506
/* SPECIES_SNOVER          */ .halfword 507
/* SPECIES_ABOMASNOW       */ .halfword 508
/* SPECIES_WEAVILE         */ .halfword 509
/* SPECIES_MAGNEZONE       */ .halfword 510
/* SPECIES_LICKILICKY      */ .halfword 511
/* SPECIES_RHYPERIOR       */ .halfword 512
/* SPECIES_TANGROWTH       */ .halfword 513
/* SPECIES_ELECTIVIRE      */ .halfword 514
/* SPECIES_MAGMORTAR       */ .halfword 515
/* SPECIES_TOGEKISS        */ .halfword 516
/* SPECIES_YANMEGA         */ .halfword 517
/* SPECIES_LEAFEON         */ .halfword 518
/* SPECIES_GLACEON         */ .halfword 519
/* SPECIES_GLISCOR         */ .halfword 520
/* SPECIES_MAMOSWINE       */ .halfword 521
/* SPECIES_PORYGON_Z       */ .halfword 522
/* SPECIES_GALLADE         */ .halfword 523
/* SPECIES_PROBOPASS       */ .halfword 524
/* SPECIES_DUSKNOIR        */ .halfword 525
/* SPECIES_FROSLASS        */ .halfword 526
/* SPECIES_ROTOM           */ .halfword 527
/* SPECIES_UXIE            */ .halfword 533
/* SPECIES_MESPRIT         */ .halfword 534
/* SPECIES_AZELF           */ .halfword 535
/* SPECIES_DIALGA          */ .halfword 536
/* SPECIES_PALKIA          */ .halfword 537
/* SPECIES_HEATRAN         */ .halfword 538
/* SPECIES_REGIGIGAS       */ .halfword 539
/* SPECIES_GIRATINA        */ .halfword 540
/* SPECIES_CRESSELIA       */ .halfword 542
/* SPECIES_PHIONE          */ .halfword 543
/* SPECIES_MANAPHY         */ .halfword 544
/* SPECIES_DARKRAI         */ .halfword 545
/* SPECIES_SHAYMIN         */ .halfword 546
/* SPECIES_ARCEUS          */ .halfword 548
/* SPECIES_EGG             */ .halfword 0
/* SPECIES_BAD_EGG         */ .halfword 0
/* SPECIES_DEOXYS_ATTACK   */ .halfword 0
/* SPECIES_DEOXYS_DEFENSE  */ .halfword 0
/* SPECIES_DEOXYS_SPEED    */ .halfword 0
/* SPECIES_WORMADAM_SANDY  */ .halfword 0
/* SPECIES_WORMADAM_TRASHY */ .halfword 0
/* SPECIES_GIRATINA_ORIGIN */ .halfword 0
/* SPECIES_SHAYMIN_SKY     */ .halfword 0
/* SPECIES_ROTOM_HEAT      */ .halfword 0
/* SPECIES_ROTOM_WASH      */ .halfword 0
/* SPECIES_ROTOM_FROST     */ .halfword 0
/* SPECIES_ROTOM_FAN       */ .halfword 0
/* SPECIES_ROTOM_MOW       */ .halfword 0
/* SPECIES_508             */ .halfword 0
/* SPECIES_509             */ .halfword 0
/* SPECIES_510             */ .halfword 0
/* SPECIES_511             */ .halfword 0
/* SPECIES_512             */ .halfword 0
/* SPECIES_513             */ .halfword 0
/* SPECIES_514             */ .halfword 0
/* SPECIES_515             */ .halfword 0
/* SPECIES_516             */ .halfword 0
/* SPECIES_517             */ .halfword 0
/* SPECIES_518             */ .halfword 0
/* SPECIES_519             */ .halfword 0
/* SPECIES_520             */ .halfword 0
/* SPECIES_521             */ .halfword 0
/* SPECIES_522             */ .halfword 0
/* SPECIES_523             */ .halfword 0
/* SPECIES_524             */ .halfword 0
/* SPECIES_525             */ .halfword 0
/* SPECIES_526             */ .halfword 0
/* SPECIES_527             */ .halfword 0
/* SPECIES_528             */ .halfword 0
/* SPECIES_529             */ .halfword 0
/* SPECIES_530             */ .halfword 0
/* SPECIES_531             */ .halfword 0
/* SPECIES_532             */ .halfword 0
/* SPECIES_533             */ .halfword 0
/* SPECIES_534             */ .halfword 0
/* SPECIES_535             */ .halfword 0
/* SPECIES_536             */ .halfword 0
/* SPECIES_537             */ .halfword 0
/* SPECIES_538             */ .halfword 0
/* SPECIES_539             */ .halfword 0
/* SPECIES_540             */ .halfword 0
/* SPECIES_541             */ .halfword 0
/* SPECIES_542             */ .halfword 0
/* SPECIES_543             */ .halfword 0
/* SPECIES_VICTINI         */ .halfword 566
/* SPECIES_SNIVY           */ .halfword 567
/* SPECIES_SERVINE         */ .halfword 568
/* SPECIES_SERPERIOR       */ .halfword 569
/* SPECIES_TEPIG           */ .halfword 570
/* SPECIES_PIGNITE         */ .halfword 571
/* SPECIES_EMBOAR          */ .halfword 572
/* SPECIES_OSHAWOTT        */ .halfword 573
/* SPECIES_DEWOTT          */ .halfword 574
/* SPECIES_SAMUROTT        */ .halfword 575
/* SPECIES_PATRAT          */ .halfword 576
/* SPECIES_WATCHOG         */ .halfword 577
/* SPECIES_LILLIPUP        */ .halfword 578
/* SPECIES_HERDIER         */ .halfword 579
/* SPECIES_STOUTLAND       */ .halfword 580
/* SPECIES_PURRLOIN        */ .halfword 581
/* SPECIES_LIEPARD         */ .halfword 582
/* SPECIES_PANSAGE         */ .halfword 583
/* SPECIES_SIMISAGE        */ .halfword 584
/* SPECIES_PANSEAR         */ .halfword 585
/* SPECIES_SIMISEAR        */ .halfword 586
/* SPECIES_PANPOUR         */ .halfword 587
/* SPECIES_SIMIPOUR        */ .halfword 588
/* SPECIES_MUNNA           */ .halfword 589
/* SPECIES_MUSHARNA        */ .halfword 590
/* SPECIES_PIDOVE          */ .halfword 591
/* SPECIES_TRANQUILL       */ .halfword 592
/* SPECIES_UNFEZANT        */ .halfword 593
/* SPECIES_BLITZLE         */ .halfword 595
/* SPECIES_ZEBSTRIKA       */ .halfword 596
/* SPECIES_ROGGENROLA      */ .halfword 597
/* SPECIES_BOLDORE         */ .halfword 598
/* SPECIES_GIGALITH        */ .halfword 599
/* SPECIES_WOOBAT          */ .halfword 600
/* SPECIES_SWOOBAT         */ .halfword 601
/* SPECIES_DRILBUR         */ .halfword 602
/* SPECIES_EXCADRILL       */ .halfword 603
/* SPECIES_AUDINO          */ .halfword 604
/* SPECIES_TIMBURR         */ .halfword 605
/* SPECIES_GURDURR         */ .halfword 606
/* SPECIES_CONKELDURR      */ .halfword 607
/* SPECIES_TYMPOLE         */ .halfword 608
/* SPECIES_PALPITOAD       */ .halfword 609
/* SPECIES_SEISMITOAD      */ .halfword 610
/* SPECIES_THROH           */ .halfword 611
/* SPECIES_SAWK            */ .halfword 612
/* SPECIES_SEWADDLE        */ .halfword 613
/* SPECIES_SWADLOON        */ .halfword 614
/* SPECIES_LEAVANNY        */ .halfword 615
/* SPECIES_VENIPEDE        */ .halfword 616
/* SPECIES_WHIRLIPEDE      */ .halfword 617
/* SPECIES_SCOLIPEDE       */ .halfword 618
/* SPECIES_COTTONEE        */ .halfword 619
/* SPECIES_WHIMSICOTT      */ .halfword 620
/* SPECIES_PETILIL         */ .halfword 621
/* SPECIES_LILLIGANT       */ .halfword 622
/* SPECIES_BASCULIN        */ .halfword 623
/* SPECIES_SANDILE         */ .halfword 625
/* SPECIES_KROKOROK        */ .halfword 626
/* SPECIES_KROOKODILE      */ .halfword 627
/* SPECIES_DARUMAKA        */ .halfword 628
/* SPECIES_DARMANITAN      */ .halfword 629
/* SPECIES_MARACTUS        */ .halfword 631
/* SPECIES_DWEBBLE         */ .halfword 632
/* SPECIES_CRUSTLE         */ .halfword 633
/* SPECIES_SCRAGGY         */ .halfword 634
/* SPECIES_SCRAFTY         */ .halfword 635
/* SPECIES_SIGILYPH        */ .halfword 636
/* SPECIES_YAMASK          */ .halfword 637
/* SPECIES_COFAGRIGUS      */ .halfword 638
/* SPECIES_TIRTOUGA        */ .halfword 639
/* SPECIES_CARRACOSTA      */ .halfword 640
/* SPECIES_ARCHEN          */ .halfword 641
/* SPECIES_ARCHEOPS        */ .halfword 642
/* SPECIES_TRUBBISH        */ .halfword 643
/* SPECIES_GARBODOR        */ .halfword 644
/* SPECIES_ZORUA           */ .halfword 645
/* SPECIES_ZOROARK         */ .halfword 646
/* SPECIES_MINCCINO        */ .halfword 647
/* SPECIES_CINCCINO        */ .halfword 648
/* SPECIES_GOTHITA         */ .halfword 649
/* SPECIES_GOTHORITA       */ .halfword 650
/* SPECIES_GOTHITELLE      */ .halfword 651
/* SPECIES_SOLOSIS         */ .halfword 652
/* SPECIES_DUOSION         */ .halfword 653
/* SPECIES_REUNICLUS       */ .halfword 654
/* SPECIES_DUCKLETT        */ .halfword 655
/* SPECIES_SWANNA          */ .halfword 656
/* SPECIES_VANILLITE       */ .halfword 657
/* SPECIES_VANILLISH       */ .halfword 658
/* SPECIES_VANILLUXE       */ .halfword 659
/* SPECIES_DEERLING        */ .halfword 660
/* SPECIES_SAWSBUCK        */ .halfword 664
/* SPECIES_EMOLGA          */ .halfword 668
/* SPECIES_KARRABLAST      */ .halfword 669
/* SPECIES_ESCAVALIER      */ .halfword 670
/* SPECIES_FOONGUS         */ .halfword 671
/* SPECIES_AMOONGUSS       */ .halfword 672
/* SPECIES_FRILLISH        */ .halfword 673
/* SPECIES_JELLICENT       */ .halfword 675
/* SPECIES_ALOMOMOLA       */ .halfword 677
/* SPECIES_JOLTIK          */ .halfword 678
/* SPECIES_GALVANTULA      */ .halfword 679
/* SPECIES_FERROSEED       */ .halfword 680
/* SPECIES_FERROTHORN      */ .halfword 681
/* SPECIES_KLINK           */ .halfword 682
/* SPECIES_KLANG           */ .halfword 683
/* SPECIES_KLINKLANG       */ .halfword 684
/* SPECIES_TYNAMO          */ .halfword 685
/* SPECIES_EELEKTRIK       */ .halfword 686
/* SPECIES_EELEKTROSS      */ .halfword 687
/* SPECIES_ELGYEM          */ .halfword 688
/* SPECIES_BEHEEYEM        */ .halfword 689
/* SPECIES_LITWICK         */ .halfword 690
/* SPECIES_LAMPENT         */ .halfword 691
/* SPECIES_CHANDELURE      */ .halfword 692
/* SPECIES_AXEW            */ .halfword 693
/* SPECIES_FRAXURE         */ .halfword 694
/* SPECIES_HAXORUS         */ .halfword 695
/* SPECIES_CUBCHOO         */ .halfword 696
/* SPECIES_BEARTIC         */ .halfword 697
/* SPECIES_CRYOGONAL       */ .halfword 698
/* SPECIES_SHELMET         */ .halfword 699
/* SPECIES_ACCELGOR        */ .halfword 700
/* SPECIES_STUNFISK        */ .halfword 701
/* SPECIES_MIENFOO         */ .halfword 702
/* SPECIES_MIENSHAO        */ .halfword 703
/* SPECIES_DRUDDIGON       */ .halfword 704
/* SPECIES_GOLETT          */ .halfword 705
/* SPECIES_GOLURK          */ .halfword 706
/* SPECIES_PAWNIARD        */ .halfword 707
/* SPECIES_BISHARP         */ .halfword 708
/* SPECIES_BOUFFALANT      */ .halfword 709
/* SPECIES_RUFFLET         */ .halfword 710
/* SPECIES_BRAVIARY        */ .halfword 711
/* SPECIES_VULLABY         */ .halfword 712
/* SPECIES_MANDIBUZZ       */ .halfword 713
/* SPECIES_HEATMOR         */ .halfword 714
/* SPECIES_DURANT          */ .halfword 715
/* SPECIES_DEINO           */ .halfword 716
/* SPECIES_ZWEILOUS        */ .halfword 717
/* SPECIES_HYDREIGON       */ .halfword 718
/* SPECIES_LARVESTA        */ .halfword 719
/* SPECIES_VOLCARONA       */ .halfword 720
/* SPECIES_COBALION        */ .halfword 721
/* SPECIES_TERRAKION       */ .halfword 722
/* SPECIES_VIRIZION        */ .halfword 723
/* SPECIES_TORNADUS        */ .halfword 724
/* SPECIES_THUNDURUS       */ .halfword 726
/* SPECIES_RESHIRAM        */ .halfword 728
/* SPECIES_ZEKROM          */ .halfword 729
/* SPECIES_LANDORUS        */ .halfword 730
/* SPECIES_KYUREM          */ .halfword 732
/* SPECIES_KELDEO          */ .halfword 733
/* SPECIES_MELOETTA        */ .halfword 734
/* SPECIES_GENESECT        */ .halfword 736
/* SPECIES_650        */ .halfword 737
/* SPECIES_651        */ .halfword 738
/* SPECIES_652        */ .halfword 739
/* SPECIES_653        */ .halfword 740
/* SPECIES_654        */ .halfword 741
/* SPECIES_655        */ .halfword 742
/* SPECIES_656        */ .halfword 743
/* SPECIES_657        */ .halfword 744
/* SPECIES_658        */ .halfword 745
/* SPECIES_659        */ .halfword 746
/* SPECIES_660        */ .halfword 747
/* SPECIES_661        */ .halfword 748
/* SPECIES_662        */ .halfword 749
/* SPECIES_663        */ .halfword 750
/* SPECIES_664        */ .halfword 751
/* SPECIES_665        */ .halfword 752
/* SPECIES_666        */ .halfword 753
/* SPECIES_667        */ .halfword 754
/* SPECIES_668        */ .halfword 755
/* SPECIES_669        */ .halfword 756
/* SPECIES_670        */ .halfword 757
/* SPECIES_671        */ .halfword 758
/* SPECIES_672        */ .halfword 759
/* SPECIES_673        */ .halfword 760
/* SPECIES_674        */ .halfword 761
/* SPECIES_675        */ .halfword 762
/* SPECIES_676        */ .halfword 763
/* SPECIES_677        */ .halfword 764
/* SPECIES_678        */ .halfword 765
/* SPECIES_679        */ .halfword 766
/* SPECIES_680        */ .halfword 767
/* SPECIES_681        */ .halfword 768
/* SPECIES_682        */ .halfword 769
/* SPECIES_683        */ .halfword 770
/* SPECIES_684        */ .halfword 771
/* SPECIES_685        */ .halfword 772
/* SPECIES_686        */ .halfword 773
/* SPECIES_687        */ .halfword 774
/* SPECIES_688        */ .halfword 775
/* SPECIES_689        */ .halfword 776
/* SPECIES_690        */ .halfword 777
/* SPECIES_691        */ .halfword 778
/* SPECIES_692        */ .halfword 779
/* SPECIES_693        */ .halfword 780
/* SPECIES_694        */ .halfword 781
/* SPECIES_695        */ .halfword 782
/* SPECIES_696        */ .halfword 783
/* SPECIES_697        */ .halfword 784
/* SPECIES_698        */ .halfword 785
/* SPECIES_699        */ .halfword 786
/* SPECIES_700        */ .halfword 787
/* SPECIES_701        */ .halfword 788
/* SPECIES_702        */ .halfword 789
/* SPECIES_703        */ .halfword 790
/* SPECIES_704        */ .halfword 791
/* SPECIES_705        */ .halfword 792
/* SPECIES_706        */ .halfword 793
/* SPECIES_707        */ .halfword 794
/* SPECIES_708        */ .halfword 795
/* SPECIES_709        */ .halfword 796
/* SPECIES_710        */ .halfword 797
/* SPECIES_711        */ .halfword 798
/* SPECIES_712        */ .halfword 799
/* SPECIES_713        */ .halfword 800
/* SPECIES_714        */ .halfword 801
/* SPECIES_715        */ .halfword 802
/* SPECIES_716        */ .halfword 803
/* SPECIES_717        */ .halfword 804
/* SPECIES_718        */ .halfword 805
/* SPECIES_719        */ .halfword 806
/* SPECIES_720        */ .halfword 807
/* SPECIES_721        */ .halfword 808
/* SPECIES_722        */ .halfword 809
/* SPECIES_723        */ .halfword 810
/* SPECIES_724        */ .halfword 811
/* SPECIES_725        */ .halfword 812
/* SPECIES_726        */ .halfword 813
/* SPECIES_727        */ .halfword 814
/* SPECIES_728        */ .halfword 815
/* SPECIES_729        */ .halfword 816
/* SPECIES_730        */ .halfword 817
/* SPECIES_731        */ .halfword 818
/* SPECIES_732        */ .halfword 819
/* SPECIES_733        */ .halfword 820
/* SPECIES_734        */ .halfword 821
/* SPECIES_735        */ .halfword 822
/* SPECIES_736        */ .halfword 823
/* SPECIES_737        */ .halfword 824
/* SPECIES_738        */ .halfword 825
/* SPECIES_739        */ .halfword 826
/* SPECIES_740        */ .halfword 827
/* SPECIES_741        */ .halfword 828
/* SPECIES_742        */ .halfword 829
/* SPECIES_743        */ .halfword 830
/* SPECIES_744        */ .halfword 831
/* SPECIES_745        */ .halfword 832
/* SPECIES_746        */ .halfword 833
/* SPECIES_747        */ .halfword 834
/* SPECIES_748        */ .halfword 835
/* SPECIES_749        */ .halfword 836
/* SPECIES_750        */ .halfword 837
/* SPECIES_751        */ .halfword 838
/* SPECIES_752        */ .halfword 839
/* SPECIES_753        */ .halfword 840
/* SPECIES_754        */ .halfword 841
/* SPECIES_755        */ .halfword 842
/* SPECIES_756        */ .halfword 843
/* SPECIES_757        */ .halfword 844
/* SPECIES_758        */ .halfword 845
/* SPECIES_759        */ .halfword 846
/* SPECIES_760        */ .halfword 847
/* SPECIES_761        */ .halfword 848
/* SPECIES_762        */ .halfword 849
/* SPECIES_763        */ .halfword 850
/* SPECIES_764        */ .halfword 851
/* SPECIES_765        */ .halfword 852
/* SPECIES_766        */ .halfword 853
/* SPECIES_767        */ .halfword 854
/* SPECIES_768        */ .halfword 855
/* SPECIES_769        */ .halfword 856
/* SPECIES_770        */ .halfword 857
/* SPECIES_771        */ .halfword 858
/* SPECIES_772        */ .halfword 859
/* SPECIES_773        */ .halfword 860
/* SPECIES_774        */ .halfword 861
/* SPECIES_775        */ .halfword 862
/* SPECIES_776        */ .halfword 863
/* SPECIES_777        */ .halfword 864
/* SPECIES_778        */ .halfword 865
/* SPECIES_779        */ .halfword 866
/* SPECIES_780        */ .halfword 867
/* SPECIES_781        */ .halfword 868
/* SPECIES_782        */ .halfword 869
/* SPECIES_783        */ .halfword 870
/* SPECIES_784        */ .halfword 871
/* SPECIES_785        */ .halfword 872
/* SPECIES_786        */ .halfword 873
/* SPECIES_787        */ .halfword 874
/* SPECIES_788        */ .halfword 875
/* SPECIES_789        */ .halfword 876
/* SPECIES_790        */ .halfword 877
/* SPECIES_791        */ .halfword 878
/* SPECIES_792        */ .halfword 879
/* SPECIES_793        */ .halfword 880
/* SPECIES_794        */ .halfword 881
/* SPECIES_795        */ .halfword 882
/* SPECIES_796        */ .halfword 883
/* SPECIES_797        */ .halfword 884
/* SPECIES_798        */ .halfword 885
/* SPECIES_799        */ .halfword 886
/* SPECIES_800        */ .halfword 887
/* SPECIES_801        */ .halfword 888
/* SPECIES_802        */ .halfword 889
/* SPECIES_803        */ .halfword 890
/* SPECIES_804        */ .halfword 891
/* SPECIES_805        */ .halfword 892
/* SPECIES_806        */ .halfword 893
/* SPECIES_807        */ .halfword 894
/* SPECIES_808        */ .halfword 895
/* SPECIES_809        */ .halfword 896
/* SPECIES_810        */ .halfword 897
/* SPECIES_811        */ .halfword 898
/* SPECIES_812        */ .halfword 899
/* SPECIES_813        */ .halfword 900
/* SPECIES_814        */ .halfword 901
/* SPECIES_815        */ .halfword 902
/* SPECIES_816        */ .halfword 903
/* SPECIES_817        */ .halfword 904
/* SPECIES_818        */ .halfword 905
/* SPECIES_819        */ .halfword 906
/* SPECIES_820        */ .halfword 907
/* SPECIES_821        */ .halfword 908
/* SPECIES_822        */ .halfword 909
/* SPECIES_823        */ .halfword 910
/* SPECIES_824        */ .halfword 911
/* SPECIES_825        */ .halfword 912
/* SPECIES_826        */ .halfword 913
/* SPECIES_827        */ .halfword 914
/* SPECIES_828        */ .halfword 915
/* SPECIES_829        */ .halfword 916
/* SPECIES_830        */ .halfword 917
/* SPECIES_831        */ .halfword 918
/* SPECIES_832        */ .halfword 919
/* SPECIES_833        */ .halfword 920
/* SPECIES_834        */ .halfword 921
/* SPECIES_835        */ .halfword 922
/* SPECIES_836        */ .halfword 923
/* SPECIES_837        */ .halfword 924
/* SPECIES_838        */ .halfword 925
/* SPECIES_839        */ .halfword 926
/* SPECIES_840        */ .halfword 927
/* SPECIES_841        */ .halfword 928
/* SPECIES_842        */ .halfword 929
/* SPECIES_843        */ .halfword 930
/* SPECIES_844        */ .halfword 931
/* SPECIES_845        */ .halfword 932
/* SPECIES_846        */ .halfword 933
/* SPECIES_847        */ .halfword 934
/* SPECIES_848        */ .halfword 935
/* SPECIES_849        */ .halfword 936
/* SPECIES_850        */ .halfword 937
/* SPECIES_851        */ .halfword 938
/* SPECIES_852        */ .halfword 939
/* SPECIES_853        */ .halfword 940
/* SPECIES_854        */ .halfword 941
/* SPECIES_855        */ .halfword 942
/* SPECIES_856        */ .halfword 943
/* SPECIES_857        */ .halfword 944
/* SPECIES_858        */ .halfword 945
/* SPECIES_859        */ .halfword 946
/* SPECIES_860        */ .halfword 947
/* SPECIES_861        */ .halfword 948
/* SPECIES_862        */ .halfword 949
/* SPECIES_863        */ .halfword 950
/* SPECIES_864        */ .halfword 951
/* SPECIES_865        */ .halfword 952
/* SPECIES_866        */ .halfword 953
/* SPECIES_867        */ .halfword 954
/* SPECIES_868        */ .halfword 955
/* SPECIES_869        */ .halfword 956
/* SPECIES_870        */ .halfword 957
/* SPECIES_871        */ .halfword 958
/* SPECIES_872        */ .halfword 959
/* SPECIES_873        */ .halfword 960
/* SPECIES_874        */ .halfword 961
/* SPECIES_875        */ .halfword 962
/* SPECIES_876        */ .halfword 963
/* SPECIES_877        */ .halfword 964
/* SPECIES_878        */ .halfword 965
/* SPECIES_879        */ .halfword 966
/* SPECIES_880        */ .halfword 967
/* SPECIES_881        */ .halfword 968
/* SPECIES_882        */ .halfword 969
/* SPECIES_883        */ .halfword 970
/* SPECIES_884        */ .halfword 971
/* SPECIES_885        */ .halfword 972
/* SPECIES_886        */ .halfword 973
/* SPECIES_887        */ .halfword 974
/* SPECIES_888        */ .halfword 975
/* SPECIES_889        */ .halfword 976
/* SPECIES_890        */ .halfword 977
/* SPECIES_891        */ .halfword 978
/* SPECIES_892        */ .halfword 979
/* SPECIES_893        */ .halfword 980
/* SPECIES_894        */ .halfword 981
/* SPECIES_895        */ .halfword 982
/* SPECIES_896        */ .halfword 983
/* SPECIES_897        */ .halfword 984
/* SPECIES_898        */ .halfword 985

.org 0x76f
.byte 0x0

.close

// gOWTagToFileNum maps each overworld tag to its file number in a081.
.open "build/a028/8_0", 0x023C8000

.org 0x023C8000

gOWTagToFileNum:  // skip down a bit to see the parts that are specifically for pokémon
.halfword    0,  69, 0x1C60
.halfword 1   , 0  , 0x0000
.halfword 2   , 1  , 0x0000
.halfword 3   , 2  , 0x0000
.halfword 4   , 3  , 0x0000
.halfword 5   , 4  , 0x0000
.halfword 6   , 5  , 0x0000
.halfword 7   , 6  , 0x0000
.halfword 8   , 7  , 0x0000
.halfword 9   , 8  , 0x0000
.halfword 10  , 9  , 0x0000
.halfword 11  , 10 , 0x0000
.halfword 12  , 12 , 0x0000
.halfword 13  , 13 , 0x0000
.halfword 14  , 14 , 0x0000
.halfword 15  , 16 , 0x0000
.halfword 16  , 17 , 0x0000
.halfword 17  , 18 , 0x0000
.halfword 18  , 19 , 0x0000
.halfword 19  , 34 , 0x0000
.halfword 20  , 35 , 0x0000
.halfword 21  , 71 , 0x1881
.halfword 22  , 31 , 0x0000
.halfword 23  , 32 , 0x0000
.halfword 24  , 23 , 0x0000
.halfword 25  , 24 , 0x0000
.halfword 29  , 25 , 0x0000
.halfword 30  , 26 , 0x0000
.halfword 31  , 36 , 0x0000
.halfword 33  , 22 , 0x0000
.halfword 34  , 37 , 0x0000
.halfword 35  , 38 , 0x0000
.halfword 36  , 39 , 0x0000
.halfword 37  , 40 , 0x0000
.halfword 38  , 20 , 0x0001
.halfword 39  , 21 , 0x0001
.halfword 40  , 41 , 0x0000
.halfword 41  , 42 , 0x0000
.halfword 42  , 43 , 0x0000
.halfword 43  , 44 , 0x0000
.halfword 44  , 45 , 0x0000
.halfword 45  , 46 , 0x0000
.halfword 50  , 47 , 0x0000
.halfword 51  , 48 , 0x0000
.halfword 52  , 49 , 0x0000
.halfword 53  , 50 , 0x0000
.halfword 54  , 51 , 0x0000
.halfword 55  , 52 , 0x0000
.halfword 56  , 53 , 0x0000
.halfword 59  , 29 , 0x0000
.halfword 60  , 30 , 0x0000
.halfword 62  , 27 , 0x0000
.halfword 63  , 28 , 0x0000
.halfword 68  , 11 , 0x0000
.halfword 69  , 15 , 0x0000
.halfword 70  , 33 , 0x0000
.halfword 71  , 68 , 0x0000
.halfword 84  , 91 , 0x0420
.halfword 85  , 92 , 0x0820
.halfword 86  , 93 , 0x0020
.halfword 87  , 94 , 0x0420
.halfword 97  , 70 , 0x1C60
.halfword 98  , 72 , 0x1881
.halfword 99  , 54 , 0x0000
.halfword  126, 215, 0x0000
.halfword  127, 216, 0x0000
.halfword  128, 217, 0x0000
.halfword  129, 218, 0x0000
.halfword  130, 219, 0x0000
.halfword  131, 220, 0x0000
.halfword  132, 221, 0x0000
.halfword  133, 222, 0x0000
.halfword 141 , 62 , 0x0000
.halfword 142 , 63 , 0x0000
.halfword 143 , 64 , 0x0000
.halfword 144 , 65 , 0x0000
.halfword 145 , 66 , 0x0000
.halfword 146 , 67 , 0x0000
.halfword 148 , 58 , 0x0000
.halfword 168 , 57 , 0x0000
.halfword 169 , 61 , 0x0000
.halfword 175 , 55 , 0x0000
.halfword 176 , 75 , 0x20A0
.halfword 177 , 76 , 0x20A0
.halfword 180 , 77 , 0x28C0
.halfword 181 , 78 , 0x28C0
.halfword 178 , 73 , 0x24E0
.halfword 179 , 74 , 0x24E0
.halfword 183 , 0  , 0xFDE2
.halfword 188 , 79 , 0x2D00
.halfword 189 , 80 , 0x2D00
.halfword 248 , 81 , 0x3120
.halfword 249 , 82 , 0x3120
.halfword 193 , 56 , 0x0000
.halfword 8192, 0  , 0xFC03
.halfword 196 , 85 , 0x3D60
.halfword 197 , 86 , 0x3D60
.halfword 198 , 87 , 0x40A0
.halfword 199 , 88 , 0x40A0
.halfword 200 , 89 , 0x3540
.halfword 201 , 90 , 0x3540
.halfword 211 , 170, 0x0000
.halfword 218 , 171, 0x0000
.halfword 219 , 83 , 0x0000
.halfword 220 , 172, 0x0000
.halfword 221 , 173, 0x0000
.halfword 222 , 174, 0x0000
.halfword 223 , 175, 0x0000
.halfword 224 , 176, 0x0000
.halfword 293 , 244, 0x0000
.halfword 294 , 245, 0x0000
.halfword 225 , 177, 0x0000
.halfword 227 , 178, 0x0000
.halfword 229 , 179, 0x0000
.halfword 232 , 180, 0x0000
.halfword  233, 223, 0x0000
.halfword 235 , 181, 0x0000
.halfword 236 , 182, 0x0000
.halfword 237 , 183, 0x0000
.halfword 238 , 213, 0x1C60
.halfword 239 , 214, 0x1C60
.halfword 250 , 84 , 0x0C00
.halfword 251 , 0  , 0xFDE4
.halfword 252 , 0  , 0xFDE4
.halfword 253 , 0  , 0xFDE4
.halfword 254 , 0  , 0xFDE4
.halfword 255 , 0  , 0xFDE4
.halfword 256 , 0  , 0xFDE4
.halfword 257 , 0  , 0xFDE4
.halfword  258,  95, 0x1C60
.halfword  259,  96, 0x1C60
.halfword  260,  97, 0x3540
.halfword  261,  98, 0x3540
.halfword  262, 251, 0x5647
.halfword  263, 255, 0x5647
.halfword  264, 258, 0x5647
.halfword  265, 252, 0x5647
.halfword  266, 254, 0x5647
.halfword  267, 257, 0x5647
.halfword  268, 256, 0x5647
.halfword  269, 253, 0x5647
.halfword  270, 262, 0x5826
.halfword  271, 265, 0x5826
.halfword  272, 259, 0x5826
.halfword  273, 261, 0x5826
.halfword  274, 264, 0x5826
.halfword  275, 263, 0x5826
.halfword  276, 260, 0x5826
.halfword  277, 103, 0x0000
.halfword  278, 104, 0x0000
.halfword  279, 105, 0x0000
.halfword  280, 106, 0x0000
.halfword  281, 107, 0x0000
.halfword  282, 108, 0x0000
.halfword  283, 109, 0x0000
.halfword  284, 110, 0x0000
.halfword  285, 101, 0x0000
.halfword  286, 102, 0x0000
.halfword  287, 111, 0x0006
.halfword 288 , 0  , 0xFDE4
.halfword 289 , 0  , 0xFDE4
.halfword 290 , 112, 0x1025
.halfword 291 , 0  , 0xFDE4
.halfword 292 , 0  , 0xFDE4
.halfword 295 , 246, 0x1C60
.halfword 296 , 247, 0x1C60
.halfword  297, 248, 0x40A0
.halfword  298, 249, 0x40A0
.halfword  299, 250, 0x0000
.halfword 315 , 113, 0x0000
.halfword 316 , 114, 0x0000
.halfword 317 , 115, 0x0000
.halfword 318 , 116, 0x0000
.halfword 319 , 117, 0x0000
.halfword 320 , 118, 0x0000
.halfword 321 , 119, 0x0000
.halfword 322 , 120, 0x0000
.halfword 323 , 121, 0x0000
.halfword 324 , 122, 0x0000
.halfword 325 , 123, 0x0000
.halfword 326 , 124, 0x0000
.halfword 327 , 125, 0x0000
.halfword 328 , 126, 0x0000
.halfword 329 , 127, 0x0000
.halfword 330 , 128, 0x0000
.halfword 331 , 129, 0x0000
.halfword 332 , 130, 0x0000
.halfword 333 , 131, 0x0000
.halfword 334 , 132, 0x0000
.halfword 335 , 133, 0x1580
.halfword 336 , 134, 0x0000
.halfword 337 , 135, 0x0000
.halfword 338 , 136, 0x0000
.halfword 341 , 137, 0x0000
.halfword 342 , 138, 0x0000
.halfword 343 , 139, 0x0000
.halfword 344 , 140, 0x0000
.halfword 345 , 141, 0x0000
.halfword 346 , 142, 0x0000
.halfword 347 , 143, 0x0000
.halfword 348 , 144, 0x0000
.halfword 351 , 145, 0x0000
.halfword 352 , 146, 0x0000
.halfword 353 , 147, 0x0000
.halfword 354 , 148, 0x0000
.halfword 355 , 149, 0x0000
.halfword 356 , 150, 0x0000
.halfword 357 , 151, 0x0000
.halfword 358 , 152, 0x0000
.halfword 359 , 153, 0x0000
.halfword 360 , 154, 0x0000
.halfword 361 , 155, 0x0000
.halfword 362 , 156, 0x0000
.halfword 363 , 157, 0x0000
.halfword 364 , 158, 0x0000
.halfword 365 , 159, 0x0000
.halfword 366 , 160, 0x0000
.halfword 367 , 161, 0x0000
.halfword 368 , 162, 0x0000
.halfword 369 , 163, 0x0000
.halfword 370 , 164, 0x0000
.halfword 371 , 165, 0x0000
.halfword 372 , 166, 0x0000
.halfword 373 , 167, 0x0000
.halfword 374 , 168, 0x0000
.halfword 375 , 169, 0x0000
.halfword 377 , 184, 0x0000
.halfword 378 , 185, 0x0000
.halfword  380, 224, 0x0000
.halfword 381 , 186, 0x0000
.halfword 382 , 187, 0x0000
.halfword 383 , 188, 0x0000
.halfword 384 , 189, 0x0000
.halfword  385, 225, 0x0000
.halfword  386, 226, 0x0000
.halfword  387, 227, 0x0000
.halfword 389 , 190, 0x0000
.halfword  390, 228, 0x0000
.halfword 392 , 191, 0x0000
.halfword 393 , 192, 0x0000
.halfword 394 , 193, 0x0000
.halfword 395 , 194, 0x5C06
.halfword 406 , 195, 0x0006
.halfword 409 , 200, 0x0000
.halfword 410 , 198, 0x0000
.halfword 411 , 197, 0x0000
.halfword 412 , 199, 0x0000
.halfword 413 , 196, 0x0000
.halfword 349 , 243, 0x5C00
.halfword 234 , 242, 0x0024
.halfword 350 , 229, 0x0024
.halfword 376 , 230, 0x0024
.halfword 379 , 231, 0x0024
.halfword 210 , 239, 0x5C24
.halfword 396 , 241, 0x5C24
.halfword 397 , 240, 0x0024
.halfword 398 , 237, 0x0024
.halfword 399 , 234, 0x0024
.halfword 400 , 235, 0x5C24
.halfword 401 , 236, 0x0024
.halfword 402 , 238, 0x0024
.halfword 403 , 232, 0x0024
.halfword 404 , 233, 0x0024

.halfword  407,  99, 0x1C60
.halfword  408, 100, 0x1C60

.halfword  414, 209, 0x0000
.halfword  415, 201, 0x4E25
.halfword  416, 202, 0x4E25
.halfword  417, 203, 0x4E25
.halfword  418, 204, 0x5225
.halfword  419, 205, 0x5225
.halfword  420, 206, 0x5225
.halfword  421,  59, 0x0000
.halfword  422,  60, 0x0000
.halfword  423, 207, 0x3A60
.halfword  424, 208, 0x3A60
.halfword  425, 210, 0x45A5
.halfword  426, 211, 0x49A5
.halfword  427, 212, 0x0000

// npc mons

.halfword  994, 309, OVERWORLD_SIZE_SMALL
.halfword  995, 313, OVERWORLD_SIZE_SMALL
.halfword  996, 316, OVERWORLD_SIZE_SMALL
.halfword  997, 318, OVERWORLD_SIZE_SMALL
.halfword  998, 319, OVERWORLD_SIZE_SMALL
.halfword  999, 322, OVERWORLD_SIZE_SMALL
.halfword 1000, 327, OVERWORLD_SIZE_SMALL
.halfword 1001, 330, OVERWORLD_SIZE_SMALL
.halfword 1002, 331, OVERWORLD_SIZE_SMALL
.halfword 1003, 333, OVERWORLD_SIZE_SMALL
.halfword 1004, 337, OVERWORLD_SIZE_SMALL
.halfword 1005, 339, OVERWORLD_SIZE_SMALL
.halfword 1006, 341, OVERWORLD_SIZE_SMALL
.halfword 1007, 348, OVERWORLD_SIZE_SMALL_NO_SHADOW
.halfword 1008, 350, OVERWORLD_SIZE_SMALL
.halfword 1009, 351, OVERWORLD_SIZE_SMALL
.halfword 1010, 352, OVERWORLD_SIZE_SMALL
.halfword 1011, 360, OVERWORLD_SIZE_SMALL
.halfword 1012, 361, OVERWORLD_SIZE_SMALL
.halfword 1013, 364, OVERWORLD_SIZE_SMALL
.halfword 1014, 365, OVERWORLD_SIZE_SMALL
.halfword 1015, 377, OVERWORLD_SIZE_SMALL
.halfword 1016, 378, OVERWORLD_SIZE_SMALL
.halfword 1017, 381, OVERWORLD_SIZE_SMALL
.halfword 1018, 383, OVERWORLD_SIZE_SMALL
.halfword 1019, 399, OVERWORLD_SIZE_SMALL
.halfword 1020, 410, OVERWORLD_SIZE_SMALL
.halfword 1021, 411, OVERWORLD_SIZE_SMALL
.halfword 1022, 413, OVERWORLD_SIZE_SMALL
.halfword 1023, 429, OVERWORLD_SIZE_SMALL
.halfword 1024, 442, OVERWORLD_SIZE_SMALL
.halfword 1025, 443, OVERWORLD_SIZE_SMALL
.halfword 1026, 444, OVERWORLD_SIZE_SMALL
.halfword 1027, 445, OVERWORLD_SIZE_SMALL
.halfword 1028, 447, OVERWORLD_SIZE_SMALL
.halfword 1029, 448, OVERWORLD_SIZE_SMALL
.halfword 1030, 451, OVERWORLD_SIZE_SMALL
.halfword 1031, 481, OVERWORLD_SIZE_SMALL
.halfword 1032, 483, OVERWORLD_SIZE_SMALL
.halfword 1033, 490, OVERWORLD_SIZE_SMALL
.halfword 1034, 498, OVERWORLD_SIZE_SMALL
.halfword 1035, 571, OVERWORLD_SIZE_SMALL
.halfword 1036, 572, OVERWORLD_SIZE_SMALL
.halfword 1037, 573, OVERWORLD_SIZE_SMALL
.halfword 1038, 574, OVERWORLD_SIZE_SMALL
.halfword 1039, 575, OVERWORLD_SIZE_SMALL
.halfword 1040, 581, OVERWORLD_SIZE_SMALL
.halfword 1041, 710, OVERWORLD_SIZE_SMALL
.halfword 1042, 711, OVERWORLD_SIZE_SMALL
.halfword 1043, 712, OVERWORLD_SIZE_LARGE
.halfword 1044, 713, OVERWORLD_SIZE_LARGE
.halfword 1045, 714, OVERWORLD_SIZE_LARGE
.halfword 1046, 472, OVERWORLD_SIZE_SMALL
.halfword 1047, 452, OVERWORLD_SIZE_SMALL
.halfword 1048, 456, OVERWORLD_SIZE_SMALL
.halfword 1049, 459, OVERWORLD_SIZE_SMALL



// pokémon follower specific overworlds start here

.halfword  428, 297, OVERWORLD_SIZE_SMALL
.halfword  429, 298, OVERWORLD_SIZE_SMALL
.halfword  430, 299, OVERWORLD_SIZE_SMALL
.halfword  431, 300, OVERWORLD_SIZE_SMALL
.halfword  432, 301, OVERWORLD_SIZE_SMALL
.halfword  433, 302, OVERWORLD_SIZE_SMALL
.halfword  434, 303, OVERWORLD_SIZE_SMALL
.halfword  435, 304, OVERWORLD_SIZE_SMALL
.halfword  436, 305, OVERWORLD_SIZE_SMALL
.halfword  437, 306, OVERWORLD_SIZE_SMALL
.halfword  438, 307, OVERWORLD_SIZE_SMALL
.halfword  439, 308, OVERWORLD_SIZE_SMALL
.halfword  440, 309, OVERWORLD_SIZE_SMALL
.halfword  441, 310, OVERWORLD_SIZE_SMALL
.halfword  442, 311, OVERWORLD_SIZE_SMALL
.halfword  443, 312, OVERWORLD_SIZE_SMALL
.halfword  444, 313, OVERWORLD_SIZE_SMALL
.halfword  445, 314, OVERWORLD_SIZE_SMALL
.halfword  446, 315, OVERWORLD_SIZE_SMALL
.halfword  447, 316, OVERWORLD_SIZE_SMALL
.halfword  448, 317, OVERWORLD_SIZE_SMALL
.halfword  449, 318, OVERWORLD_SIZE_SMALL
.halfword  450, 319, OVERWORLD_SIZE_SMALL
.halfword  451, 320, OVERWORLD_SIZE_SMALL
.halfword  452, 321, OVERWORLD_SIZE_SMALL
.halfword  453, 322, OVERWORLD_SIZE_SMALL
.halfword  454, 323, OVERWORLD_SIZE_SMALL
.halfword  455, 324, OVERWORLD_SIZE_SMALL
.halfword  456, 325, OVERWORLD_SIZE_SMALL
.halfword  457, 326, OVERWORLD_SIZE_SMALL
.halfword  458, 327, OVERWORLD_SIZE_SMALL
.halfword  459, 328, OVERWORLD_SIZE_SMALL
.halfword  460, 329, OVERWORLD_SIZE_SMALL
.halfword  461, 330, OVERWORLD_SIZE_SMALL
.halfword  462, 331, OVERWORLD_SIZE_SMALL
.halfword  463, 332, OVERWORLD_SIZE_SMALL
.halfword  464, 333, OVERWORLD_SIZE_SMALL
.halfword  465, 334, OVERWORLD_SIZE_SMALL
.halfword  466, 335, OVERWORLD_SIZE_SMALL
.halfword  467, 336, OVERWORLD_SIZE_SMALL
.halfword  468, 337, OVERWORLD_SIZE_SMALL
.halfword  469, 338, OVERWORLD_SIZE_SMALL
.halfword  470, 339, OVERWORLD_SIZE_SMALL
.halfword  471, 340, OVERWORLD_SIZE_SMALL
.halfword  472, 341, OVERWORLD_SIZE_SMALL
.halfword  473, 342, OVERWORLD_SIZE_SMALL
.halfword  474, 343, OVERWORLD_SIZE_SMALL
.halfword  475, 344, OVERWORLD_SIZE_SMALL
.halfword  476, 345, OVERWORLD_SIZE_SMALL
.halfword  477, 346, OVERWORLD_SIZE_SMALL
.halfword  478, 347, OVERWORLD_SIZE_SMALL
.halfword  479, 348, OVERWORLD_SIZE_SMALL_NO_SHADOW
.halfword  480, 349, OVERWORLD_SIZE_SMALL_NO_SHADOW
.halfword  481, 350, OVERWORLD_SIZE_SMALL
.halfword  482, 351, OVERWORLD_SIZE_SMALL
.halfword  483, 352, OVERWORLD_SIZE_SMALL
.halfword  484, 353, OVERWORLD_SIZE_SMALL
.halfword  485, 354, OVERWORLD_SIZE_SMALL
.halfword  486, 355, OVERWORLD_SIZE_SMALL
.halfword  487, 356, OVERWORLD_SIZE_SMALL
.halfword  488, 357, OVERWORLD_SIZE_SMALL
.halfword  489, 358, OVERWORLD_SIZE_SMALL
.halfword  490, 359, OVERWORLD_SIZE_SMALL
.halfword  491, 360, OVERWORLD_SIZE_SMALL
.halfword  492, 361, OVERWORLD_SIZE_SMALL
.halfword  493, 362, OVERWORLD_SIZE_SMALL
.halfword  494, 363, OVERWORLD_SIZE_SMALL
.halfword  495, 364, OVERWORLD_SIZE_SMALL
.halfword  496, 365, OVERWORLD_SIZE_SMALL
.halfword  497, 366, OVERWORLD_SIZE_SMALL
.halfword  498, 367, OVERWORLD_SIZE_SMALL
.halfword  499, 368, OVERWORLD_SIZE_SMALL
.halfword  500, 369, OVERWORLD_SIZE_SMALL
.halfword  501, 370, OVERWORLD_SIZE_SMALL
.halfword  502, 371, OVERWORLD_SIZE_SMALL
.halfword  503, 372, OVERWORLD_SIZE_SMALL
.halfword  504, 373, OVERWORLD_SIZE_SMALL
.halfword  505, 374, OVERWORLD_SIZE_SMALL
.halfword  506, 375, OVERWORLD_SIZE_SMALL
.halfword  507, 376, OVERWORLD_SIZE_SMALL
.halfword  508, 377, OVERWORLD_SIZE_SMALL
.halfword  509, 378, OVERWORLD_SIZE_SMALL
.halfword  510, 379, OVERWORLD_SIZE_SMALL
.halfword  511, 380, OVERWORLD_SIZE_SMALL
.halfword  512, 381, OVERWORLD_SIZE_SMALL
.halfword  513, 382, OVERWORLD_SIZE_SMALL
.halfword  514, 383, OVERWORLD_SIZE_SMALL
.halfword  515, 384, OVERWORLD_SIZE_SMALL
.halfword  516, 385, OVERWORLD_SIZE_SMALL
.halfword  517, 386, OVERWORLD_SIZE_SMALL
.halfword  518, 387, OVERWORLD_SIZE_SMALL
.halfword  519, 388, OVERWORLD_SIZE_SMALL
.halfword  520, 389, OVERWORLD_SIZE_SMALL
.halfword  521, 390, OVERWORLD_SIZE_SMALL
.halfword  522, 391, OVERWORLD_SIZE_SMALL
.halfword  523, 392, OVERWORLD_SIZE_SMALL
.halfword  524, 393, OVERWORLD_SIZE_SMALL
.halfword  525, 394, OVERWORLD_SIZE_SMALL
.halfword  526, 395, OVERWORLD_SIZE_SMALL
.halfword  527, 396, OVERWORLD_SIZE_SMALL
.halfword  528, 397, OVERWORLD_SIZE_SMALL
.halfword  529, 398, OVERWORLD_SIZE_SMALL
.halfword  530, 399, OVERWORLD_SIZE_SMALL
.halfword  531, 400, OVERWORLD_SIZE_SMALL
.halfword  532, 401, OVERWORLD_SIZE_SMALL
.halfword  533, 402, OVERWORLD_SIZE_SMALL
.halfword  534, 403, OVERWORLD_SIZE_SMALL
.halfword  535, 404, OVERWORLD_SIZE_SMALL
.halfword  536, 405, OVERWORLD_SIZE_SMALL
.halfword  537, 406, OVERWORLD_SIZE_SMALL
.halfword  538, 407, OVERWORLD_SIZE_SMALL
.halfword  539, 408, OVERWORLD_SIZE_SMALL
.halfword  540, 409, OVERWORLD_SIZE_SMALL
.halfword  541, 410, OVERWORLD_SIZE_SMALL
.halfword  542, 411, OVERWORLD_SIZE_SMALL
.halfword  543, 412, OVERWORLD_SIZE_SMALL
.halfword  544, 413, OVERWORLD_SIZE_SMALL
.halfword  545, 414, OVERWORLD_SIZE_SMALL
.halfword  546, 415, OVERWORLD_SIZE_SMALL
.halfword  547, 416, OVERWORLD_SIZE_SMALL
.halfword  548, 417, OVERWORLD_SIZE_SMALL
.halfword  549, 418, OVERWORLD_SIZE_SMALL
.halfword  550, 419, OVERWORLD_SIZE_SMALL
.halfword  551, 420, OVERWORLD_SIZE_SMALL
.halfword  552, 421, OVERWORLD_SIZE_SMALL
.halfword  553, 422, OVERWORLD_SIZE_SMALL
.halfword  554, 423, OVERWORLD_SIZE_SMALL
.halfword  555, 424, OVERWORLD_SIZE_SMALL
.halfword  556, 425, OVERWORLD_SIZE_SMALL
.halfword  557, 426, OVERWORLD_SIZE_SMALL
.halfword  558, 427, OVERWORLD_SIZE_SMALL
.halfword  559, 428, OVERWORLD_SIZE_SMALL
.halfword  560, 429, OVERWORLD_SIZE_SMALL
.halfword  561, 430, OVERWORLD_SIZE_SMALL
.halfword  562, 431, OVERWORLD_SIZE_SMALL
.halfword  563, 432, OVERWORLD_SIZE_SMALL
.halfword  564, 433, OVERWORLD_SIZE_SMALL
.halfword  565, 434, OVERWORLD_SIZE_SMALL
.halfword  566, 435, OVERWORLD_SIZE_SMALL
.halfword  567, 436, OVERWORLD_SIZE_SMALL
.halfword  568, 437, OVERWORLD_SIZE_SMALL
.halfword  569, 438, OVERWORLD_SIZE_SMALL
.halfword  570, 439, OVERWORLD_SIZE_SMALL
.halfword  571, 440, OVERWORLD_SIZE_SMALL
.halfword  572, 441, OVERWORLD_SIZE_SMALL
.halfword  573, 442, OVERWORLD_SIZE_SMALL
.halfword  574, 443, OVERWORLD_SIZE_SMALL
.halfword  575, 444, OVERWORLD_SIZE_SMALL
.halfword  576, 445, OVERWORLD_SIZE_SMALL
.halfword  577, 446, OVERWORLD_SIZE_SMALL
.halfword  578, 447, OVERWORLD_SIZE_SMALL
.halfword  579, 448, OVERWORLD_SIZE_SMALL
.halfword  580, 449, OVERWORLD_SIZE_SMALL
.halfword  581, 450, OVERWORLD_SIZE_SMALL
.halfword  582, 451, OVERWORLD_SIZE_SMALL
.halfword  583, 452, OVERWORLD_SIZE_SMALL
.halfword  584, 453, OVERWORLD_SIZE_SMALL
.halfword  585, 454, OVERWORLD_SIZE_SMALL
.halfword  586, 455, OVERWORLD_SIZE_SMALL
.halfword  587, 456, OVERWORLD_SIZE_SMALL
.halfword  588, 457, OVERWORLD_SIZE_SMALL
.halfword  589, 458, OVERWORLD_SIZE_SMALL
.halfword  590, 459, OVERWORLD_SIZE_SMALL
.halfword  591, 460, OVERWORLD_SIZE_SMALL
.halfword  592, 461, OVERWORLD_SIZE_SMALL
.halfword  593, 462, OVERWORLD_SIZE_SMALL
.halfword  594, 463, OVERWORLD_SIZE_SMALL
.halfword  595, 464, OVERWORLD_SIZE_SMALL
.halfword  596, 465, OVERWORLD_SIZE_SMALL
.halfword  597, 466, OVERWORLD_SIZE_SMALL
.halfword  598, 467, OVERWORLD_SIZE_SMALL
.halfword  599, 468, OVERWORLD_SIZE_SMALL
.halfword  600, 469, OVERWORLD_SIZE_SMALL
.halfword  601, 470, OVERWORLD_SIZE_SMALL
.halfword  602, 471, OVERWORLD_SIZE_SMALL
.halfword  603, 472, OVERWORLD_SIZE_SMALL
.halfword  604, 473, OVERWORLD_SIZE_SMALL
.halfword  605, 474, OVERWORLD_SIZE_SMALL
.halfword  606, 475, OVERWORLD_SIZE_SMALL
.halfword  607, 476, OVERWORLD_SIZE_SMALL
.halfword  608, 477, OVERWORLD_SIZE_SMALL
.halfword  609, 478, OVERWORLD_SIZE_SMALL
.halfword  610, 479, OVERWORLD_SIZE_SMALL
.halfword  611, 480, OVERWORLD_SIZE_SMALL
.halfword  612, 481, OVERWORLD_SIZE_SMALL
.halfword  613, 482, OVERWORLD_SIZE_SMALL
.halfword  614, 483, OVERWORLD_SIZE_SMALL
.halfword  615, 484, OVERWORLD_SIZE_SMALL
.halfword  616, 485, OVERWORLD_SIZE_SMALL
.halfword  617, 486, OVERWORLD_SIZE_SMALL
.halfword  618, 487, OVERWORLD_SIZE_SMALL
.halfword  619, 488, OVERWORLD_SIZE_SMALL
.halfword  620, 489, OVERWORLD_SIZE_SMALL
.halfword  621, 490, OVERWORLD_SIZE_SMALL
.halfword  622, 491, OVERWORLD_SIZE_SMALL
.halfword  623, 492, OVERWORLD_SIZE_SMALL
.halfword  624, 493, OVERWORLD_SIZE_SMALL
.halfword  625, 494, OVERWORLD_SIZE_SMALL
.halfword  626, 495, OVERWORLD_SIZE_SMALL
.halfword  627, 496, OVERWORLD_SIZE_SMALL
.halfword  628, 497, OVERWORLD_SIZE_SMALL
.halfword  629, 498, OVERWORLD_SIZE_SMALL
.halfword  630, 499, OVERWORLD_SIZE_SMALL
.halfword  631, 500, OVERWORLD_SIZE_SMALL
.halfword  632, 501, OVERWORLD_SIZE_SMALL
.halfword  633, 502, OVERWORLD_SIZE_SMALL
.halfword  634, 503, OVERWORLD_SIZE_SMALL
.halfword  635, 504, OVERWORLD_SIZE_SMALL
.halfword  636, 505, OVERWORLD_SIZE_SMALL
.halfword  637, 506, OVERWORLD_SIZE_SMALL
.halfword  638, 507, OVERWORLD_SIZE_SMALL
.halfword  639, 508, OVERWORLD_SIZE_SMALL
.halfword  640, 509, OVERWORLD_SIZE_SMALL
.halfword  641, 510, OVERWORLD_SIZE_SMALL
.halfword  642, 511, OVERWORLD_SIZE_SMALL
.halfword  643, 512, OVERWORLD_SIZE_SMALL
.halfword  644, 513, OVERWORLD_SIZE_SMALL
.halfword  645, 514, OVERWORLD_SIZE_SMALL
.halfword  646, 515, OVERWORLD_SIZE_SMALL
.halfword  647, 516, OVERWORLD_SIZE_SMALL
.halfword  648, 517, OVERWORLD_SIZE_SMALL
.halfword  649, 518, OVERWORLD_SIZE_SMALL
.halfword  650, 519, OVERWORLD_SIZE_SMALL
.halfword  651, 520, OVERWORLD_SIZE_SMALL
.halfword  652, 521, OVERWORLD_SIZE_SMALL
.halfword  653, 522, OVERWORLD_SIZE_SMALL
.halfword  654, 523, OVERWORLD_SIZE_SMALL
.halfword  655, 524, OVERWORLD_SIZE_SMALL
.halfword  656, 525, OVERWORLD_SIZE_SMALL
.halfword  657, 526, OVERWORLD_SIZE_SMALL
.halfword  658, 527, OVERWORLD_SIZE_SMALL
.halfword  659, 528, OVERWORLD_SIZE_SMALL
.halfword  660, 529, OVERWORLD_SIZE_SMALL
.halfword  661, 530, OVERWORLD_SIZE_SMALL
.halfword  662, 531, OVERWORLD_SIZE_SMALL
.halfword  663, 532, OVERWORLD_SIZE_SMALL
.halfword  664, 533, OVERWORLD_SIZE_SMALL
.halfword  665, 534, OVERWORLD_SIZE_SMALL
.halfword  666, 535, OVERWORLD_SIZE_SMALL
.halfword  667, 536, OVERWORLD_SIZE_LARGE
.halfword  668, 537, OVERWORLD_SIZE_LARGE
.halfword  669, 538, OVERWORLD_SIZE_SMALL
.halfword  670, 539, OVERWORLD_SIZE_SMALL
.halfword  671, 540, OVERWORLD_SIZE_SMALL
.halfword  672, 541, OVERWORLD_SIZE_SMALL
.halfword  673, 542, OVERWORLD_SIZE_SMALL
.halfword  674, 543, OVERWORLD_SIZE_SMALL
.halfword  675, 544, OVERWORLD_SIZE_SMALL
.halfword  676, 545, OVERWORLD_SIZE_SMALL
.halfword  677, 546, OVERWORLD_SIZE_SMALL
.halfword  678, 547, OVERWORLD_SIZE_SMALL
.halfword  679, 548, OVERWORLD_SIZE_SMALL
.halfword  680, 549, OVERWORLD_SIZE_SMALL
.halfword  681, 550, OVERWORLD_SIZE_SMALL
.halfword  682, 551, OVERWORLD_SIZE_SMALL
.halfword  683, 552, OVERWORLD_SIZE_SMALL
.halfword  684, 553, OVERWORLD_SIZE_SMALL
.halfword  685, 554, OVERWORLD_SIZE_SMALL
.halfword  686, 555, OVERWORLD_SIZE_SMALL
.halfword  687, 556, OVERWORLD_SIZE_SMALL
.halfword  688, 557, OVERWORLD_SIZE_SMALL
.halfword  689, 558, OVERWORLD_SIZE_SMALL
.halfword  690, 559, OVERWORLD_SIZE_SMALL
.halfword  691, 560, OVERWORLD_SIZE_SMALL
.halfword  692, 561, OVERWORLD_SIZE_SMALL
.halfword  693, 562, OVERWORLD_SIZE_SMALL
.halfword  694, 563, OVERWORLD_SIZE_SMALL
.halfword  695, 564, OVERWORLD_SIZE_SMALL
.halfword  696, 565, OVERWORLD_SIZE_SMALL
.halfword  697, 566, OVERWORLD_SIZE_SMALL
.halfword  698, 567, OVERWORLD_SIZE_SMALL
.halfword  699, 568, OVERWORLD_SIZE_SMALL
.halfword  700, 569, OVERWORLD_SIZE_SMALL
.halfword  701, 570, OVERWORLD_SIZE_SMALL
.halfword  702, 571, OVERWORLD_SIZE_SMALL
.halfword  703, 572, OVERWORLD_SIZE_SMALL
.halfword  704, 573, OVERWORLD_SIZE_SMALL
.halfword  705, 574, OVERWORLD_SIZE_SMALL
.halfword  706, 575, OVERWORLD_SIZE_SMALL
.halfword  707, 576, OVERWORLD_SIZE_SMALL
.halfword  708, 577, OVERWORLD_SIZE_SMALL
.halfword  709, 578, OVERWORLD_SIZE_SMALL
.halfword  710, 579, OVERWORLD_SIZE_LARGE
.halfword  711, 580, OVERWORLD_SIZE_LARGE
.halfword  712, 581, OVERWORLD_SIZE_SMALL
.halfword  713, 582, OVERWORLD_SIZE_SMALL
.halfword  714, 583, OVERWORLD_SIZE_SMALL
.halfword  715, 584, OVERWORLD_SIZE_SMALL
.halfword  716, 585, OVERWORLD_SIZE_SMALL
.halfword  717, 586, OVERWORLD_SIZE_SMALL
.halfword  718, 587, OVERWORLD_SIZE_SMALL
.halfword  719, 588, OVERWORLD_SIZE_SMALL
.halfword  720, 589, OVERWORLD_SIZE_SMALL
.halfword  721, 590, OVERWORLD_SIZE_SMALL
.halfword  722, 591, OVERWORLD_SIZE_SMALL
.halfword  723, 592, OVERWORLD_SIZE_SMALL
.halfword  724, 593, OVERWORLD_SIZE_SMALL
.halfword  725, 594, OVERWORLD_SIZE_SMALL
.halfword  726, 595, OVERWORLD_SIZE_SMALL
.halfword  727, 596, OVERWORLD_SIZE_SMALL
.halfword  728, 597, OVERWORLD_SIZE_SMALL
.halfword  729, 598, OVERWORLD_SIZE_SMALL
.halfword  730, 599, OVERWORLD_SIZE_SMALL
.halfword  731, 600, OVERWORLD_SIZE_SMALL
.halfword  732, 601, OVERWORLD_SIZE_SMALL
.halfword  733, 602, OVERWORLD_SIZE_SMALL
.halfword  734, 603, OVERWORLD_SIZE_SMALL
.halfword  735, 604, OVERWORLD_SIZE_SMALL
.halfword  736, 605, OVERWORLD_SIZE_SMALL
.halfword  737, 606, OVERWORLD_SIZE_SMALL
.halfword  738, 607, OVERWORLD_SIZE_SMALL
.halfword  739, 608, OVERWORLD_SIZE_SMALL
.halfword  740, 609, OVERWORLD_SIZE_SMALL
.halfword  741, 610, OVERWORLD_SIZE_SMALL
.halfword  742, 611, OVERWORLD_SIZE_SMALL
.halfword  743, 612, OVERWORLD_SIZE_SMALL
.halfword  744, 613, OVERWORLD_SIZE_SMALL
.halfword  745, 614, OVERWORLD_SIZE_SMALL
.halfword  746, 615, OVERWORLD_SIZE_SMALL
.halfword  747, 616, OVERWORLD_SIZE_SMALL
.halfword  748, 617, OVERWORLD_SIZE_SMALL
.halfword  749, 618, OVERWORLD_SIZE_SMALL
.halfword  750, 619, OVERWORLD_SIZE_SMALL
.halfword  751, 620, OVERWORLD_SIZE_SMALL
.halfword  752, 621, OVERWORLD_SIZE_SMALL
.halfword  753, 622, OVERWORLD_SIZE_SMALL
.halfword  754, 623, OVERWORLD_SIZE_SMALL
.halfword  755, 624, OVERWORLD_SIZE_SMALL
.halfword  756, 625, OVERWORLD_SIZE_SMALL
.halfword  757, 626, OVERWORLD_SIZE_SMALL
.halfword  758, 627, OVERWORLD_SIZE_SMALL
.halfword  759, 628, OVERWORLD_SIZE_SMALL
.halfword  760, 629, OVERWORLD_SIZE_SMALL
.halfword  761, 630, OVERWORLD_SIZE_SMALL
.halfword  762, 631, OVERWORLD_SIZE_SMALL
.halfword  763, 632, OVERWORLD_SIZE_SMALL
.halfword  764, 633, OVERWORLD_SIZE_SMALL
.halfword  765, 634, OVERWORLD_SIZE_SMALL
.halfword  766, 635, OVERWORLD_SIZE_SMALL
.halfword  767, 636, OVERWORLD_SIZE_SMALL
.halfword  768, 637, OVERWORLD_SIZE_SMALL
.halfword  769, 638, OVERWORLD_SIZE_SMALL
.halfword  770, 639, OVERWORLD_SIZE_SMALL
.halfword  771, 640, OVERWORLD_SIZE_SMALL
.halfword  772, 641, OVERWORLD_SIZE_SMALL
.halfword  773, 642, OVERWORLD_SIZE_SMALL
.halfword  774, 643, OVERWORLD_SIZE_SMALL
.halfword  775, 644, OVERWORLD_SIZE_SMALL
.halfword  776, 645, OVERWORLD_SIZE_SMALL
.halfword  777, 646, OVERWORLD_SIZE_SMALL
.halfword  778, 647, OVERWORLD_SIZE_SMALL
.halfword  779, 648, OVERWORLD_SIZE_SMALL
.halfword  780, 649, OVERWORLD_SIZE_SMALL
.halfword  781, 650, OVERWORLD_SIZE_SMALL
.halfword  782, 651, OVERWORLD_SIZE_LARGE
.halfword  783, 652, OVERWORLD_SIZE_SMALL
.halfword  784, 653, OVERWORLD_SIZE_SMALL
.halfword  785, 654, OVERWORLD_SIZE_SMALL
.halfword  786, 655, OVERWORLD_SIZE_SMALL
.halfword  787, 656, OVERWORLD_SIZE_SMALL
.halfword  788, 657, OVERWORLD_SIZE_SMALL
.halfword  789, 658, OVERWORLD_SIZE_SMALL
.halfword  790, 659, OVERWORLD_SIZE_SMALL
.halfword  791, 660, OVERWORLD_SIZE_SMALL
.halfword  792, 661, OVERWORLD_SIZE_SMALL
.halfword  793, 662, OVERWORLD_SIZE_SMALL
.halfword  794, 663, OVERWORLD_SIZE_SMALL
.halfword  795, 664, OVERWORLD_SIZE_SMALL
.halfword  796, 665, OVERWORLD_SIZE_SMALL
.halfword  797, 666, OVERWORLD_SIZE_SMALL
.halfword  798, 667, OVERWORLD_SIZE_SMALL
.halfword  799, 668, OVERWORLD_SIZE_SMALL
.halfword  800, 669, OVERWORLD_SIZE_SMALL
.halfword  801, 670, OVERWORLD_SIZE_SMALL
.halfword  802, 671, OVERWORLD_SIZE_SMALL
.halfword  803, 672, OVERWORLD_SIZE_SMALL
.halfword  804, 673, OVERWORLD_SIZE_SMALL
.halfword  805, 674, OVERWORLD_SIZE_SMALL
.halfword  806, 675, OVERWORLD_SIZE_SMALL
.halfword  807, 676, OVERWORLD_SIZE_SMALL
.halfword  808, 677, OVERWORLD_SIZE_SMALL
.halfword  809, 678, OVERWORLD_SIZE_SMALL
.halfword  810, 679, OVERWORLD_SIZE_SMALL
.halfword  811, 680, OVERWORLD_SIZE_SMALL
.halfword  812, 681, OVERWORLD_SIZE_SMALL
.halfword  813, 682, OVERWORLD_SIZE_SMALL
.halfword  814, 683, OVERWORLD_SIZE_SMALL
.halfword  815, 684, OVERWORLD_SIZE_SMALL
.halfword  816, 685, OVERWORLD_SIZE_SMALL
.halfword  817, 686, OVERWORLD_SIZE_SMALL
.halfword  818, 687, OVERWORLD_SIZE_SMALL
.halfword  819, 688, OVERWORLD_SIZE_SMALL
.halfword  820, 689, OVERWORLD_SIZE_SMALL
.halfword  821, 690, OVERWORLD_SIZE_SMALL
.halfword  822, 691, OVERWORLD_SIZE_SMALL
.halfword  823, 692, OVERWORLD_SIZE_SMALL
.halfword  824, 693, OVERWORLD_SIZE_SMALL
.halfword  825, 694, OVERWORLD_SIZE_SMALL
.halfword  826, 695, OVERWORLD_SIZE_SMALL
.halfword  827, 696, OVERWORLD_SIZE_SMALL
.halfword  828, 697, OVERWORLD_SIZE_SMALL
.halfword  829, 698, OVERWORLD_SIZE_SMALL
.halfword  830, 699, OVERWORLD_SIZE_SMALL
.halfword  831, 700, OVERWORLD_SIZE_SMALL
.halfword  832, 701, OVERWORLD_SIZE_SMALL
.halfword  833, 702, OVERWORLD_SIZE_SMALL
.halfword  834, 703, OVERWORLD_SIZE_SMALL
.halfword  835, 704, OVERWORLD_SIZE_SMALL
.halfword  836, 705, OVERWORLD_SIZE_SMALL
.halfword  837, 706, OVERWORLD_SIZE_SMALL
.halfword  838, 707, OVERWORLD_SIZE_SMALL
.halfword  839, 708, OVERWORLD_SIZE_SMALL
.halfword  840, 709, OVERWORLD_SIZE_SMALL
.halfword  841, 710, OVERWORLD_SIZE_SMALL
.halfword  842, 711, OVERWORLD_SIZE_SMALL
.halfword  843, 712, OVERWORLD_SIZE_LARGE
.halfword  844, 713, OVERWORLD_SIZE_LARGE
.halfword  845, 714, OVERWORLD_SIZE_LARGE
.halfword  846, 715, OVERWORLD_SIZE_SMALL
.halfword  847, 716, OVERWORLD_SIZE_SMALL
.halfword  848, 717, OVERWORLD_SIZE_SMALL
.halfword  849, 718, OVERWORLD_SIZE_SMALL
.halfword  850, 719, OVERWORLD_SIZE_SMALL
.halfword  851, 720, OVERWORLD_SIZE_SMALL
.halfword  852, 721, OVERWORLD_SIZE_SMALL
.halfword  853, 722, OVERWORLD_SIZE_SMALL
.halfword  854, 723, OVERWORLD_SIZE_SMALL
.halfword  855, 724, OVERWORLD_SIZE_SMALL
.halfword  856, 725, OVERWORLD_SIZE_SMALL
.halfword  857, 726, OVERWORLD_SIZE_SMALL
.halfword  858, 727, OVERWORLD_SIZE_SMALL
.halfword  859, 728, OVERWORLD_SIZE_SMALL
.halfword  860, 729, OVERWORLD_SIZE_SMALL
.halfword  861, 730, OVERWORLD_SIZE_SMALL
.halfword  862, 731, OVERWORLD_SIZE_SMALL
.halfword  863, 732, OVERWORLD_SIZE_SMALL
.halfword  864, 733, OVERWORLD_SIZE_SMALL
.halfword  865, 734, OVERWORLD_SIZE_SMALL
.halfword  866, 735, OVERWORLD_SIZE_SMALL
.halfword  867, 736, OVERWORLD_SIZE_SMALL
.halfword  868, 737, OVERWORLD_SIZE_SMALL
.halfword  869, 738, OVERWORLD_SIZE_SMALL
.halfword  870, 739, OVERWORLD_SIZE_SMALL
.halfword  871, 740, OVERWORLD_SIZE_SMALL
.halfword  872, 741, OVERWORLD_SIZE_SMALL
.halfword  873, 742, OVERWORLD_SIZE_SMALL
.halfword  874, 743, OVERWORLD_SIZE_SMALL
.halfword  875, 744, OVERWORLD_SIZE_SMALL
.halfword  876, 745, OVERWORLD_SIZE_SMALL
.halfword  877, 746, OVERWORLD_SIZE_SMALL
.halfword  878, 747, OVERWORLD_SIZE_SMALL
.halfword  879, 748, OVERWORLD_SIZE_SMALL
.halfword  880, 749, OVERWORLD_SIZE_SMALL
.halfword  881, 750, OVERWORLD_SIZE_SMALL
.halfword  882, 751, OVERWORLD_SIZE_SMALL
.halfword  883, 752, OVERWORLD_SIZE_SMALL
.halfword  884, 753, OVERWORLD_SIZE_SMALL
.halfword  885, 754, OVERWORLD_SIZE_SMALL
.halfword  886, 755, OVERWORLD_SIZE_SMALL
.halfword  887, 756, OVERWORLD_SIZE_SMALL
.halfword  888, 757, OVERWORLD_SIZE_SMALL
.halfword  889, 758, OVERWORLD_SIZE_SMALL
.halfword  890, 759, OVERWORLD_SIZE_SMALL
.halfword  891, 760, OVERWORLD_SIZE_SMALL
.halfword  892, 761, OVERWORLD_SIZE_SMALL
.halfword  893, 762, OVERWORLD_SIZE_SMALL
.halfword  894, 763, OVERWORLD_SIZE_SMALL
.halfword  895, 764, OVERWORLD_SIZE_SMALL
.halfword  896, 765, OVERWORLD_SIZE_SMALL
.halfword  897, 766, OVERWORLD_SIZE_SMALL
.halfword  898, 767, OVERWORLD_SIZE_SMALL
.halfword  899, 768, OVERWORLD_SIZE_SMALL
.halfword  900, 769, OVERWORLD_SIZE_SMALL
.halfword  901, 770, OVERWORLD_SIZE_SMALL
.halfword  902, 771, OVERWORLD_SIZE_SMALL
.halfword  903, 772, OVERWORLD_SIZE_SMALL
.halfword  904, 773, OVERWORLD_SIZE_SMALL
.halfword  905, 774, OVERWORLD_SIZE_SMALL
.halfword  906, 775, OVERWORLD_SIZE_SMALL
.halfword  907, 776, OVERWORLD_SIZE_SMALL
.halfword  908, 777, OVERWORLD_SIZE_SMALL
.halfword  909, 778, OVERWORLD_SIZE_SMALL
.halfword  910, 779, OVERWORLD_SIZE_SMALL
.halfword  911, 780, OVERWORLD_SIZE_SMALL
.halfword  912, 781, OVERWORLD_SIZE_SMALL
.halfword  913, 782, OVERWORLD_SIZE_SMALL
.halfword  914, 783, OVERWORLD_SIZE_SMALL
.halfword  915, 784, OVERWORLD_SIZE_SMALL
.halfword  916, 785, OVERWORLD_SIZE_SMALL
.halfword  917, 786, OVERWORLD_SIZE_SMALL
.halfword  918, 787, OVERWORLD_SIZE_SMALL
.halfword  919, 788, OVERWORLD_SIZE_SMALL
.halfword  920, 789, OVERWORLD_SIZE_SMALL
.halfword  921, 790, OVERWORLD_SIZE_SMALL
.halfword  922, 791, OVERWORLD_SIZE_SMALL
.halfword  923, 792, OVERWORLD_SIZE_SMALL
.halfword  924, 793, OVERWORLD_SIZE_SMALL
.halfword  925, 794, OVERWORLD_SIZE_SMALL
.halfword  926, 795, OVERWORLD_SIZE_SMALL
.halfword  927, 796, OVERWORLD_SIZE_SMALL
.halfword  928, 797, OVERWORLD_SIZE_SMALL
.halfword  929, 798, OVERWORLD_SIZE_SMALL
.halfword  930, 799, OVERWORLD_SIZE_SMALL
.halfword  931, 800, OVERWORLD_SIZE_SMALL
.halfword  932, 801, OVERWORLD_SIZE_SMALL
.halfword  933, 802, OVERWORLD_SIZE_SMALL
.halfword  934, 803, OVERWORLD_SIZE_SMALL
.halfword  935, 804, OVERWORLD_SIZE_SMALL
.halfword  936, 805, OVERWORLD_SIZE_SMALL
.halfword  937, 806, OVERWORLD_SIZE_SMALL
.halfword  938, 807, OVERWORLD_SIZE_SMALL
.halfword  939, 808, OVERWORLD_SIZE_SMALL
.halfword  940, 809, OVERWORLD_SIZE_SMALL
.halfword  941, 810, OVERWORLD_SIZE_SMALL
.halfword  942, 811, OVERWORLD_SIZE_SMALL
.halfword  943, 812, OVERWORLD_SIZE_SMALL
.halfword  944, 813, OVERWORLD_SIZE_SMALL
.halfword  945, 814, OVERWORLD_SIZE_SMALL
.halfword  946, 815, OVERWORLD_SIZE_SMALL
.halfword  947, 816, OVERWORLD_SIZE_SMALL
.halfword  948, 817, OVERWORLD_SIZE_SMALL
.halfword  949, 818, OVERWORLD_SIZE_SMALL
.halfword  950, 819, OVERWORLD_SIZE_SMALL
.halfword  951, 820, OVERWORLD_SIZE_SMALL
.halfword  952, 821, OVERWORLD_SIZE_SMALL
.halfword  953, 822, OVERWORLD_SIZE_SMALL
.halfword  954, 823, OVERWORLD_SIZE_SMALL
.halfword  955, 824, OVERWORLD_SIZE_SMALL
.halfword  956, 825, OVERWORLD_SIZE_SMALL
.halfword  957, 826, OVERWORLD_SIZE_SMALL
.halfword  958, 827, OVERWORLD_SIZE_SMALL
.halfword  959, 828, OVERWORLD_SIZE_SMALL
.halfword  960, 829, OVERWORLD_SIZE_SMALL
.halfword  961, 830, OVERWORLD_SIZE_SMALL
.halfword  962, 831, OVERWORLD_SIZE_SMALL
.halfword  963, 832, OVERWORLD_SIZE_SMALL
.halfword  964, 833, OVERWORLD_SIZE_LARGE
.halfword  965, 834, OVERWORLD_SIZE_LARGE
.halfword  966, 835, OVERWORLD_SIZE_SMALL
.halfword  967, 836, OVERWORLD_SIZE_LARGE
.halfword  968, 837, OVERWORLD_SIZE_LARGE
.halfword  969, 838, OVERWORLD_SIZE_LARGE
.halfword  970, 839, OVERWORLD_SIZE_SMALL
.halfword  971, 840, OVERWORLD_SIZE_SMALL
.halfword  972, 841, OVERWORLD_SIZE_SMALL
.halfword  973, 842, OVERWORLD_SIZE_SMALL
.halfword  974, 843, OVERWORLD_SIZE_SMALL
.halfword  975, 844, OVERWORLD_SIZE_SMALL
.halfword  976, 845, OVERWORLD_SIZE_LARGE
.halfword  977, 846, OVERWORLD_SIZE_LARGE
.halfword  978, 847, OVERWORLD_SIZE_LARGE
.halfword  979, 848, OVERWORLD_SIZE_LARGE
.halfword  980, 849, OVERWORLD_SIZE_LARGE
.halfword  981, 850, OVERWORLD_SIZE_LARGE
.halfword  982, 851, OVERWORLD_SIZE_LARGE
.halfword  983, 852, OVERWORLD_SIZE_LARGE
.halfword  984, 853, OVERWORLD_SIZE_LARGE
.halfword  985, 854, OVERWORLD_SIZE_LARGE
.halfword  986, 855, OVERWORLD_SIZE_LARGE
.halfword  987, 856, OVERWORLD_SIZE_LARGE
.halfword  988, 857, OVERWORLD_SIZE_LARGE
.halfword  989, 858, OVERWORLD_SIZE_LARGE
.halfword  990, 859, OVERWORLD_SIZE_LARGE
.halfword  991, 860, OVERWORLD_SIZE_LARGE
.halfword  992, 861, OVERWORLD_SIZE_LARGE
.halfword  993, 862, OVERWORLD_SIZE_LARGE
.halfword 1050,  863, OVERWORLD_SIZE_SMALL // SPECIES_VICTINI
.halfword 1051,  864, OVERWORLD_SIZE_SMALL // SPECIES_SNIVY
.halfword 1052,  865, OVERWORLD_SIZE_SMALL // SPECIES_SERVINE   
.halfword 1053,  866, OVERWORLD_SIZE_SMALL // SPECIES_SERPERIOR 
.halfword 1054,  867, OVERWORLD_SIZE_SMALL // SPECIES_TEPIG     
.halfword 1055,  868, OVERWORLD_SIZE_SMALL // SPECIES_PIGNITE   
.halfword 1056,  869, OVERWORLD_SIZE_SMALL // SPECIES_EMBOAR    
.halfword 1057,  870, OVERWORLD_SIZE_SMALL // SPECIES_OSHAWOTT  
.halfword 1058,  871, OVERWORLD_SIZE_SMALL // SPECIES_DEWOTT    
.halfword 1059,  872, OVERWORLD_SIZE_SMALL // SPECIES_SAMUROTT  
.halfword 1060,  873, OVERWORLD_SIZE_SMALL // SPECIES_PATRAT    
.halfword 1061,  874, OVERWORLD_SIZE_SMALL // SPECIES_WATCHOG   
.halfword 1062,  875, OVERWORLD_SIZE_SMALL // SPECIES_LILLIPUP  
.halfword 1063,  876, OVERWORLD_SIZE_SMALL // SPECIES_HERDIER   
.halfword 1064,  877, OVERWORLD_SIZE_SMALL // SPECIES_STOUTLAND 
.halfword 1065,  878, OVERWORLD_SIZE_SMALL // SPECIES_PURRLOIN  
.halfword 1066,  879, OVERWORLD_SIZE_SMALL // SPECIES_LIEPARD   
.halfword 1067,  880, OVERWORLD_SIZE_SMALL // SPECIES_PANSAGE   
.halfword 1068,  881, OVERWORLD_SIZE_SMALL // SPECIES_SIMISAGE  
.halfword 1069,  882, OVERWORLD_SIZE_SMALL // SPECIES_PANSEAR   
.halfword 1070,  883, OVERWORLD_SIZE_SMALL // SPECIES_SIMISEAR  
.halfword 1071,  884, OVERWORLD_SIZE_SMALL // SPECIES_PANPOUR   
.halfword 1072,  885, OVERWORLD_SIZE_SMALL // SPECIES_SIMIPOUR  
.halfword 1073,  886, OVERWORLD_SIZE_SMALL // SPECIES_MUNNA     
.halfword 1074,  887, OVERWORLD_SIZE_SMALL // SPECIES_MUSHARNA  
.halfword 1075,  888, OVERWORLD_SIZE_SMALL // SPECIES_PIDOVE    
.halfword 1076,  889, OVERWORLD_SIZE_SMALL // SPECIES_TRANQUILL 
.halfword 1077,  890, OVERWORLD_SIZE_SMALL // SPECIES_UNFEZANT  
.halfword 1078,  891, OVERWORLD_SIZE_SMALL // female
.halfword 1079,  892, OVERWORLD_SIZE_SMALL // SPECIES_BLITZLE   
.halfword 1080,  893, OVERWORLD_SIZE_SMALL // SPECIES_ZEBSTRIKA 
.halfword 1081,  894, OVERWORLD_SIZE_SMALL // SPECIES_ROGGENROLA
.halfword 1082,  895, OVERWORLD_SIZE_SMALL // SPECIES_BOLDORE   
.halfword 1083,  896, OVERWORLD_SIZE_SMALL // SPECIES_GIGALITH  
.halfword 1084,  897, OVERWORLD_SIZE_SMALL // SPECIES_WOOBAT    
.halfword 1085,  898, OVERWORLD_SIZE_SMALL // SPECIES_SWOOBAT   
.halfword 1086,  899, OVERWORLD_SIZE_SMALL // SPECIES_DRILBUR   
.halfword 1087,  900, OVERWORLD_SIZE_SMALL // SPECIES_EXCADRILL 
.halfword 1088,  901, OVERWORLD_SIZE_SMALL // SPECIES_AUDINO    
.halfword 1089,  902, OVERWORLD_SIZE_SMALL // SPECIES_TIMBURR   
.halfword 1090,  903, OVERWORLD_SIZE_SMALL // SPECIES_GURDURR   
.halfword 1091,  904, OVERWORLD_SIZE_SMALL // SPECIES_CONKELDURR
.halfword 1092,  905, OVERWORLD_SIZE_SMALL // SPECIES_TYMPOLE   
.halfword 1093,  906, OVERWORLD_SIZE_SMALL // SPECIES_PALPITOAD 
.halfword 1094,  907, OVERWORLD_SIZE_SMALL // SPECIES_SEISMITOAD
.halfword 1095,  908, OVERWORLD_SIZE_SMALL // SPECIES_THROH     
.halfword 1096,  909, OVERWORLD_SIZE_SMALL // SPECIES_SAWK      
.halfword 1097,  910, OVERWORLD_SIZE_SMALL // SPECIES_SEWADDLE  
.halfword 1098,  911, OVERWORLD_SIZE_SMALL // SPECIES_SWADLOON  
.halfword 1099,  912, OVERWORLD_SIZE_SMALL // SPECIES_LEAVANNY  
.halfword 1100,  913, OVERWORLD_SIZE_SMALL // SPECIES_VENIPEDE  
.halfword 1101,  914, OVERWORLD_SIZE_SMALL // SPECIES_WHIRLIPEDE
.halfword 1102,  915, OVERWORLD_SIZE_SMALL // SPECIES_SCOLIPEDE 
.halfword 1103,  916, OVERWORLD_SIZE_SMALL // SPECIES_COTTONEE  
.halfword 1104,  917, OVERWORLD_SIZE_SMALL // SPECIES_WHIMSICOTT
.halfword 1105,  918, OVERWORLD_SIZE_SMALL // SPECIES_PETILIL   
.halfword 1106,  919, OVERWORLD_SIZE_SMALL // SPECIES_LILLIGANT 
.halfword 1107,  920, OVERWORLD_SIZE_SMALL // SPECIES_BASCULIN  
.halfword 1108,  921, OVERWORLD_SIZE_SMALL // blue stripe
.halfword 1109,  922, OVERWORLD_SIZE_SMALL // SPECIES_SANDILE   
.halfword 1110,  923, OVERWORLD_SIZE_SMALL // SPECIES_KROKOROK  
.halfword 1111,  924, OVERWORLD_SIZE_SMALL // SPECIES_KROOKODILE
.halfword 1112,  925, OVERWORLD_SIZE_SMALL // SPECIES_DARUMAKA  
.halfword 1113,  926, OVERWORLD_SIZE_SMALL // SPECIES_DARMANITAN
.halfword 1114,  927, OVERWORLD_SIZE_SMALL // zen mode
.halfword 1115,  928, OVERWORLD_SIZE_SMALL // SPECIES_MARACTUS  
.halfword 1116,  929, OVERWORLD_SIZE_SMALL // SPECIES_DWEBBLE   
.halfword 1117,  930, OVERWORLD_SIZE_SMALL // SPECIES_CRUSTLE   
.halfword 1118,  931, OVERWORLD_SIZE_SMALL // SPECIES_SCRAGGY   
.halfword 1119,  932, OVERWORLD_SIZE_SMALL // SPECIES_SCRAFTY   
.halfword 1120,  933, OVERWORLD_SIZE_SMALL // SPECIES_SIGILYPH  
.halfword 1121,  934, OVERWORLD_SIZE_SMALL // SPECIES_YAMASK    
.halfword 1122,  935, OVERWORLD_SIZE_SMALL // SPECIES_COFAGRIGUS
.halfword 1123,  936, OVERWORLD_SIZE_SMALL // SPECIES_TIRTOUGA  
.halfword 1124,  937, OVERWORLD_SIZE_SMALL // SPECIES_CARRACOSTA
.halfword 1125,  938, OVERWORLD_SIZE_SMALL // SPECIES_ARCHEN    
.halfword 1126,  939, OVERWORLD_SIZE_SMALL // SPECIES_ARCHEOPS  
.halfword 1127,  940, OVERWORLD_SIZE_SMALL // SPECIES_TRUBBISH  
.halfword 1128,  941, OVERWORLD_SIZE_SMALL // SPECIES_GARBODOR  
.halfword 1129,  942, OVERWORLD_SIZE_SMALL // SPECIES_ZORUA     
.halfword 1130,  943, OVERWORLD_SIZE_SMALL // SPECIES_ZOROARK   
.halfword 1131,  944, OVERWORLD_SIZE_SMALL // SPECIES_MINCCINO  
.halfword 1132,  945, OVERWORLD_SIZE_SMALL // SPECIES_CINCCINO  
.halfword 1133,  946, OVERWORLD_SIZE_SMALL // SPECIES_GOTHITA   
.halfword 1134,  947, OVERWORLD_SIZE_SMALL // SPECIES_GOTHORITA 
.halfword 1135,  948, OVERWORLD_SIZE_SMALL // SPECIES_GOTHITELLE
.halfword 1136,  949, OVERWORLD_SIZE_SMALL // SPECIES_SOLOSIS   
.halfword 1137,  950, OVERWORLD_SIZE_SMALL // SPECIES_DUOSION   
.halfword 1138,  951, OVERWORLD_SIZE_SMALL // SPECIES_REUNICLUS 
.halfword 1139,  952, OVERWORLD_SIZE_SMALL // SPECIES_DUCKLETT  
.halfword 1140,  953, OVERWORLD_SIZE_SMALL // SPECIES_SWANNA    
.halfword 1141,  954, OVERWORLD_SIZE_SMALL // SPECIES_VANILLITE 
.halfword 1142,  955, OVERWORLD_SIZE_SMALL // SPECIES_VANILLISH 
.halfword 1143,  956, OVERWORLD_SIZE_SMALL // SPECIES_VANILLUXE 
.halfword 1144,  957, OVERWORLD_SIZE_SMALL // SPECIES_DEERLING  
.halfword 1145,  958, OVERWORLD_SIZE_SMALL // summer
.halfword 1146,  959, OVERWORLD_SIZE_SMALL // fall
.halfword 1147,  960, OVERWORLD_SIZE_SMALL // winter
.halfword 1148,  961, OVERWORLD_SIZE_SMALL // SPECIES_SAWSBUCK  
.halfword 1149,  962, OVERWORLD_SIZE_SMALL // summer
.halfword 1150,  963, OVERWORLD_SIZE_SMALL // fall
.halfword 1151,  964, OVERWORLD_SIZE_SMALL // winter
.halfword 1152,  965, OVERWORLD_SIZE_SMALL // SPECIES_EMOLGA    
.halfword 1153,  966, OVERWORLD_SIZE_SMALL // SPECIES_KARRABLAST
.halfword 1154,  967, OVERWORLD_SIZE_SMALL // SPECIES_ESCAVALIER
.halfword 1155,  968, OVERWORLD_SIZE_SMALL // SPECIES_FOONGUS   
.halfword 1156,  969, OVERWORLD_SIZE_SMALL // SPECIES_AMOONGUSS 
.halfword 1157,  970, OVERWORLD_SIZE_SMALL // SPECIES_FRILLISH  
.halfword 1158,  971, OVERWORLD_SIZE_SMALL // female
.halfword 1159,  972, OVERWORLD_SIZE_SMALL // SPECIES_JELLICENT 
.halfword 1160,  973, OVERWORLD_SIZE_SMALL // female
.halfword 1161,  974, OVERWORLD_SIZE_SMALL // SPECIES_ALOMOMOLA 
.halfword 1162,  975, OVERWORLD_SIZE_SMALL // SPECIES_JOLTIK    
.halfword 1163,  976, OVERWORLD_SIZE_SMALL // SPECIES_GALVANTULA
.halfword 1164,  977, OVERWORLD_SIZE_SMALL // SPECIES_FERROSEED 
.halfword 1165,  978, OVERWORLD_SIZE_SMALL // SPECIES_FERROTHORN
.halfword 1166,  979, OVERWORLD_SIZE_SMALL // SPECIES_KLINK     
.halfword 1167,  980, OVERWORLD_SIZE_SMALL // SPECIES_KLANG     
.halfword 1168,  981, OVERWORLD_SIZE_SMALL // SPECIES_KLINKLANG 
.halfword 1169,  982, OVERWORLD_SIZE_SMALL // SPECIES_TYNAMO    
.halfword 1170,  983, OVERWORLD_SIZE_SMALL // SPECIES_EELEKTRIK 
.halfword 1171,  984, OVERWORLD_SIZE_SMALL // SPECIES_EELEKTROSS
.halfword 1172,  985, OVERWORLD_SIZE_SMALL // SPECIES_ELGYEM    
.halfword 1173,  986, OVERWORLD_SIZE_SMALL // SPECIES_BEHEEYEM  
.halfword 1174,  987, OVERWORLD_SIZE_SMALL // SPECIES_LITWICK   
.halfword 1175,  988, OVERWORLD_SIZE_SMALL // SPECIES_LAMPENT   
.halfword 1176,  989, OVERWORLD_SIZE_SMALL // SPECIES_CHANDELURE
.halfword 1177,  990, OVERWORLD_SIZE_SMALL // SPECIES_AXEW      
.halfword 1178,  991, OVERWORLD_SIZE_SMALL // SPECIES_FRAXURE   
.halfword 1179,  992, OVERWORLD_SIZE_SMALL // SPECIES_HAXORUS   
.halfword 1180,  993, OVERWORLD_SIZE_SMALL // SPECIES_CUBCHOO   
.halfword 1181,  994, OVERWORLD_SIZE_SMALL // SPECIES_BEARTIC   
.halfword 1182,  995, OVERWORLD_SIZE_SMALL // SPECIES_CRYOGONAL 
.halfword 1183,  996, OVERWORLD_SIZE_SMALL // SPECIES_SHELMET   
.halfword 1184,  997, OVERWORLD_SIZE_SMALL // SPECIES_ACCELGOR  
.halfword 1185,  998, OVERWORLD_SIZE_SMALL // SPECIES_STUNFISK  
.halfword 1186,  999, OVERWORLD_SIZE_SMALL // SPECIES_MIENFOO   
.halfword 1187, 1000, OVERWORLD_SIZE_SMALL // SPECIES_MIENSHAO  
.halfword 1188, 1001, OVERWORLD_SIZE_SMALL // SPECIES_DRUDDIGON 
.halfword 1189, 1002, OVERWORLD_SIZE_SMALL // SPECIES_GOLETT    
.halfword 1190, 1003, OVERWORLD_SIZE_LARGE // SPECIES_GOLURK    
.halfword 1191, 1004, OVERWORLD_SIZE_SMALL // SPECIES_PAWNIARD  
.halfword 1192, 1005, OVERWORLD_SIZE_SMALL // SPECIES_BISHARP   
.halfword 1193, 1006, OVERWORLD_SIZE_SMALL // SPECIES_BOUFFALANT
.halfword 1194, 1007, OVERWORLD_SIZE_SMALL // SPECIES_RUFFLET   
.halfword 1195, 1008, OVERWORLD_SIZE_SMALL // SPECIES_BRAVIARY  
.halfword 1196, 1009, OVERWORLD_SIZE_SMALL // SPECIES_VULLABY   
.halfword 1197, 1010, OVERWORLD_SIZE_SMALL // SPECIES_MANDIBUZZ 
.halfword 1198, 1011, OVERWORLD_SIZE_SMALL // SPECIES_HEATMOR   
.halfword 1199, 1012, OVERWORLD_SIZE_SMALL // SPECIES_DURANT    
.halfword 1200, 1013, OVERWORLD_SIZE_SMALL // SPECIES_DEINO     
.halfword 1201, 1014, OVERWORLD_SIZE_SMALL // SPECIES_ZWEILOUS  
.halfword 1202, 1015, OVERWORLD_SIZE_SMALL // SPECIES_HYDREIGON 
.halfword 1203, 1016, OVERWORLD_SIZE_SMALL // SPECIES_LARVESTA  
.halfword 1204, 1017, OVERWORLD_SIZE_SMALL // SPECIES_VOLCARONA 
.halfword 1205, 1018, OVERWORLD_SIZE_SMALL // SPECIES_COBALION  
.halfword 1206, 1019, OVERWORLD_SIZE_SMALL // SPECIES_TERRAKION 
.halfword 1207, 1020, OVERWORLD_SIZE_SMALL // SPECIES_VIRIZION  
.halfword 1208, 1021, OVERWORLD_SIZE_LARGE // SPECIES_TORNADUS  
.halfword 1209, 1022, OVERWORLD_SIZE_LARGE // therian
.halfword 1210, 1023, OVERWORLD_SIZE_LARGE // SPECIES_THUNDURUS 
.halfword 1211, 1024, OVERWORLD_SIZE_LARGE // therian
.halfword 1212, 1025, OVERWORLD_SIZE_LARGE // SPECIES_RESHIRAM  
.halfword 1213, 1026, OVERWORLD_SIZE_LARGE // SPECIES_ZEKROM    
.halfword 1214, 1027, OVERWORLD_SIZE_LARGE // SPECIES_LANDORUS  
.halfword 1215, 1028, OVERWORLD_SIZE_LARGE // therian
.halfword 1216, 1029, OVERWORLD_SIZE_LARGE // SPECIES_KYUREM    
.halfword 1217, 1030, OVERWORLD_SIZE_SMALL // SPECIES_KELDEO   
.halfword 1218, 1031, OVERWORLD_SIZE_SMALL // SPECIES_MELOETTA 
.halfword 1219, 1032, OVERWORLD_SIZE_SMALL // pirouette
.halfword 1220, 1033, OVERWORLD_SIZE_SMALL // SPECIES_GENESECT
.halfword 1221, 1034, OVERWORLD_SIZE_SMALL // SPECIES_650
.halfword 1222, 1035, OVERWORLD_SIZE_SMALL // SPECIES_651
.halfword 1223, 1036, OVERWORLD_SIZE_SMALL // SPECIES_652
.halfword 1224, 1037, OVERWORLD_SIZE_SMALL // SPECIES_653
.halfword 1225, 1038, OVERWORLD_SIZE_SMALL // SPECIES_654
.halfword 1226, 1039, OVERWORLD_SIZE_SMALL // SPECIES_655
.halfword 1227, 1040, OVERWORLD_SIZE_SMALL // SPECIES_656
.halfword 1228, 1041, OVERWORLD_SIZE_SMALL // SPECIES_657
.halfword 1229, 1042, OVERWORLD_SIZE_SMALL // SPECIES_658
.halfword 1230, 1043, OVERWORLD_SIZE_SMALL // SPECIES_659
.halfword 1231, 1044, OVERWORLD_SIZE_SMALL // SPECIES_660
.halfword 1232, 1045, OVERWORLD_SIZE_SMALL // SPECIES_661
.halfword 1233, 1046, OVERWORLD_SIZE_SMALL // SPECIES_662
.halfword 1234, 1047, OVERWORLD_SIZE_SMALL // SPECIES_663
.halfword 1235, 1048, OVERWORLD_SIZE_SMALL // SPECIES_664
.halfword 1236, 1049, OVERWORLD_SIZE_SMALL // SPECIES_665
.halfword 1237, 1050, OVERWORLD_SIZE_SMALL // SPECIES_666
.halfword 1238, 1051, OVERWORLD_SIZE_SMALL // SPECIES_667
.halfword 1239, 1052, OVERWORLD_SIZE_SMALL // SPECIES_668
.halfword 1240, 1053, OVERWORLD_SIZE_SMALL // SPECIES_669
.halfword 1241, 1054, OVERWORLD_SIZE_SMALL // SPECIES_670
.halfword 1242, 1055, OVERWORLD_SIZE_SMALL // SPECIES_671
.halfword 1243, 1056, OVERWORLD_SIZE_SMALL // SPECIES_672
.halfword 1244, 1057, OVERWORLD_SIZE_SMALL // SPECIES_673
.halfword 1245, 1058, OVERWORLD_SIZE_SMALL // SPECIES_674
.halfword 1246, 1059, OVERWORLD_SIZE_SMALL // SPECIES_675
.halfword 1247, 1060, OVERWORLD_SIZE_SMALL // SPECIES_676
.halfword 1248, 1061, OVERWORLD_SIZE_SMALL // SPECIES_677
.halfword 1249, 1062, OVERWORLD_SIZE_SMALL // SPECIES_678
.halfword 1250, 1063, OVERWORLD_SIZE_SMALL // SPECIES_679
.halfword 1251, 1064, OVERWORLD_SIZE_SMALL // SPECIES_680
.halfword 1252, 1065, OVERWORLD_SIZE_SMALL // SPECIES_681
.halfword 1253, 1066, OVERWORLD_SIZE_SMALL // SPECIES_682
.halfword 1254, 1067, OVERWORLD_SIZE_SMALL // SPECIES_683
.halfword 1255, 1068, OVERWORLD_SIZE_SMALL // SPECIES_684
.halfword 1256, 1069, OVERWORLD_SIZE_SMALL // SPECIES_685
.halfword 1257, 1070, OVERWORLD_SIZE_SMALL // SPECIES_686
.halfword 1258, 1071, OVERWORLD_SIZE_SMALL // SPECIES_687
.halfword 1259, 1072, OVERWORLD_SIZE_SMALL // SPECIES_688
.halfword 1260, 1073, OVERWORLD_SIZE_SMALL // SPECIES_689
.halfword 1261, 1074, OVERWORLD_SIZE_SMALL // SPECIES_690
.halfword 1262, 1075, OVERWORLD_SIZE_SMALL // SPECIES_691
.halfword 1263, 1076, OVERWORLD_SIZE_SMALL // SPECIES_692
.halfword 1264, 1077, OVERWORLD_SIZE_SMALL // SPECIES_693
.halfword 1265, 1078, OVERWORLD_SIZE_SMALL // SPECIES_694
.halfword 1266, 1079, OVERWORLD_SIZE_SMALL // SPECIES_695
.halfword 1267, 1080, OVERWORLD_SIZE_SMALL // SPECIES_696
.halfword 1268, 1081, OVERWORLD_SIZE_SMALL // SPECIES_697
.halfword 1269, 1082, OVERWORLD_SIZE_SMALL // SPECIES_698
.halfword 1270, 1083, OVERWORLD_SIZE_SMALL // SPECIES_699
.halfword 1271, 1084, OVERWORLD_SIZE_SMALL // SPECIES_700
.halfword 1272, 1085, OVERWORLD_SIZE_SMALL // SPECIES_701
.halfword 1273, 1086, OVERWORLD_SIZE_SMALL // SPECIES_702
.halfword 1274, 1087, OVERWORLD_SIZE_SMALL // SPECIES_703
.halfword 1275, 1088, OVERWORLD_SIZE_SMALL // SPECIES_704
.halfword 1276, 1089, OVERWORLD_SIZE_SMALL // SPECIES_705
.halfword 1277, 1090, OVERWORLD_SIZE_SMALL // SPECIES_706
.halfword 1278, 1091, OVERWORLD_SIZE_SMALL // SPECIES_707
.halfword 1279, 1092, OVERWORLD_SIZE_SMALL // SPECIES_708
.halfword 1280, 1093, OVERWORLD_SIZE_SMALL // SPECIES_709
.halfword 1281, 1094, OVERWORLD_SIZE_SMALL // SPECIES_710
.halfword 1282, 1095, OVERWORLD_SIZE_SMALL // SPECIES_711
.halfword 1283, 1096, OVERWORLD_SIZE_SMALL // SPECIES_712
.halfword 1284, 1097, OVERWORLD_SIZE_SMALL // SPECIES_713
.halfword 1285, 1098, OVERWORLD_SIZE_SMALL // SPECIES_714
.halfword 1286, 1099, OVERWORLD_SIZE_SMALL // SPECIES_715
.halfword 1287, 1100, OVERWORLD_SIZE_SMALL // SPECIES_716
.halfword 1288, 1101, OVERWORLD_SIZE_SMALL // SPECIES_717
.halfword 1289, 1102, OVERWORLD_SIZE_SMALL // SPECIES_718
.halfword 1290, 1103, OVERWORLD_SIZE_SMALL // SPECIES_719
.halfword 1291, 1104, OVERWORLD_SIZE_SMALL // SPECIES_720
.halfword 1292, 1105, OVERWORLD_SIZE_SMALL // SPECIES_721
.halfword 1293, 1106, OVERWORLD_SIZE_SMALL // SPECIES_722
.halfword 1294, 1107, OVERWORLD_SIZE_SMALL // SPECIES_723
.halfword 1295, 1108, OVERWORLD_SIZE_SMALL // SPECIES_724
.halfword 1296, 1109, OVERWORLD_SIZE_SMALL // SPECIES_725
.halfword 1297, 1110, OVERWORLD_SIZE_SMALL // SPECIES_726
.halfword 1298, 1111, OVERWORLD_SIZE_SMALL // SPECIES_727
.halfword 1299, 1112, OVERWORLD_SIZE_SMALL // SPECIES_728
.halfword 1300, 1113, OVERWORLD_SIZE_SMALL // SPECIES_729
.halfword 1301, 1114, OVERWORLD_SIZE_SMALL // SPECIES_730
.halfword 1302, 1115, OVERWORLD_SIZE_SMALL // SPECIES_731
.halfword 1303, 1116, OVERWORLD_SIZE_SMALL // SPECIES_732
.halfword 1304, 1117, OVERWORLD_SIZE_SMALL // SPECIES_733
.halfword 1305, 1118, OVERWORLD_SIZE_SMALL // SPECIES_734
.halfword 1306, 1119, OVERWORLD_SIZE_SMALL // SPECIES_735
.halfword 1307, 1120, OVERWORLD_SIZE_SMALL // SPECIES_736
.halfword 1308, 1121, OVERWORLD_SIZE_SMALL // SPECIES_737
.halfword 1309, 1122, OVERWORLD_SIZE_SMALL // SPECIES_738
.halfword 1310, 1123, OVERWORLD_SIZE_SMALL // SPECIES_739
.halfword 1311, 1124, OVERWORLD_SIZE_SMALL // SPECIES_740
.halfword 1312, 1125, OVERWORLD_SIZE_SMALL // SPECIES_741
.halfword 1313, 1126, OVERWORLD_SIZE_SMALL // SPECIES_742
.halfword 1314, 1127, OVERWORLD_SIZE_SMALL // SPECIES_743
.halfword 1315, 1128, OVERWORLD_SIZE_SMALL // SPECIES_744
.halfword 1316, 1129, OVERWORLD_SIZE_SMALL // SPECIES_745
.halfword 1317, 1130, OVERWORLD_SIZE_SMALL // SPECIES_746
.halfword 1318, 1131, OVERWORLD_SIZE_SMALL // SPECIES_747
.halfword 1319, 1132, OVERWORLD_SIZE_SMALL // SPECIES_748
.halfword 1320, 1133, OVERWORLD_SIZE_SMALL // SPECIES_749
.halfword 1321, 1134, OVERWORLD_SIZE_SMALL // SPECIES_750
.halfword 1322, 1135, OVERWORLD_SIZE_SMALL // SPECIES_751
.halfword 1323, 1136, OVERWORLD_SIZE_SMALL // SPECIES_752
.halfword 1324, 1137, OVERWORLD_SIZE_SMALL // SPECIES_753
.halfword 1325, 1138, OVERWORLD_SIZE_SMALL // SPECIES_754
.halfword 1326, 1139, OVERWORLD_SIZE_SMALL // SPECIES_755
.halfword 1327, 1140, OVERWORLD_SIZE_SMALL // SPECIES_756
.halfword 1328, 1141, OVERWORLD_SIZE_SMALL // SPECIES_757
.halfword 1329, 1142, OVERWORLD_SIZE_SMALL // SPECIES_758
.halfword 1330, 1143, OVERWORLD_SIZE_SMALL // SPECIES_759
.halfword 1331, 1144, OVERWORLD_SIZE_SMALL // SPECIES_760
.halfword 1332, 1145, OVERWORLD_SIZE_SMALL // SPECIES_761
.halfword 1333, 1146, OVERWORLD_SIZE_SMALL // SPECIES_762
.halfword 1334, 1147, OVERWORLD_SIZE_SMALL // SPECIES_763
.halfword 1335, 1148, OVERWORLD_SIZE_SMALL // SPECIES_764
.halfword 1336, 1149, OVERWORLD_SIZE_SMALL // SPECIES_765
.halfword 1337, 1150, OVERWORLD_SIZE_SMALL // SPECIES_766
.halfword 1338, 1151, OVERWORLD_SIZE_SMALL // SPECIES_767
.halfword 1339, 1152, OVERWORLD_SIZE_SMALL // SPECIES_768
.halfword 1340, 1153, OVERWORLD_SIZE_SMALL // SPECIES_769
.halfword 1341, 1154, OVERWORLD_SIZE_SMALL // SPECIES_770
.halfword 1342, 1155, OVERWORLD_SIZE_SMALL // SPECIES_771
.halfword 1343, 1156, OVERWORLD_SIZE_SMALL // SPECIES_772
.halfword 1344, 1157, OVERWORLD_SIZE_SMALL // SPECIES_773
.halfword 1345, 1158, OVERWORLD_SIZE_SMALL // SPECIES_774
.halfword 1346, 1159, OVERWORLD_SIZE_SMALL // SPECIES_775
.halfword 1347, 1160, OVERWORLD_SIZE_SMALL // SPECIES_776
.halfword 1348, 1161, OVERWORLD_SIZE_SMALL // SPECIES_777
.halfword 1349, 1162, OVERWORLD_SIZE_SMALL // SPECIES_778
.halfword 1350, 1163, OVERWORLD_SIZE_SMALL // SPECIES_779
.halfword 1351, 1164, OVERWORLD_SIZE_SMALL // SPECIES_780
.halfword 1352, 1165, OVERWORLD_SIZE_SMALL // SPECIES_781
.halfword 1353, 1166, OVERWORLD_SIZE_SMALL // SPECIES_782
.halfword 1354, 1167, OVERWORLD_SIZE_SMALL // SPECIES_783
.halfword 1355, 1168, OVERWORLD_SIZE_SMALL // SPECIES_784
.halfword 1356, 1169, OVERWORLD_SIZE_SMALL // SPECIES_785
.halfword 1357, 1170, OVERWORLD_SIZE_SMALL // SPECIES_786
.halfword 1358, 1171, OVERWORLD_SIZE_SMALL // SPECIES_787
.halfword 1359, 1172, OVERWORLD_SIZE_SMALL // SPECIES_788
.halfword 1360, 1173, OVERWORLD_SIZE_SMALL // SPECIES_789
.halfword 1361, 1174, OVERWORLD_SIZE_SMALL // SPECIES_790
.halfword 1362, 1175, OVERWORLD_SIZE_SMALL // SPECIES_791
.halfword 1363, 1176, OVERWORLD_SIZE_SMALL // SPECIES_792
.halfword 1364, 1177, OVERWORLD_SIZE_SMALL // SPECIES_793
.halfword 1365, 1178, OVERWORLD_SIZE_SMALL // SPECIES_794
.halfword 1366, 1179, OVERWORLD_SIZE_SMALL // SPECIES_795
.halfword 1367, 1180, OVERWORLD_SIZE_SMALL // SPECIES_796
.halfword 1368, 1181, OVERWORLD_SIZE_SMALL // SPECIES_797
.halfword 1369, 1182, OVERWORLD_SIZE_SMALL // SPECIES_798
.halfword 1370, 1183, OVERWORLD_SIZE_SMALL // SPECIES_799
.halfword 1371, 1184, OVERWORLD_SIZE_SMALL // SPECIES_800
.halfword 1372, 1185, OVERWORLD_SIZE_SMALL // SPECIES_801
.halfword 1373, 1186, OVERWORLD_SIZE_SMALL // SPECIES_802
.halfword 1374, 1187, OVERWORLD_SIZE_SMALL // SPECIES_803
.halfword 1375, 1188, OVERWORLD_SIZE_SMALL // SPECIES_804
.halfword 1376, 1189, OVERWORLD_SIZE_SMALL // SPECIES_805
.halfword 1377, 1190, OVERWORLD_SIZE_SMALL // SPECIES_806
.halfword 1378, 1191, OVERWORLD_SIZE_SMALL // SPECIES_807
.halfword 1379, 1192, OVERWORLD_SIZE_SMALL // SPECIES_808
.halfword 1380, 1193, OVERWORLD_SIZE_SMALL // SPECIES_809
.halfword 1381, 1194, OVERWORLD_SIZE_SMALL // SPECIES_810
.halfword 1382, 1195, OVERWORLD_SIZE_SMALL // SPECIES_811
.halfword 1383, 1196, OVERWORLD_SIZE_SMALL // SPECIES_812
.halfword 1384, 1197, OVERWORLD_SIZE_SMALL // SPECIES_813
.halfword 1385, 1198, OVERWORLD_SIZE_SMALL // SPECIES_814
.halfword 1386, 1199, OVERWORLD_SIZE_SMALL // SPECIES_815
.halfword 1387, 1200, OVERWORLD_SIZE_SMALL // SPECIES_816
.halfword 1388, 1201, OVERWORLD_SIZE_SMALL // SPECIES_817
.halfword 1389, 1202, OVERWORLD_SIZE_SMALL // SPECIES_818
.halfword 1390, 1203, OVERWORLD_SIZE_SMALL // SPECIES_819
.halfword 1391, 1204, OVERWORLD_SIZE_SMALL // SPECIES_820
.halfword 1392, 1205, OVERWORLD_SIZE_SMALL // SPECIES_821
.halfword 1393, 1206, OVERWORLD_SIZE_SMALL // SPECIES_822
.halfword 1394, 1207, OVERWORLD_SIZE_SMALL // SPECIES_823
.halfword 1395, 1208, OVERWORLD_SIZE_SMALL // SPECIES_824
.halfword 1396, 1209, OVERWORLD_SIZE_SMALL // SPECIES_825
.halfword 1397, 1210, OVERWORLD_SIZE_SMALL // SPECIES_826
.halfword 1398, 1211, OVERWORLD_SIZE_SMALL // SPECIES_827
.halfword 1399, 1212, OVERWORLD_SIZE_SMALL // SPECIES_828
.halfword 1400, 1213, OVERWORLD_SIZE_SMALL // SPECIES_829
.halfword 1401, 1214, OVERWORLD_SIZE_SMALL // SPECIES_830
.halfword 1402, 1215, OVERWORLD_SIZE_SMALL // SPECIES_831
.halfword 1403, 1216, OVERWORLD_SIZE_SMALL // SPECIES_832
.halfword 1404, 1217, OVERWORLD_SIZE_SMALL // SPECIES_833
.halfword 1405, 1218, OVERWORLD_SIZE_SMALL // SPECIES_834
.halfword 1406, 1219, OVERWORLD_SIZE_SMALL // SPECIES_835
.halfword 1407, 1220, OVERWORLD_SIZE_SMALL // SPECIES_836
.halfword 1408, 1221, OVERWORLD_SIZE_SMALL // SPECIES_837
.halfword 1409, 1222, OVERWORLD_SIZE_SMALL // SPECIES_838
.halfword 1410, 1223, OVERWORLD_SIZE_SMALL // SPECIES_839
.halfword 1411, 1224, OVERWORLD_SIZE_SMALL // SPECIES_840
.halfword 1412, 1225, OVERWORLD_SIZE_SMALL // SPECIES_841
.halfword 1413, 1226, OVERWORLD_SIZE_SMALL // SPECIES_842
.halfword 1414, 1227, OVERWORLD_SIZE_SMALL // SPECIES_843
.halfword 1415, 1228, OVERWORLD_SIZE_SMALL // SPECIES_844
.halfword 1416, 1229, OVERWORLD_SIZE_SMALL // SPECIES_845
.halfword 1417, 1230, OVERWORLD_SIZE_SMALL // SPECIES_846
.halfword 1418, 1231, OVERWORLD_SIZE_SMALL // SPECIES_847
.halfword 1419, 1232, OVERWORLD_SIZE_SMALL // SPECIES_848
.halfword 1420, 1233, OVERWORLD_SIZE_SMALL // SPECIES_849
.halfword 1421, 1234, OVERWORLD_SIZE_SMALL // SPECIES_850
.halfword 1422, 1235, OVERWORLD_SIZE_SMALL // SPECIES_851
.halfword 1423, 1236, OVERWORLD_SIZE_SMALL // SPECIES_852
.halfword 1424, 1237, OVERWORLD_SIZE_SMALL // SPECIES_853
.halfword 1425, 1238, OVERWORLD_SIZE_SMALL // SPECIES_854
.halfword 1426, 1239, OVERWORLD_SIZE_SMALL // SPECIES_855
.halfword 1427, 1240, OVERWORLD_SIZE_SMALL // SPECIES_856
.halfword 1428, 1241, OVERWORLD_SIZE_SMALL // SPECIES_857
.halfword 1429, 1242, OVERWORLD_SIZE_SMALL // SPECIES_858
.halfword 1430, 1243, OVERWORLD_SIZE_SMALL // SPECIES_859
.halfword 1431, 1244, OVERWORLD_SIZE_SMALL // SPECIES_860
.halfword 1432, 1245, OVERWORLD_SIZE_SMALL // SPECIES_861
.halfword 1433, 1246, OVERWORLD_SIZE_SMALL // SPECIES_862
.halfword 1434, 1247, OVERWORLD_SIZE_SMALL // SPECIES_863
.halfword 1435, 1248, OVERWORLD_SIZE_SMALL // SPECIES_864
.halfword 1436, 1249, OVERWORLD_SIZE_SMALL // SPECIES_865
.halfword 1437, 1250, OVERWORLD_SIZE_SMALL // SPECIES_866
.halfword 1438, 1251, OVERWORLD_SIZE_SMALL // SPECIES_867
.halfword 1439, 1252, OVERWORLD_SIZE_SMALL // SPECIES_868
.halfword 1440, 1253, OVERWORLD_SIZE_SMALL // SPECIES_869
.halfword 1441, 1254, OVERWORLD_SIZE_SMALL // SPECIES_870
.halfword 1442, 1255, OVERWORLD_SIZE_SMALL // SPECIES_871
.halfword 1443, 1256, OVERWORLD_SIZE_SMALL // SPECIES_872
.halfword 1444, 1257, OVERWORLD_SIZE_SMALL // SPECIES_873
.halfword 1445, 1258, OVERWORLD_SIZE_SMALL // SPECIES_874
.halfword 1446, 1259, OVERWORLD_SIZE_SMALL // SPECIES_875
.halfword 1447, 1260, OVERWORLD_SIZE_SMALL // SPECIES_876
.halfword 1448, 1261, OVERWORLD_SIZE_SMALL // SPECIES_877
.halfword 1449, 1262, OVERWORLD_SIZE_SMALL // SPECIES_878
.halfword 1450, 1263, OVERWORLD_SIZE_SMALL // SPECIES_879
.halfword 1451, 1264, OVERWORLD_SIZE_SMALL // SPECIES_880
.halfword 1452, 1265, OVERWORLD_SIZE_SMALL // SPECIES_881
.halfword 1453, 1266, OVERWORLD_SIZE_SMALL // SPECIES_882
.halfword 1454, 1267, OVERWORLD_SIZE_SMALL // SPECIES_883
.halfword 1455, 1268, OVERWORLD_SIZE_SMALL // SPECIES_884
.halfword 1456, 1269, OVERWORLD_SIZE_SMALL // SPECIES_885
.halfword 1457, 1270, OVERWORLD_SIZE_SMALL // SPECIES_886
.halfword 1458, 1271, OVERWORLD_SIZE_SMALL // SPECIES_887
.halfword 1459, 1272, OVERWORLD_SIZE_SMALL // SPECIES_888
.halfword 1460, 1273, OVERWORLD_SIZE_SMALL // SPECIES_889
.halfword 1461, 1274, OVERWORLD_SIZE_LARGE // SPECIES_890
.halfword 1462, 1275, OVERWORLD_SIZE_SMALL // SPECIES_891
.halfword 1463, 1276, OVERWORLD_SIZE_SMALL // SPECIES_892
.halfword 1464, 1277, OVERWORLD_SIZE_SMALL // SPECIES_893
.halfword 1465, 1278, OVERWORLD_SIZE_SMALL // SPECIES_894
.halfword 1466, 1279, OVERWORLD_SIZE_SMALL // SPECIES_895
.halfword 1467, 1280, OVERWORLD_SIZE_SMALL // SPECIES_896
.halfword 1468, 1281, OVERWORLD_SIZE_SMALL // SPECIES_897
.halfword 1469, 1282, OVERWORLD_SIZE_SMALL // SPECIES_898
.halfword 1470, 1283, OVERWORLD_SIZE_SMALL // 小火马
.halfword 1471, 1284, OVERWORLD_SIZE_SMALL // 小火马地区形态
.halfword 1472, 1285, OVERWORLD_SIZE_SMALL // 呆呆兽
.halfword 1473, 1286, OVERWORLD_SIZE_SMALL // 呆呆兽地区形态
.halfword 1474, 1287, OVERWORLD_SIZE_SMALL // 喵喵
.halfword 1475, 1288, OVERWORLD_SIZE_SMALL // 喵喵地区形态
.halfword 1476, 1289, OVERWORLD_SIZE_SMALL // 喵喵地区形态
.halfword 1477, 1290, OVERWORLD_SIZE_SMALL // 急冻鸟
.halfword 1478, 1291, OVERWORLD_SIZE_SMALL // 急冻鸟区形态
.halfword 1479, 1292, OVERWORLD_SIZE_SMALL // 闪电鸟
.halfword 1480, 1293, OVERWORLD_SIZE_SMALL // 闪电鸟区形态
.halfword 1481, 1294, OVERWORLD_SIZE_SMALL // 火焰鸟
.halfword 1482, 1295, OVERWORLD_SIZE_SMALL // 火焰鸟区形态

.halfword 0xFFFF


.close


.open "base/arm9.bin", 0x02000000

.org 0x020FECAE

.area 0x3DC, 0xFF // if this overflows then the routine will need a rewrite

// this was rewritten to make it a byte per pokémon.  the routine subtracts one, so it starts with bulbasaur
gDimorphismTable:
/* SPECIES_BULBASAUR       */ .byte 0 
/* SPECIES_IVYSAUR         */ .byte 0 
/* SPECIES_VENUSAUR        */ .byte 1 
/* SPECIES_CHARMANDER      */ .byte 0 
/* SPECIES_CHARMELEON      */ .byte 0 
/* SPECIES_CHARIZARD       */ .byte 0 
/* SPECIES_SQUIRTLE        */ .byte 0 
/* SPECIES_WARTORTLE       */ .byte 0 
/* SPECIES_BLASTOISE       */ .byte 0 
/* SPECIES_CATERPIE        */ .byte 0 
/* SPECIES_METAPOD         */ .byte 0 
/* SPECIES_BUTTERFREE      */ .byte 0 
/* SPECIES_WEEDLE          */ .byte 0 
/* SPECIES_KAKUNA          */ .byte 0 
/* SPECIES_BEEDRILL        */ .byte 0 
/* SPECIES_PIDGEY          */ .byte 0 
/* SPECIES_PIDGEOTTO       */ .byte 0 
/* SPECIES_PIDGEOT         */ .byte 0 
/* SPECIES_RATTATA         */ .byte 0 
/* SPECIES_RATICATE        */ .byte 0 
/* SPECIES_SPEAROW         */ .byte 0 
/* SPECIES_FEAROW          */ .byte 0 
/* SPECIES_EKANS           */ .byte 0 
/* SPECIES_ARBOK           */ .byte 0 
/* SPECIES_PIKACHU         */ .byte 1 
/* SPECIES_RAICHU          */ .byte 0 
/* SPECIES_SANDSHREW       */ .byte 0 
/* SPECIES_SANDSLASH       */ .byte 0 
/* SPECIES_NIDORAN_F       */ .byte 0 
/* SPECIES_NIDORINA        */ .byte 0 
/* SPECIES_NIDOQUEEN       */ .byte 0 
/* SPECIES_NIDORAN_M       */ .byte 0 
/* SPECIES_NIDORINO        */ .byte 0 
/* SPECIES_NIDOKING        */ .byte 0 
/* SPECIES_CLEFAIRY        */ .byte 0 
/* SPECIES_CLEFABLE        */ .byte 0 
/* SPECIES_VULPIX          */ .byte 0 
/* SPECIES_NINETALES       */ .byte 0 
/* SPECIES_JIGGLYPUFF      */ .byte 0 
/* SPECIES_WIGGLYTUFF      */ .byte 0 
/* SPECIES_ZUBAT           */ .byte 0 
/* SPECIES_GOLBAT          */ .byte 0 
/* SPECIES_ODDISH          */ .byte 0 
/* SPECIES_GLOOM           */ .byte 0 
/* SPECIES_VILEPLUME       */ .byte 0 
/* SPECIES_PARAS           */ .byte 0 
/* SPECIES_PARASECT        */ .byte 0 
/* SPECIES_VENONAT         */ .byte 0 
/* SPECIES_VENOMOTH        */ .byte 0 
/* SPECIES_DIGLETT         */ .byte 0 
/* SPECIES_DUGTRIO         */ .byte 0 
/* SPECIES_MEOWTH          */ .byte 0 
/* SPECIES_PERSIAN         */ .byte 0 
/* SPECIES_PSYDUCK         */ .byte 0 
/* SPECIES_GOLDUCK         */ .byte 0 
/* SPECIES_MANKEY          */ .byte 0 
/* SPECIES_PRIMEAPE        */ .byte 0 
/* SPECIES_GROWLITHE       */ .byte 0 
/* SPECIES_ARCANINE        */ .byte 0 
/* SPECIES_POLIWAG         */ .byte 0 
/* SPECIES_POLIWHIRL       */ .byte 0 
/* SPECIES_POLIWRATH       */ .byte 0 
/* SPECIES_ABRA            */ .byte 0 
/* SPECIES_KADABRA         */ .byte 0 
/* SPECIES_ALAKAZAM        */ .byte 0 
/* SPECIES_MACHOP          */ .byte 0 
/* SPECIES_MACHOKE         */ .byte 0 
/* SPECIES_MACHAMP         */ .byte 0 
/* SPECIES_BELLSPROUT      */ .byte 0 
/* SPECIES_WEEPINBELL      */ .byte 0 
/* SPECIES_VICTREEBEL      */ .byte 0 
/* SPECIES_TENTACOOL       */ .byte 0 
/* SPECIES_TENTACRUEL      */ .byte 0 
/* SPECIES_GEODUDE         */ .byte 0 
/* SPECIES_GRAVELER        */ .byte 0 
/* SPECIES_GOLEM           */ .byte 0 
/* SPECIES_PONYTA          */ .byte 0
/* SPECIES_RAPIDASH        */ .byte 0 
/* SPECIES_SLOWPOKE        */ .byte 0 
/* SPECIES_SLOWBRO         */ .byte 0 
/* SPECIES_MAGNEMITE       */ .byte 0 
/* SPECIES_MAGNETON        */ .byte 0 
/* SPECIES_FARFETCHD       */ .byte 0 
/* SPECIES_DODUO           */ .byte 0 
/* SPECIES_DODRIO          */ .byte 0 
/* SPECIES_SEEL            */ .byte 0 
/* SPECIES_DEWGONG         */ .byte 0 
/* SPECIES_GRIMER          */ .byte 0 
/* SPECIES_MUK             */ .byte 0 
/* SPECIES_SHELLDER        */ .byte 0 
/* SPECIES_CLOYSTER        */ .byte 0 
/* SPECIES_GASTLY          */ .byte 0 
/* SPECIES_HAUNTER         */ .byte 0 
/* SPECIES_GENGAR          */ .byte 0 
/* SPECIES_ONIX            */ .byte 0 
/* SPECIES_DROWZEE         */ .byte 0 
/* SPECIES_HYPNO           */ .byte 0 
/* SPECIES_KRABBY          */ .byte 0 
/* SPECIES_KINGLER         */ .byte 0 
/* SPECIES_VOLTORB         */ .byte 0 
/* SPECIES_ELECTRODE       */ .byte 0 
/* SPECIES_EXEGGCUTE       */ .byte 0 
/* SPECIES_EXEGGUTOR       */ .byte 0 
/* SPECIES_CUBONE          */ .byte 0 
/* SPECIES_MAROWAK         */ .byte 0 
/* SPECIES_HITMONLEE       */ .byte 0 
/* SPECIES_HITMONCHAN      */ .byte 0 
/* SPECIES_LICKITUNG       */ .byte 0 
/* SPECIES_KOFFING         */ .byte 0 
/* SPECIES_WEEZING         */ .byte 0 
/* SPECIES_RHYHORN         */ .byte 0 
/* SPECIES_RHYDON          */ .byte 0 
/* SPECIES_CHANSEY         */ .byte 0 
/* SPECIES_TANGELA         */ .byte 0 
/* SPECIES_KANGASKHAN      */ .byte 0 
/* SPECIES_HORSEA          */ .byte 0 
/* SPECIES_SEADRA          */ .byte 0 
/* SPECIES_GOLDEEN         */ .byte 0 
/* SPECIES_SEAKING         */ .byte 0 
/* SPECIES_STARYU          */ .byte 0 
/* SPECIES_STARMIE         */ .byte 0 
/* SPECIES_MR_MIME         */ .byte 0 
/* SPECIES_SCYTHER         */ .byte 0 
/* SPECIES_JYNX            */ .byte 0 
/* SPECIES_ELECTABUZZ      */ .byte 0 
/* SPECIES_MAGMAR          */ .byte 0 
/* SPECIES_PINSIR          */ .byte 0 
/* SPECIES_TAUROS          */ .byte 0 
/* SPECIES_MAGIKARP        */ .byte 0 
/* SPECIES_GYARADOS        */ .byte 0 
/* SPECIES_LAPRAS          */ .byte 0 
/* SPECIES_DITTO           */ .byte 0 
/* SPECIES_EEVEE           */ .byte 0 
/* SPECIES_VAPOREON        */ .byte 0 
/* SPECIES_JOLTEON         */ .byte 0 
/* SPECIES_FLAREON         */ .byte 0 
/* SPECIES_PORYGON         */ .byte 0 
/* SPECIES_OMANYTE         */ .byte 0 
/* SPECIES_OMASTAR         */ .byte 0 
/* SPECIES_KABUTO          */ .byte 0 
/* SPECIES_KABUTOPS        */ .byte 0 
/* SPECIES_AERODACTYL      */ .byte 0 
/* SPECIES_SNORLAX         */ .byte 0 
/* SPECIES_ARTICUNO        */ .byte 0 
/* SPECIES_ZAPDOS          */ .byte 0 
/* SPECIES_MOLTRES         */ .byte 0 
/* SPECIES_DRATINI         */ .byte 0 
/* SPECIES_DRAGONAIR       */ .byte 0 
/* SPECIES_DRAGONITE       */ .byte 0 
/* SPECIES_MEWTWO          */ .byte 0 
/* SPECIES_MEW             */ .byte 0 
/* SPECIES_CHIKORITA       */ .byte 0 
/* SPECIES_BAYLEEF         */ .byte 0 
/* SPECIES_MEGANIUM        */ .byte 1 
/* SPECIES_CYNDAQUIL       */ .byte 0 
/* SPECIES_QUILAVA         */ .byte 0 
/* SPECIES_TYPHLOSION      */ .byte 0 
/* SPECIES_TOTODILE        */ .byte 0 
/* SPECIES_CROCONAW        */ .byte 0 
/* SPECIES_FERALIGATR      */ .byte 0 
/* SPECIES_SENTRET         */ .byte 0 
/* SPECIES_FURRET          */ .byte 0 
/* SPECIES_HOOTHOOT        */ .byte 0 
/* SPECIES_NOCTOWL         */ .byte 0 
/* SPECIES_LEDYBA          */ .byte 0 
/* SPECIES_LEDIAN          */ .byte 0 
/* SPECIES_SPINARAK        */ .byte 0 
/* SPECIES_ARIADOS         */ .byte 0 
/* SPECIES_CROBAT          */ .byte 0 
/* SPECIES_CHINCHOU        */ .byte 0 
/* SPECIES_LANTURN         */ .byte 0 
/* SPECIES_PICHU           */ .byte 0 
/* SPECIES_CLEFFA          */ .byte 0 
/* SPECIES_IGGLYBUFF       */ .byte 0 
/* SPECIES_TOGEPI          */ .byte 0 
/* SPECIES_TOGETIC         */ .byte 0 
/* SPECIES_NATU            */ .byte 0 
/* SPECIES_XATU            */ .byte 0 
/* SPECIES_MAREEP          */ .byte 0 
/* SPECIES_FLAAFFY         */ .byte 0 
/* SPECIES_AMPHAROS        */ .byte 0 
/* SPECIES_BELLOSSOM       */ .byte 0 
/* SPECIES_MARILL          */ .byte 0 
/* SPECIES_AZUMARILL       */ .byte 0 
/* SPECIES_SUDOWOODO       */ .byte 0 
/* SPECIES_POLITOED        */ .byte 0 
/* SPECIES_HOPPIP          */ .byte 0 
/* SPECIES_SKIPLOOM        */ .byte 0 
/* SPECIES_JUMPLUFF        */ .byte 0 
/* SPECIES_AIPOM           */ .byte 0 
/* SPECIES_SUNKERN         */ .byte 0 
/* SPECIES_SUNFLORA        */ .byte 0 
/* SPECIES_YANMA           */ .byte 0 
/* SPECIES_WOOPER          */ .byte 0 
/* SPECIES_QUAGSIRE        */ .byte 0 
/* SPECIES_ESPEON          */ .byte 0 
/* SPECIES_UMBREON         */ .byte 0 
/* SPECIES_MURKROW         */ .byte 0 
/* SPECIES_SLOWKING        */ .byte 0 
/* SPECIES_MISDREAVUS      */ .byte 0 
/* SPECIES_UNOWN           */ .byte 0 
/* SPECIES_WOBBUFFET       */ .byte 1 
/* SPECIES_GIRAFARIG       */ .byte 0 
/* SPECIES_PINECO          */ .byte 0 
/* SPECIES_FORRETRESS      */ .byte 0 
/* SPECIES_DUNSPARCE       */ .byte 0 
/* SPECIES_GLIGAR          */ .byte 0 
/* SPECIES_STEELIX         */ .byte 1 
/* SPECIES_SNUBBULL        */ .byte 0 
/* SPECIES_GRANBULL        */ .byte 0 
/* SPECIES_QWILFISH        */ .byte 0 
/* SPECIES_SCIZOR          */ .byte 0 
/* SPECIES_SHUCKLE         */ .byte 0 
/* SPECIES_HERACROSS       */ .byte 1 
/* SPECIES_SNEASEL         */ .byte 0 
/* SPECIES_TEDDIURSA       */ .byte 0 
/* SPECIES_URSARING        */ .byte 0 
/* SPECIES_SLUGMA          */ .byte 0 
/* SPECIES_MAGCARGO        */ .byte 0 
/* SPECIES_SWINUB          */ .byte 0 
/* SPECIES_PILOSWINE       */ .byte 0 
/* SPECIES_CORSOLA         */ .byte 0 
/* SPECIES_REMORAID        */ .byte 0 
/* SPECIES_OCTILLERY       */ .byte 0 
/* SPECIES_DELIBIRD        */ .byte 0 
/* SPECIES_MANTINE         */ .byte 0 
/* SPECIES_SKARMORY        */ .byte 0 
/* SPECIES_HOUNDOUR        */ .byte 0 
/* SPECIES_HOUNDOOM        */ .byte 0 
/* SPECIES_KINGDRA         */ .byte 0 
/* SPECIES_PHANPY          */ .byte 0 
/* SPECIES_DONPHAN         */ .byte 0 
/* SPECIES_PORYGON2        */ .byte 0 
/* SPECIES_STANTLER        */ .byte 0 
/* SPECIES_SMEARGLE        */ .byte 0 
/* SPECIES_TYROGUE         */ .byte 0 
/* SPECIES_HITMONTOP       */ .byte 0 
/* SPECIES_SMOOCHUM        */ .byte 0 
/* SPECIES_ELEKID          */ .byte 0 
/* SPECIES_MAGBY           */ .byte 0 
/* SPECIES_MILTANK         */ .byte 0 
/* SPECIES_BLISSEY         */ .byte 0 
/* SPECIES_RAIKOU          */ .byte 0 
/* SPECIES_ENTEI           */ .byte 0 
/* SPECIES_SUICUNE         */ .byte 0 
/* SPECIES_LARVITAR        */ .byte 0 
/* SPECIES_PUPITAR         */ .byte 0 
/* SPECIES_TYRANITAR       */ .byte 0 
/* SPECIES_LUGIA           */ .byte 0 
/* SPECIES_HO_OH           */ .byte 0 
/* SPECIES_CELEBI          */ .byte 0 
/* SPECIES_TREECKO         */ .byte 0 
/* SPECIES_GROVYLE         */ .byte 0 
/* SPECIES_SCEPTILE        */ .byte 0 
/* SPECIES_TORCHIC         */ .byte 0 
/* SPECIES_COMBUSKEN       */ .byte 0 
/* SPECIES_BLAZIKEN        */ .byte 0 
/* SPECIES_MUDKIP          */ .byte 0 
/* SPECIES_MARSHTOMP       */ .byte 0 
/* SPECIES_SWAMPERT        */ .byte 0 
/* SPECIES_POOCHYENA       */ .byte 0 
/* SPECIES_MIGHTYENA       */ .byte 0 
/* SPECIES_ZIGZAGOON       */ .byte 0 
/* SPECIES_LINOONE         */ .byte 0 
/* SPECIES_WURMPLE         */ .byte 0 
/* SPECIES_SILCOON         */ .byte 0 
/* SPECIES_BEAUTIFLY       */ .byte 0 
/* SPECIES_CASCOON         */ .byte 0 
/* SPECIES_DUSTOX          */ .byte 0 
/* SPECIES_LOTAD           */ .byte 0 
/* SPECIES_LOMBRE          */ .byte 0 
/* SPECIES_LUDICOLO        */ .byte 0 
/* SPECIES_SEEDOT          */ .byte 0 
/* SPECIES_NUZLEAF         */ .byte 0 
/* SPECIES_SHIFTRY         */ .byte 0 
/* SPECIES_TAILLOW         */ .byte 0 
/* SPECIES_SWELLOW         */ .byte 0 
/* SPECIES_WINGULL         */ .byte 0 
/* SPECIES_PELIPPER        */ .byte 0 
/* SPECIES_RALTS           */ .byte 0 
/* SPECIES_KIRLIA          */ .byte 0 
/* SPECIES_GARDEVOIR       */ .byte 0 
/* SPECIES_SURSKIT         */ .byte 0 
/* SPECIES_MASQUERAIN      */ .byte 0 
/* SPECIES_SHROOMISH       */ .byte 0 
/* SPECIES_BRELOOM         */ .byte 0 
/* SPECIES_SLAKOTH         */ .byte 0 
/* SPECIES_VIGOROTH        */ .byte 0 
/* SPECIES_SLAKING         */ .byte 0 
/* SPECIES_NINCADA         */ .byte 0 
/* SPECIES_NINJASK         */ .byte 0 
/* SPECIES_SHEDINJA        */ .byte 0 
/* SPECIES_WHISMUR         */ .byte 0 
/* SPECIES_LOUDRED         */ .byte 0 
/* SPECIES_EXPLOUD         */ .byte 0 
/* SPECIES_MAKUHITA        */ .byte 0 
/* SPECIES_HARIYAMA        */ .byte 0 
/* SPECIES_AZURILL         */ .byte 0 
/* SPECIES_NOSEPASS        */ .byte 0 
/* SPECIES_SKITTY          */ .byte 0 
/* SPECIES_DELCATTY        */ .byte 0 
/* SPECIES_SABLEYE         */ .byte 0 
/* SPECIES_MAWILE          */ .byte 0 
/* SPECIES_ARON            */ .byte 0 
/* SPECIES_LAIRON          */ .byte 0 
/* SPECIES_AGGRON          */ .byte 0 
/* SPECIES_MEDITITE        */ .byte 0 
/* SPECIES_MEDICHAM        */ .byte 0 
/* SPECIES_ELECTRIKE       */ .byte 0 
/* SPECIES_MANECTRIC       */ .byte 0 
/* SPECIES_PLUSLE          */ .byte 0 
/* SPECIES_MINUN           */ .byte 0 
/* SPECIES_VOLBEAT         */ .byte 0 
/* SPECIES_ILLUMISE        */ .byte 0 
/* SPECIES_ROSELIA         */ .byte 0 
/* SPECIES_GULPIN          */ .byte 0 
/* SPECIES_SWALOT          */ .byte 0 
/* SPECIES_CARVANHA        */ .byte 0 
/* SPECIES_SHARPEDO        */ .byte 0 
/* SPECIES_WAILMER         */ .byte 0 
/* SPECIES_WAILORD         */ .byte 0 
/* SPECIES_NUMEL           */ .byte 0 
/* SPECIES_CAMERUPT        */ .byte 0 
/* SPECIES_TORKOAL         */ .byte 0 
/* SPECIES_SPOINK          */ .byte 0 
/* SPECIES_GRUMPIG         */ .byte 0 
/* SPECIES_SPINDA          */ .byte 0 
/* SPECIES_TRAPINCH        */ .byte 0 
/* SPECIES_VIBRAVA         */ .byte 0 
/* SPECIES_FLYGON          */ .byte 0 
/* SPECIES_CACNEA          */ .byte 0 
/* SPECIES_CACTURNE        */ .byte 0 
/* SPECIES_SWABLU          */ .byte 0 
/* SPECIES_ALTARIA         */ .byte 0 
/* SPECIES_ZANGOOSE        */ .byte 0 
/* SPECIES_SEVIPER         */ .byte 0 
/* SPECIES_LUNATONE        */ .byte 0 
/* SPECIES_SOLROCK         */ .byte 0 
/* SPECIES_BARBOACH        */ .byte 0 
/* SPECIES_WHISCASH        */ .byte 0 
/* SPECIES_CORPHISH        */ .byte 0 
/* SPECIES_CRAWDAUNT       */ .byte 0 
/* SPECIES_BALTOY          */ .byte 0 
/* SPECIES_CLAYDOL         */ .byte 0 
/* SPECIES_LILEEP          */ .byte 0 
/* SPECIES_CRADILY         */ .byte 0 
/* SPECIES_ANORITH         */ .byte 0 
/* SPECIES_ARMALDO         */ .byte 0 
/* SPECIES_FEEBAS          */ .byte 0 
/* SPECIES_MILOTIC         */ .byte 0 
/* SPECIES_CASTFORM        */ .byte 0 
/* SPECIES_KECLEON         */ .byte 0 
/* SPECIES_SHUPPET         */ .byte 0 
/* SPECIES_BANETTE         */ .byte 0 
/* SPECIES_DUSKULL         */ .byte 0 
/* SPECIES_DUSCLOPS        */ .byte 0 
/* SPECIES_TROPIUS         */ .byte 0 
/* SPECIES_CHIMECHO        */ .byte 0 
/* SPECIES_ABSOL           */ .byte 0 
/* SPECIES_WYNAUT          */ .byte 0 
/* SPECIES_SNORUNT         */ .byte 0 
/* SPECIES_GLALIE          */ .byte 0 
/* SPECIES_SPHEAL          */ .byte 0 
/* SPECIES_SEALEO          */ .byte 0 
/* SPECIES_WALREIN         */ .byte 0 
/* SPECIES_CLAMPERL        */ .byte 0 
/* SPECIES_HUNTAIL         */ .byte 0 
/* SPECIES_GOREBYSS        */ .byte 0 
/* SPECIES_RELICANTH       */ .byte 0 
/* SPECIES_LUVDISC         */ .byte 0 
/* SPECIES_BAGON           */ .byte 0 
/* SPECIES_SHELGON         */ .byte 0 
/* SPECIES_SALAMENCE       */ .byte 0 
/* SPECIES_BELDUM          */ .byte 0 
/* SPECIES_METANG          */ .byte 0 
/* SPECIES_METAGROSS       */ .byte 0 
/* SPECIES_REGIROCK        */ .byte 0 
/* SPECIES_REGICE          */ .byte 0 
/* SPECIES_REGISTEEL       */ .byte 0 
/* SPECIES_LATIAS          */ .byte 0 
/* SPECIES_LATIOS          */ .byte 0 
/* SPECIES_KYOGRE          */ .byte 0 
/* SPECIES_GROUDON         */ .byte 0 
/* SPECIES_RAYQUAZA        */ .byte 0 
/* SPECIES_JIRACHI         */ .byte 0 
/* SPECIES_DEOXYS          */ .byte 0 
/* SPECIES_TURTWIG         */ .byte 0 
/* SPECIES_GROTLE          */ .byte 0 
/* SPECIES_TORTERRA        */ .byte 0 
/* SPECIES_CHIMCHAR        */ .byte 0 
/* SPECIES_MONFERNO        */ .byte 0 
/* SPECIES_INFERNAPE       */ .byte 0 
/* SPECIES_PIPLUP          */ .byte 0 
/* SPECIES_PRINPLUP        */ .byte 0 
/* SPECIES_EMPOLEON        */ .byte 0 
/* SPECIES_STARLY          */ .byte 0 
/* SPECIES_STARAVIA        */ .byte 0 
/* SPECIES_STARAPTOR       */ .byte 0 
/* SPECIES_BIDOOF          */ .byte 0 
/* SPECIES_BIBAREL         */ .byte 0 
/* SPECIES_KRICKETOT       */ .byte 0 
/* SPECIES_KRICKETUNE      */ .byte 0 
/* SPECIES_SHINX           */ .byte 0 
/* SPECIES_LUXIO           */ .byte 0 
/* SPECIES_LUXRAY          */ .byte 0 
/* SPECIES_BUDEW           */ .byte 0 
/* SPECIES_ROSERADE        */ .byte 0 
/* SPECIES_CRANIDOS        */ .byte 0 
/* SPECIES_RAMPARDOS       */ .byte 0 
/* SPECIES_SHIELDON        */ .byte 0 
/* SPECIES_BASTIODON       */ .byte 0 
/* SPECIES_BURMY           */ .byte 0 
/* SPECIES_WORMADAM        */ .byte 0 
/* SPECIES_MOTHIM          */ .byte 0 
/* SPECIES_COMBEE          */ .byte 1 
/* SPECIES_VESPIQUEN       */ .byte 0 
/* SPECIES_PACHIRISU       */ .byte 0 
/* SPECIES_BUIZEL          */ .byte 0 
/* SPECIES_FLOATZEL        */ .byte 0 
/* SPECIES_CHERUBI         */ .byte 0 
/* SPECIES_CHERRIM         */ .byte 0 
/* SPECIES_SHELLOS         */ .byte 0 
/* SPECIES_GASTRODON       */ .byte 0 
/* SPECIES_AMBIPOM         */ .byte 0 
/* SPECIES_DRIFLOON        */ .byte 0 
/* SPECIES_DRIFBLIM        */ .byte 0 
/* SPECIES_BUNEARY         */ .byte 0 
/* SPECIES_LOPUNNY         */ .byte 0 
/* SPECIES_MISMAGIUS       */ .byte 0 
/* SPECIES_HONCHKROW       */ .byte 0 
/* SPECIES_GLAMEOW         */ .byte 0 
/* SPECIES_PURUGLY         */ .byte 0 
/* SPECIES_CHINGLING       */ .byte 0 
/* SPECIES_STUNKY          */ .byte 0 
/* SPECIES_SKUNTANK        */ .byte 0 
/* SPECIES_BRONZOR         */ .byte 0 
/* SPECIES_BRONZONG        */ .byte 0 
/* SPECIES_BONSLY          */ .byte 0 
/* SPECIES_MIMEJR          */ .byte 0 
/* SPECIES_HAPPINY         */ .byte 0 
/* SPECIES_CHATOT          */ .byte 0 
/* SPECIES_SPIRITOMB       */ .byte 0 
/* SPECIES_GIBLE           */ .byte 1 
/* SPECIES_GABITE          */ .byte 1 
/* SPECIES_GARCHOMP        */ .byte 1 
/* SPECIES_MUNCHLAX        */ .byte 0 
/* SPECIES_RIOLU           */ .byte 0 
/* SPECIES_LUCARIO         */ .byte 0 
/* SPECIES_HIPPOPOTAS      */ .byte 1 
/* SPECIES_HIPPOWDON       */ .byte 1 
/* SPECIES_SKORUPI         */ .byte 0 
/* SPECIES_DRAPION         */ .byte 0 
/* SPECIES_CROAGUNK        */ .byte 0 
/* SPECIES_TOXICROAK       */ .byte 0 
/* SPECIES_CARNIVINE       */ .byte 0 
/* SPECIES_FINNEON         */ .byte 0 
/* SPECIES_LUMINEON        */ .byte 0 
/* SPECIES_MANTYKE         */ .byte 0 
/* SPECIES_SNOVER          */ .byte 0 
/* SPECIES_ABOMASNOW       */ .byte 0 
/* SPECIES_WEAVILE         */ .byte 0 
/* SPECIES_MAGNEZONE       */ .byte 0 
/* SPECIES_LICKILICKY      */ .byte 0 
/* SPECIES_RHYPERIOR       */ .byte 0 
/* SPECIES_TANGROWTH       */ .byte 0 
/* SPECIES_ELECTIVIRE      */ .byte 0 
/* SPECIES_MAGMORTAR       */ .byte 0 
/* SPECIES_TOGEKISS        */ .byte 0 
/* SPECIES_YANMEGA         */ .byte 0 
/* SPECIES_LEAFEON         */ .byte 0 
/* SPECIES_GLACEON         */ .byte 0 
/* SPECIES_GLISCOR         */ .byte 0 
/* SPECIES_MAMOSWINE       */ .byte 0 
/* SPECIES_PORYGON_Z       */ .byte 0 
/* SPECIES_GALLADE         */ .byte 0 
/* SPECIES_PROBOPASS       */ .byte 0 
/* SPECIES_DUSKNOIR        */ .byte 0 
/* SPECIES_FROSLASS        */ .byte 0 
/* SPECIES_ROTOM           */ .byte 0 
/* SPECIES_UXIE            */ .byte 0 
/* SPECIES_MESPRIT         */ .byte 0 
/* SPECIES_AZELF           */ .byte 0 
/* SPECIES_DIALGA          */ .byte 0 
/* SPECIES_PALKIA          */ .byte 0 
/* SPECIES_HEATRAN         */ .byte 0 
/* SPECIES_REGIGIGAS       */ .byte 0 
/* SPECIES_GIRATINA        */ .byte 0 
/* SPECIES_CRESSELIA       */ .byte 0 
/* SPECIES_PHIONE          */ .byte 0 
/* SPECIES_MANAPHY         */ .byte 0 
/* SPECIES_DARKRAI         */ .byte 0 
/* SPECIES_SHAYMIN         */ .byte 0
/* SPECIES_ARCEUS          */ .byte 0
/* SPECIES_EGG             */ .byte 0
/* SPECIES_BAD_EGG         */ .byte 0
/* SPECIES_DEOXYS_ATTACK   */ .byte 0
/* SPECIES_DEOXYS_DEFENSE  */ .byte 0
/* SPECIES_DEOXYS_SPEED    */ .byte 0
/* SPECIES_WORMADAM_SANDY  */ .byte 0
/* SPECIES_WORMADAM_TRASHY */ .byte 0
/* SPECIES_GIRATINA_ORIGIN */ .byte 0
/* SPECIES_SHAYMIN_SKY     */ .byte 0
/* SPECIES_ROTOM_HEAT      */ .byte 0
/* SPECIES_ROTOM_WASH      */ .byte 0
/* SPECIES_ROTOM_FROST     */ .byte 0
/* SPECIES_ROTOM_FAN       */ .byte 0
/* SPECIES_ROTOM_MOW       */ .byte 0
/* SPECIES_508             */ .byte 0
/* SPECIES_509             */ .byte 0
/* SPECIES_510             */ .byte 0
/* SPECIES_511             */ .byte 0
/* SPECIES_512             */ .byte 0
/* SPECIES_513             */ .byte 0
/* SPECIES_514             */ .byte 0
/* SPECIES_515             */ .byte 0
/* SPECIES_516             */ .byte 0
/* SPECIES_517             */ .byte 0
/* SPECIES_518             */ .byte 0
/* SPECIES_519             */ .byte 0
/* SPECIES_520             */ .byte 0
/* SPECIES_521             */ .byte 0
/* SPECIES_522             */ .byte 0
/* SPECIES_523             */ .byte 0
/* SPECIES_524             */ .byte 0
/* SPECIES_525             */ .byte 0
/* SPECIES_526             */ .byte 0
/* SPECIES_527             */ .byte 0
/* SPECIES_528             */ .byte 0
/* SPECIES_529             */ .byte 0
/* SPECIES_530             */ .byte 0
/* SPECIES_531             */ .byte 0
/* SPECIES_532             */ .byte 0
/* SPECIES_533             */ .byte 0
/* SPECIES_534             */ .byte 0
/* SPECIES_535             */ .byte 0
/* SPECIES_536             */ .byte 0
/* SPECIES_537             */ .byte 0
/* SPECIES_538             */ .byte 0
/* SPECIES_539             */ .byte 0
/* SPECIES_540             */ .byte 0
/* SPECIES_541             */ .byte 0
/* SPECIES_542             */ .byte 0
/* SPECIES_543             */ .byte 0
/* SPECIES_VICTINI         */ .byte 0
/* SPECIES_SNIVY           */ .byte 0
/* SPECIES_SERVINE         */ .byte 0
/* SPECIES_SERPERIOR       */ .byte 0
/* SPECIES_TEPIG           */ .byte 0
/* SPECIES_PIGNITE         */ .byte 0
/* SPECIES_EMBOAR          */ .byte 0
/* SPECIES_OSHAWOTT        */ .byte 0
/* SPECIES_DEWOTT          */ .byte 0
/* SPECIES_SAMUROTT        */ .byte 0
/* SPECIES_PATRAT          */ .byte 0
/* SPECIES_WATCHOG         */ .byte 0
/* SPECIES_LILLIPUP        */ .byte 0
/* SPECIES_HERDIER         */ .byte 0
/* SPECIES_STOUTLAND       */ .byte 0
/* SPECIES_PURRLOIN        */ .byte 0
/* SPECIES_LIEPARD         */ .byte 0
/* SPECIES_PANSAGE         */ .byte 0
/* SPECIES_SIMISAGE        */ .byte 0
/* SPECIES_PANSEAR         */ .byte 0
/* SPECIES_SIMISEAR        */ .byte 0
/* SPECIES_PANPOUR         */ .byte 0
/* SPECIES_SIMIPOUR        */ .byte 0
/* SPECIES_MUNNA           */ .byte 0
/* SPECIES_MUSHARNA        */ .byte 0
/* SPECIES_PIDOVE          */ .byte 0
/* SPECIES_TRANQUILL       */ .byte 0
/* SPECIES_UNFEZANT        */ .byte 1
/* SPECIES_BLITZLE         */ .byte 0
/* SPECIES_ZEBSTRIKA       */ .byte 0
/* SPECIES_ROGGENROLA      */ .byte 0
/* SPECIES_BOLDORE         */ .byte 0
/* SPECIES_GIGALITH        */ .byte 0
/* SPECIES_WOOBAT          */ .byte 0
/* SPECIES_SWOOBAT         */ .byte 0
/* SPECIES_DRILBUR         */ .byte 0
/* SPECIES_EXCADRILL       */ .byte 0
/* SPECIES_AUDINO          */ .byte 0
/* SPECIES_TIMBURR         */ .byte 0
/* SPECIES_GURDURR         */ .byte 0
/* SPECIES_CONKELDURR      */ .byte 0
/* SPECIES_TYMPOLE         */ .byte 0
/* SPECIES_PALPITOAD       */ .byte 0
/* SPECIES_SEISMITOAD      */ .byte 0
/* SPECIES_THROH           */ .byte 0
/* SPECIES_SAWK            */ .byte 0
/* SPECIES_SEWADDLE        */ .byte 0
/* SPECIES_SWADLOON        */ .byte 0
/* SPECIES_LEAVANNY        */ .byte 0
/* SPECIES_VENIPEDE        */ .byte 0
/* SPECIES_WHIRLIPEDE      */ .byte 0
/* SPECIES_SCOLIPEDE       */ .byte 0
/* SPECIES_COTTONEE        */ .byte 0
/* SPECIES_WHIMSICOTT      */ .byte 0
/* SPECIES_PETILIL         */ .byte 0
/* SPECIES_LILLIGANT       */ .byte 0
/* SPECIES_BASCULIN        */ .byte 0
/* SPECIES_SANDILE         */ .byte 0
/* SPECIES_KROKOROK        */ .byte 0
/* SPECIES_KROOKODILE      */ .byte 0
/* SPECIES_DARUMAKA        */ .byte 0
/* SPECIES_DARMANITAN      */ .byte 0
/* SPECIES_MARACTUS        */ .byte 0
/* SPECIES_DWEBBLE         */ .byte 0
/* SPECIES_CRUSTLE         */ .byte 0
/* SPECIES_SCRAGGY         */ .byte 0
/* SPECIES_SCRAFTY         */ .byte 0
/* SPECIES_SIGILYPH        */ .byte 0
/* SPECIES_YAMASK          */ .byte 0
/* SPECIES_COFAGRIGUS      */ .byte 0
/* SPECIES_TIRTOUGA        */ .byte 0
/* SPECIES_CARRACOSTA      */ .byte 0
/* SPECIES_ARCHEN          */ .byte 0
/* SPECIES_ARCHEOPS        */ .byte 0
/* SPECIES_TRUBBISH        */ .byte 0
/* SPECIES_GARBODOR        */ .byte 0
/* SPECIES_ZORUA           */ .byte 0
/* SPECIES_ZOROARK         */ .byte 0
/* SPECIES_MINCCINO        */ .byte 0
/* SPECIES_CINCCINO        */ .byte 0
/* SPECIES_GOTHITA         */ .byte 0
/* SPECIES_GOTHORITA       */ .byte 0
/* SPECIES_GOTHITELLE      */ .byte 0
/* SPECIES_SOLOSIS         */ .byte 0
/* SPECIES_DUOSION         */ .byte 0
/* SPECIES_REUNICLUS       */ .byte 0
/* SPECIES_DUCKLETT        */ .byte 0
/* SPECIES_SWANNA          */ .byte 0
/* SPECIES_VANILLITE       */ .byte 0
/* SPECIES_VANILLISH       */ .byte 0
/* SPECIES_VANILLUXE       */ .byte 0
/* SPECIES_DEERLING        */ .byte 0
/* SPECIES_SAWSBUCK        */ .byte 0
/* SPECIES_EMOLGA          */ .byte 0
/* SPECIES_KARRABLAST      */ .byte 0
/* SPECIES_ESCAVALIER      */ .byte 0
/* SPECIES_FOONGUS         */ .byte 0
/* SPECIES_AMOONGUSS       */ .byte 0
/* SPECIES_FRILLISH        */ .byte 1
/* SPECIES_JELLICENT       */ .byte 1
/* SPECIES_ALOMOMOLA       */ .byte 0
/* SPECIES_JOLTIK          */ .byte 0
/* SPECIES_GALVANTULA      */ .byte 0
/* SPECIES_FERROSEED       */ .byte 0
/* SPECIES_FERROTHORN      */ .byte 0
/* SPECIES_KLINK           */ .byte 0
/* SPECIES_KLANG           */ .byte 0
/* SPECIES_KLINKLANG       */ .byte 0
/* SPECIES_TYNAMO          */ .byte 0
/* SPECIES_EELEKTRIK       */ .byte 0
/* SPECIES_EELEKTROSS      */ .byte 0
/* SPECIES_ELGYEM          */ .byte 0
/* SPECIES_BEHEEYEM        */ .byte 0
/* SPECIES_LITWICK         */ .byte 0
/* SPECIES_LAMPENT         */ .byte 0
/* SPECIES_CHANDELURE      */ .byte 0
/* SPECIES_AXEW            */ .byte 0
/* SPECIES_FRAXURE         */ .byte 0
/* SPECIES_HAXORUS         */ .byte 0
/* SPECIES_CUBCHOO         */ .byte 0
/* SPECIES_BEARTIC         */ .byte 0
/* SPECIES_CRYOGONAL       */ .byte 0
/* SPECIES_SHELMET         */ .byte 0
/* SPECIES_ACCELGOR        */ .byte 0
/* SPECIES_STUNFISK        */ .byte 0
/* SPECIES_MIENFOO         */ .byte 0
/* SPECIES_MIENSHAO        */ .byte 0
/* SPECIES_DRUDDIGON       */ .byte 0
/* SPECIES_GOLETT          */ .byte 0
/* SPECIES_GOLURK          */ .byte 0
/* SPECIES_PAWNIARD        */ .byte 0
/* SPECIES_BISHARP         */ .byte 0
/* SPECIES_BOUFFALANT      */ .byte 0
/* SPECIES_RUFFLET         */ .byte 0
/* SPECIES_BRAVIARY        */ .byte 0
/* SPECIES_VULLABY         */ .byte 0
/* SPECIES_MANDIBUZZ       */ .byte 0
/* SPECIES_HEATMOR         */ .byte 0
/* SPECIES_DURANT          */ .byte 0
/* SPECIES_DEINO           */ .byte 0
/* SPECIES_ZWEILOUS        */ .byte 0
/* SPECIES_HYDREIGON       */ .byte 0
/* SPECIES_LARVESTA        */ .byte 0
/* SPECIES_VOLCARONA       */ .byte 0
/* SPECIES_COBALION        */ .byte 0
/* SPECIES_TERRAKION       */ .byte 0
/* SPECIES_VIRIZION        */ .byte 0
/* SPECIES_TORNADUS        */ .byte 0
/* SPECIES_THUNDURUS       */ .byte 0
/* SPECIES_RESHIRAM        */ .byte 0
/* SPECIES_ZEKROM          */ .byte 0
/* SPECIES_LANDORUS        */ .byte 0
/* SPECIES_KYUREM          */ .byte 0
/* SPECIES_KELDEO          */ .byte 0
/* SPECIES_MELOETTA        */ .byte 0
/* SPECIES_GENESECT        */ .byte 0
/*SPECIES_650        */ .byte 0
/*SPECIES_651        */ .byte 0
/*SPECIES_652        */ .byte 0
/*SPECIES_653        */ .byte 0
/*SPECIES_654        */ .byte 0
/*SPECIES_655        */ .byte 0
/*SPECIES_656        */ .byte 0
/*SPECIES_657        */ .byte 0
/*SPECIES_658        */ .byte 0
/*SPECIES_659        */ .byte 0
/*SPECIES_660        */ .byte 0
/*SPECIES_661        */ .byte 0
/*SPECIES_662        */ .byte 0
/*SPECIES_663        */ .byte 0
/*SPECIES_664        */ .byte 0
/*SPECIES_665        */ .byte 0
/*SPECIES_666        */ .byte 0
/*SPECIES_667        */ .byte 0
/*SPECIES_668        */ .byte 0
/*SPECIES_669        */ .byte 0
/*SPECIES_670        */ .byte 0
/*SPECIES_671        */ .byte 0
/*SPECIES_672        */ .byte 0
/*SPECIES_673        */ .byte 0
/*SPECIES_674        */ .byte 0
/*SPECIES_675        */ .byte 0
/*SPECIES_676        */ .byte 0
/*SPECIES_677        */ .byte 0
/*SPECIES_678        */ .byte 0
/*SPECIES_679        */ .byte 0
/*SPECIES_680        */ .byte 0
/*SPECIES_681        */ .byte 0
/*SPECIES_682        */ .byte 0
/*SPECIES_683        */ .byte 0
/*SPECIES_684        */ .byte 0
/*SPECIES_685        */ .byte 0
/*SPECIES_686        */ .byte 0
/*SPECIES_687        */ .byte 0
/*SPECIES_688        */ .byte 0
/*SPECIES_689        */ .byte 0
/*SPECIES_690        */ .byte 0
/*SPECIES_691        */ .byte 0
/*SPECIES_692        */ .byte 0
/*SPECIES_693        */ .byte 0
/*SPECIES_694        */ .byte 0
/*SPECIES_695        */ .byte 0
/*SPECIES_696        */ .byte 0
/*SPECIES_697        */ .byte 0
/*SPECIES_698        */ .byte 0
/*SPECIES_699        */ .byte 0
/*SPECIES_700        */ .byte 0
/*SPECIES_701        */ .byte 0
/*SPECIES_702        */ .byte 0
/*SPECIES_703        */ .byte 0
/*SPECIES_704        */ .byte 0
/*SPECIES_705        */ .byte 0
/*SPECIES_706        */ .byte 0
/*SPECIES_707        */ .byte 0
/*SPECIES_708        */ .byte 0
/*SPECIES_709        */ .byte 0
/*SPECIES_710        */ .byte 0
/*SPECIES_711        */ .byte 0
/*SPECIES_712        */ .byte 0
/*SPECIES_713        */ .byte 0
/*SPECIES_714        */ .byte 0
/*SPECIES_715        */ .byte 0
/*SPECIES_716        */ .byte 0
/*SPECIES_717        */ .byte 0
/*SPECIES_718        */ .byte 0
/*SPECIES_719        */ .byte 0
/*SPECIES_720        */ .byte 0
/*SPECIES_721        */ .byte 0
/*SPECIES_722        */ .byte 0
/*SPECIES_723        */ .byte 0
/*SPECIES_724        */ .byte 0
/*SPECIES_725        */ .byte 0
/*SPECIES_726        */ .byte 0
/*SPECIES_727        */ .byte 0
/*SPECIES_728        */ .byte 0
/*SPECIES_729        */ .byte 0
/*SPECIES_730        */ .byte 0
/*SPECIES_731        */ .byte 0
/*SPECIES_732        */ .byte 0
/*SPECIES_733        */ .byte 0
/*SPECIES_734        */ .byte 0
/*SPECIES_735        */ .byte 0
/*SPECIES_736        */ .byte 0
/*SPECIES_737        */ .byte 0
/*SPECIES_738        */ .byte 0
/*SPECIES_739        */ .byte 0
/*SPECIES_740        */ .byte 0
/*SPECIES_741        */ .byte 0
/*SPECIES_742        */ .byte 0
/*SPECIES_743        */ .byte 0
/*SPECIES_744        */ .byte 0
/*SPECIES_745        */ .byte 0
/*SPECIES_746        */ .byte 0
/*SPECIES_747        */ .byte 0
/*SPECIES_748        */ .byte 0
/*SPECIES_749        */ .byte 0
/*SPECIES_750        */ .byte 0
/*SPECIES_751        */ .byte 0
/*SPECIES_752        */ .byte 0
/*SPECIES_753        */ .byte 0
/*SPECIES_754        */ .byte 0
/*SPECIES_755        */ .byte 0
/*SPECIES_756        */ .byte 0
/*SPECIES_757        */ .byte 0
/*SPECIES_758        */ .byte 0
/*SPECIES_759        */ .byte 0
/*SPECIES_760        */ .byte 0
/*SPECIES_761        */ .byte 0
/*SPECIES_762        */ .byte 0
/*SPECIES_763        */ .byte 0
/*SPECIES_764        */ .byte 0
/*SPECIES_765        */ .byte 0
/*SPECIES_766        */ .byte 0
/*SPECIES_767        */ .byte 0
/*SPECIES_768        */ .byte 0
/*SPECIES_769        */ .byte 0
/*SPECIES_770        */ .byte 0
/*SPECIES_771        */ .byte 0
/*SPECIES_772        */ .byte 0
/*SPECIES_773        */ .byte 0
/*SPECIES_774        */ .byte 0
/*SPECIES_775        */ .byte 0
/*SPECIES_776        */ .byte 0
/*SPECIES_777        */ .byte 0
/*SPECIES_778        */ .byte 0
/*SPECIES_779        */ .byte 0
/*SPECIES_780        */ .byte 0
/*SPECIES_781        */ .byte 0
/*SPECIES_782        */ .byte 0
/*SPECIES_783        */ .byte 0
/*SPECIES_784        */ .byte 0
/*SPECIES_785        */ .byte 0
/*SPECIES_786        */ .byte 0
/*SPECIES_787        */ .byte 0
/*SPECIES_788        */ .byte 0
/*SPECIES_789        */ .byte 0
/*SPECIES_790        */ .byte 0
/*SPECIES_791        */ .byte 0
/*SPECIES_792        */ .byte 0
/*SPECIES_793        */ .byte 0
/*SPECIES_794        */ .byte 0
/*SPECIES_795        */ .byte 0
/*SPECIES_796        */ .byte 0
/*SPECIES_797        */ .byte 0
/*SPECIES_798        */ .byte 0
/*SPECIES_799        */ .byte 0
/*SPECIES_800        */ .byte 0
/*SPECIES_801        */ .byte 0
/*SPECIES_802        */ .byte 0
/*SPECIES_803        */ .byte 0
/*SPECIES_804        */ .byte 0
/*SPECIES_805        */ .byte 0
/*SPECIES_806        */ .byte 0
/*SPECIES_807        */ .byte 0
/*SPECIES_808        */ .byte 0
/*SPECIES_809        */ .byte 0
/*SPECIES_810        */ .byte 0
/*SPECIES_811        */ .byte 0
/*SPECIES_812        */ .byte 0
/*SPECIES_813        */ .byte 0
/*SPECIES_814        */ .byte 0
/*SPECIES_815        */ .byte 0
/*SPECIES_816        */ .byte 0
/*SPECIES_817        */ .byte 0
/*SPECIES_818        */ .byte 0
/*SPECIES_819        */ .byte 0
/*SPECIES_820        */ .byte 0
/*SPECIES_821        */ .byte 0
/*SPECIES_822        */ .byte 0
/*SPECIES_823        */ .byte 0
/*SPECIES_824        */ .byte 0
/*SPECIES_825        */ .byte 0
/*SPECIES_826        */ .byte 0
/*SPECIES_827        */ .byte 0
/*SPECIES_828        */ .byte 0
/*SPECIES_829        */ .byte 0
/*SPECIES_830        */ .byte 0
/*SPECIES_831        */ .byte 0
/*SPECIES_832        */ .byte 0
/*SPECIES_833        */ .byte 0
/*SPECIES_834        */ .byte 0
/*SPECIES_835        */ .byte 0
/*SPECIES_836        */ .byte 0
/*SPECIES_837        */ .byte 0
/*SPECIES_838        */ .byte 0
/*SPECIES_839        */ .byte 0
/*SPECIES_840        */ .byte 0
/*SPECIES_841        */ .byte 0
/*SPECIES_842        */ .byte 0
/*SPECIES_843        */ .byte 0
/*SPECIES_844        */ .byte 0
/*SPECIES_845        */ .byte 0
/*SPECIES_846        */ .byte 0
/*SPECIES_847        */ .byte 0
/*SPECIES_848        */ .byte 0
/*SPECIES_849        */ .byte 0
/*SPECIES_850        */ .byte 0
/*SPECIES_851        */ .byte 0
/*SPECIES_852        */ .byte 0
/*SPECIES_853        */ .byte 0
/*SPECIES_854        */ .byte 0
/*SPECIES_855        */ .byte 0
/*SPECIES_856        */ .byte 0
/*SPECIES_857        */ .byte 0
/*SPECIES_858        */ .byte 0
/*SPECIES_859        */ .byte 0
/*SPECIES_860        */ .byte 0
/*SPECIES_861        */ .byte 0
/*SPECIES_862        */ .byte 0
/*SPECIES_863        */ .byte 0
/*SPECIES_864        */ .byte 0
/*SPECIES_865        */ .byte 0
/*SPECIES_866        */ .byte 0
/*SPECIES_867        */ .byte 0
/*SPECIES_868        */ .byte 0
/*SPECIES_869        */ .byte 0
/*SPECIES_870        */ .byte 0
/*SPECIES_871        */ .byte 0
/*SPECIES_872        */ .byte 0
/*SPECIES_873        */ .byte 0
/*SPECIES_874        */ .byte 0
/*SPECIES_875        */ .byte 0
/*SPECIES_876        */ .byte 0
/*SPECIES_877        */ .byte 0
/*SPECIES_878        */ .byte 0
/*SPECIES_879        */ .byte 0
/*SPECIES_880        */ .byte 0
/*SPECIES_881        */ .byte 0
/*SPECIES_882        */ .byte 0
/*SPECIES_883        */ .byte 0
/*SPECIES_884        */ .byte 0
/*SPECIES_885        */ .byte 0
/*SPECIES_886        */ .byte 0
/*SPECIES_887        */ .byte 0
/*SPECIES_888        */ .byte 0
/*SPECIES_889        */ .byte 0
/*SPECIES_890        */ .byte 0
/*SPECIES_891        */ .byte 0
/*SPECIES_892        */ .byte 0
/*SPECIES_893        */ .byte 0
/*SPECIES_894        */ .byte 0
/*SPECIES_895        */ .byte 0
/*SPECIES_896        */ .byte 0
/*SPECIES_897        */ .byte 0
/*SPECIES_898        */ .byte 0

.endarea

.close
