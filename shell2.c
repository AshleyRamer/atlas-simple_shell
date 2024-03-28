#include "main.h"
#include <sys/wait.h>

#define BUFSIZE 1024

int main(void)
{
	char cmd[BUFSIZE];
	char *args[BUFSIZE / 2];
	int i;
	pid_t pid;
	int status;

	while (1)
		printf("cisfun$ ");
		if (!fgets(cmd, BUFSIZE, stdin))
		{
			printf("\n");
			break;
		}
	cmd[strcspn(cmd, "\n")] = '\0';
	int i = 0;
	char *token = strtok(cmd, " ");
	while (token != NULL && i < BUFSIZE / 2 - 1)
	{
		args[i++] = token;
		token = strtok(NULL, " ");
	}
	args[i] = NULL;
	pid_t pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else
	{
		int status;
		waitpid(pid, &status, 0);
	}
	return (0);
}
