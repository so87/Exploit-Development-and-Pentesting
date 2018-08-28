#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char buf[128];
	int user_len = atoi(argv[2]);
	int buf_size = sizeof(buf);
	
	if (user_len > buf_size)
	{
		printf("Attempted Overflow Detected\n");
		return;
	}
	
	memcpy(buf,argv[1],user_len);
}

