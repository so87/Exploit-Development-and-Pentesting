#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(char *user_input_buffer, unsigned int user_input_len);

int main(int argc, char **argv)
{
	unsigned int n = atoi(argv[1]);
	func(argv[1],n);
}
	
void func(char *user_input_buffer, unsigned int user_input_len)
{
	char *buf = (char *)malloc(user_input_len + 1);
	memcpy(buf,user_input_buffer,user_input_len);
	buf[user_input_len] = 0x00;
	free(buf);
}

