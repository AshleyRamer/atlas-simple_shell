#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * main - entry for the simple shell program
 *
 * Return: Always 0.
 */

#define BUFSIZE 1024

int main(void)
{
	char cmd[BUFSIZE];
	char *args[2];

	while (1)
	{
		printf("#cisfun$");

		if (!fgets(cmd, BUFSIZE, stdin))
		{
			printf("\n");
			break;
		}

		cmd[strcspn(cmd, "\n")] = '\0';

		args[0] = cmd;
		args[1] = NULL;

		if (execve(cmd, args, NULL) == -1)
		{
			printf("%s: command not found\n", cmd);
		}
	}

	return (0);
}
