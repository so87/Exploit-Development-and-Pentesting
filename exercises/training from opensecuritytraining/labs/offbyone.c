#include <string.h>

int main(int argc, char **argv)
{
	char buf[128];
	strncat(buf,argv[1],sizeof(buf));
}

