#include <stdio.h>

int main(int argc, char **argv)
{
	char *ptr = (char *)malloc(1024);
	free(ptr);
	free(ptr);
}

