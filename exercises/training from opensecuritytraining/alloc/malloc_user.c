#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *buf;
	buf = (char *)malloc(1024);
	printf("malloc gave buf an address of: 0x%x\n", buf);
	free(buf);
}


