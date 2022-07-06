// 	.data

// quebra:		.asciiz		"\n"

// 	.text
// main:
// 	li	$a0, 48

// 	jal	bitparidade

// 	move	$t0, $v0

// 	li	$v0, 1			
// 	move	$a0, $t0
// 	syscall

// 	li	$v0, 4			
// 	la	$a0, quebra
// 	syscall

// 	li	$v0, 1			
// 	move	$a0, $v1
// 	syscall
	
// 	li	$v0, 10
// 	syscall
