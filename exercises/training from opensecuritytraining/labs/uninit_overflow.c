//based on example code from Mercy's
// "Exploiting uninitialized variables" paper
// http://felinemenace.org
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int do_auth(void)
{
	char username[1024];
	char password[1024];
	
	printf("Username: ");
	fgets(username,1024,stdin);
	fflush(stdin);
	
	printf("Password: ");
	fgets(password,1024,stdin);
	
	printf("username at: 0x%x\n", &username);
	printf("password at 0x%x\n", &password);
	
	
	if (!strcmp(username, "user") &&
		!strcmp(password, "password") == 0)
	{
		return 0;
	}
	
	return -1;
}

int log_error(int farray, char *msg)
{
	char *err, *mesg;
	char buffer[24];
	
	printf("mesg: 0x%x\n", mesg);
	memset(buffer,0x00,sizeof(buffer));
	sprintf(buffer, "Error: %s", mesg);
	
	printf("%s\n", buffer);
	return 0;
}

int main(void)
{
	switch(do_auth())
	{
		case -1:
			log_error(-1,"Unable to login");
			break;
		default:
			break;
	}
	return 0;
}


