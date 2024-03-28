#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFSIZE 1024
#define MAX_ARGS 64

int main(void)
{
	char cmd[BUFSIZE];
	char *args[MAX_ARGS + 1];
	pid_t pid;
	char *token;

	while (1)
	{
		printf("#cisfun$");

		if (!fgets(cmd, BUFSIZE, stdin))
			break;

		cmd[strcspn(cmd, "\n")] = '\0';

		token = strtok(cmd, " ");
        	int arg_count = 0;

        	while (token != NULL && arg_count < MAX_ARGS)
        	{
            		args[arg_count++] = token;
            		token = strtok(NULL, " ");
        	}

        	args[arg_count] = NULL;


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
