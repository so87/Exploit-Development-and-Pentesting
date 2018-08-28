#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void main(int argc, char **argv)
{
	unsigned int *ptr1 = *((unsigned int *)(argv[1]));
	unsigned int *ptr2 = *((unsigned int *)(argv[2]));
	printf("ptr1 = 0x%x\n", ptr1);
	printf("ptr2 = 0x%x\n", ptr2);
	printf("argv[3] at = 0x%x\n", &(*argv[3]));
	*ptr1 = ptr2;
	printf("papa legba, hear my call!!!!\n");
	exit(0);
}
