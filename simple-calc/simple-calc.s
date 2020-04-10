	.file	"simple-calc.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii " Enter a Calculation \12\0"
LC1:
	.ascii "%d%c%d\0"
LC2:
	.ascii " \12 %d%c%d =\0"
LC3:
	.ascii " %d \0"
LC4:
	.ascii " \12 %d \12 \12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	leal	24(%esp), %eax
	movl	%eax, 12(%esp)
	leal	23(%esp), %eax
	movl	%eax, 8(%esp)
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	movl	24(%esp), %ecx
	movzbl	23(%esp), %eax
	movsbl	%al, %edx
	movl	28(%esp), %eax
	movl	%ecx, 12(%esp)
	movl	%edx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movzbl	23(%esp), %eax
	cmpb	$43, %al
	jne	L2
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	jmp	L3
L2:
	movzbl	23(%esp), %eax
	cmpb	$45, %al
	jne	L4
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	jmp	L3
L4:
	movzbl	23(%esp), %eax
	cmpb	$42, %al
	jne	L5
	movl	28(%esp), %edx
	movl	24(%esp), %eax
	imull	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$LC3, (%esp)
	call	_printf
	jmp	L3
L5:
	movzbl	23(%esp), %eax
	cmpb	$47, %al
	jne	L3
	movl	28(%esp), %eax
	movl	24(%esp), %ecx
	cltd
	idivl	%ecx
	movl	%eax, 4(%esp)
	movl	$LC4, (%esp)
	call	_printf
L3:
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC-8.2.0-5) 8.2.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
