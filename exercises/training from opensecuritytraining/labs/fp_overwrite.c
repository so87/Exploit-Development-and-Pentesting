#include <stdio.h>

void func(char *str)
{
	char buf[256];
	int i;
	
	for (i=0;i<=256;i++)
		buf[i] = str[i];
		
}

int main(int argc, char **argv)
{
	func(argv[1]);
}

