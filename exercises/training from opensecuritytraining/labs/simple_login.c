#include <stdio.h>

char *secret = "joshua";

void go_shell()
{
	char *shell =  "/bin/sh";
	char *cmd[] = { "/bin/sh", 0 };
	printf("Would you like to play a game...\n");
	setreuid(0);
	execve(shell,cmd,0);
}

int authorize()
{
	char password[64];
	printf("Enter Password: ");
	gets(password);
	if (!strcmp(password,secret))
		return 1;
	else
		return 0;
}

int main()
{
	if (authorize())
	{
		printf("login successful\n");
		go_shell();
	} else {
		printf("Incorrect password\n");
	}
	return 0;
}
	
