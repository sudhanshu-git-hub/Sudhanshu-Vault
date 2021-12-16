	.file	"romanToInt.c"
	.text
	.def	scanf;	.scl	3;	.type	32;	.endef
	.seh_proc	scanf
scanf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$0, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfscanf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.def	printf;	.scl	3;	.type	32;	.endef
	.seh_proc	printf
printf:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	48(%rsp), %rbp
	.seh_setframe	%rbp, 48
	.seh_endprologue
	movq	%rcx, 32(%rbp)
	movq	%rdx, 40(%rbp)
	movq	%r8, 48(%rbp)
	movq	%r9, 56(%rbp)
	leaq	40(%rbp), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rbx
	movl	$1, %ecx
	movq	__imp___acrt_iob_func(%rip), %rax
	call	*%rax
	movq	%rbx, %r8
	movq	32(%rbp), %rdx
	movq	%rax, %rcx
	call	__mingw_vfprintf
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.globl	check_pair
	.def	check_pair;	.scl	2;	.type	32;	.endef
	.seh_proc	check_pair
check_pair:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movl	(%rax), %edx
	movq	24(%rbp), %rax
	movl	(%rax), %eax
	cmpl	%eax, %edx
	jge	.L7
	movq	16(%rbp), %rax
	movl	(%rax), %eax
	negl	%eax
	movl	%eax, %edx
	movq	16(%rbp), %rax
	movl	%edx, (%rax)
.L7:
	nop
	popq	%rbp
	ret
	.seh_endproc
	.globl	RomanToInteger
	.def	RomanToInteger;	.scl	2;	.type	32;	.endef
	.seh_proc	RomanToInteger
RomanToInteger:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movl	%ecx, %eax
	movb	%al, 16(%rbp)
	movsbl	16(%rbp), %eax
	subl	$67, %eax
	cmpl	$21, %eax
	ja	.L9
	movl	%eax, %eax
	leaq	0(,%rax,4), %rdx
	leaq	.L11(%rip), %rax
	movl	(%rdx,%rax), %eax
	cltq
	leaq	.L11(%rip), %rdx
	addq	%rdx, %rax
	jmp	*%rax
	.section .rdata,"dr"
	.align 4
.L11:
	.long	.L17-.L11
	.long	.L16-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L15-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L14-.L11
	.long	.L13-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L9-.L11
	.long	.L12-.L11
	.long	.L9-.L11
	.long	.L10-.L11
	.text
.L15:
	movl	$1, %eax
	jmp	.L18
.L12:
	movl	$5, %eax
	jmp	.L18
.L10:
	movl	$10, %eax
	jmp	.L18
.L14:
	movl	$50, %eax
	jmp	.L18
.L17:
	movl	$100, %eax
	jmp	.L18
.L16:
	movl	$500, %eax
	jmp	.L18
.L13:
	movl	$1000, %eax
	jmp	.L18
.L9:
	movl	$0, %eax
.L18:
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "\12\0"
.LC1:
	.ascii "%d,\0"
.LC2:
	.ascii "\12Number:= %d\0"
	.text
	.globl	manipulate_string
	.def	manipulate_string;	.scl	2;	.type	32;	.endef
	.seh_proc	manipulate_string
manipulate_string:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$144, %rsp
	.seh_stackalloc	144
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L20
.L21:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	movsbl	%al, %eax
	movl	%eax, %ecx
	call	RomanToInteger
	movl	%eax, -20(%rbp)
	movl	-8(%rbp), %eax
	cltq
	movl	-20(%rbp), %edx
	movl	%edx, -112(%rbp,%rax,4)
	addl	$1, -8(%rbp)
.L20:
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	16(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	testb	%al, %al
	jne	.L21
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, -12(%rbp)
	jmp	.L22
.L23:
	movl	-12(%rbp), %eax
	addl	$1, %eax
	leaq	-112(%rbp), %rdx
	cltq
	salq	$2, %rax
	addq	%rax, %rdx
	leaq	-112(%rbp), %rcx
	movl	-12(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	%rcx, %rax
	movq	%rax, %rcx
	call	check_pair
	addl	$1, -12(%rbp)
.L22:
	movl	-8(%rbp), %eax
	subl	$1, %eax
	cmpl	%eax, -12(%rbp)
	jl	.L23
	movl	$0, -16(%rbp)
	jmp	.L24
.L25:
	movl	-16(%rbp), %eax
	cltq
	movl	-112(%rbp,%rax,4), %eax
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
	movl	-16(%rbp), %eax
	cltq
	movl	-112(%rbp,%rax,4), %eax
	addl	%eax, -4(%rbp)
	addl	$1, -16(%rbp)
.L24:
	movl	-16(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jl	.L25
	movl	-4(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC2(%rip), %rcx
	call	printf
	nop
	addq	$144, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC3:
	.ascii "%s\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	movl	$4, -4(%rbp)
	movl	-4(%rbp), %eax
	cltq
	movq	%rax, %rcx
	call	malloc
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdx
	leaq	.LC3(%rip), %rcx
	call	scanf
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	manipulate_string
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (Rev5, Built by MSYS2 project) 10.3.0"
	.def	__mingw_vfscanf;	.scl	2;	.type	32;	.endef
	.def	__mingw_vfprintf;	.scl	2;	.type	32;	.endef
	.def	malloc;	.scl	2;	.type	32;	.endef
