#include <stdlib.h>

void main()
{
	int (*f)(const char *);
	void (*g)(int);
	f = system;
	g = exit;
	printf("system: %p\n", f);
	printf("exit: %p\n", g);
	printf("diff: 0x%x\n", (unsigned char *)((unsigned char *)f - (unsigned char *)g));
}

