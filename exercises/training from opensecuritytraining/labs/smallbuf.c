#include <stdio.h>

int main(int argc, char **argv)
{
	char buf[16];
	printf("argv[1] = 0x%x, argv[2] = 0x%x\n", argv[1], argv[2]);
	strcpy(buf,argv[1]);
}


