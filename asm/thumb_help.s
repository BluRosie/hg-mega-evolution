	.text
	.align 1
    
    .force_thumb
    .syntax unified
    .global __aeabi_idiv
    .thumb_func
    .type __aeabi_idiv,function
__aeabi_idiv:
    push {lr}
    blx  0x020f2998
    pop {pc}
	.size __aeabi_idiv, . - __aeabi_idiv

    .force_thumb
	.syntax unified
	.global __gnu_thumb1_case_uqi
	.thumb_func
	.type __gnu_thumb1_case_uqi,function
__gnu_thumb1_case_uqi:
	push	{r1}
	mov	r1, lr
	lsrs	r1, r1, #1
	lsls	r1, r1, #1
	ldrb	r1, [r1, r0]
	lsls	r1, r1, #1
	add	lr, lr, r1
	pop	{r1}
	bx	lr
	.size __gnu_thumb1_case_uqi, . - __gnu_thumb1_case_uqi

    .force_thumb
    .syntax unified
    .global __aeabi_uidivmod
    .thumb_func
    .type __aeabi_uidivmod,function
__aeabi_uidivmod:
    push {lr}
    blx  0x020f2998
    pop {pc}
	.size __aeabi_uidivmod, . - __aeabi_uidivmod


    .force_thumb
    .syntax unified
    .global __gnu_thumb1_case_sqi
    .thumb_func
    .type __gnu_thumb1_case_sqi,function
__gnu_thumb1_case_sqi:
     push    {r1}
     mov r1, lr
     lsrs    r1, r1, #1
     lsls    r1, r1, #1
     ldrsb   r1, [r1, r0]
     lsls    r1, r1, #1
     add lr, r1
     pop {r1}
     bx  lr
    .size __gnu_thumb1_case_sqi, . - __gnu_thumb1_case_sqi
