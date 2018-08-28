#include <stdio.h>
#include <string.h>
#include "alloc.h"

int main(int argc, char **argv)
{
	char *buf1 = alloc(128);
	dump_heap();
	dealloc(buf1);
	dump_heap();
	char *buf2 = alloc(128);
	dealloc(buf2);
	dump_heap();
	return 0;
}
