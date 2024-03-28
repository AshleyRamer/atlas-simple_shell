#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BUFSIZE 1024

int main(void)
{
	char *cmd = "/bin/ls";
	char *args[] = {"bin/ls", NULL};

	while (1)
	{
		printf("cisfun$");

		if (execve(cmd, args, NULL) == -1)
		{
			fprintf(stderr, "%s: command not found\n", cmd);
			break;
		}
	}
	return 0;
}
