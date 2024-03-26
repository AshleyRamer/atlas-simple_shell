#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 1024

int main(void)
{
	char buffer[BUFFER_SIZE];

	while (1)
	{
		printf("#cisfun$ ");
		if (!fgets(buffer, BUFFER_SIZE, stdin))
			printf("\n");
		break;
	}
	buffer[strcspn(buffer, "\n")] = '\0';

	if (fork() == 0){
		execlp(buffer, buffer, NULL);
		perror(buffer);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}

return (EXIT_SUCCESS);
}
