#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFSIZE 1024

int main(void)
{
	char cmd[BUFSIZE];
	char *args[2];
	pid_t pid;

	while (1)
	{
		printf("#cisfun$");

		if (!fgets(cmd, BUFSIZE, stdin))
			break;

		cmd[strcspn(cmd, "\n")] = '\0';

		args[0] = cmd;
		args[1] = NULL;

		pid = fork();

		if (pid == -1)
		{
			perror("fork");
			exit(EXIT_FAILURE);
		}

		if (pid == 0)
		{
			if (execve(cmd, args, NULL) == -1)
			{
				perror("execve");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			waitpid(pid, NULL, 0);
		}
	}

	return (0);
}
