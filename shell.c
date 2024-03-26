#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

#define BUFFER_SIZE 1024

int main(void) {
    char buffer[BUFFER_SIZE];

    while (1) {
        printf("#cisfun$ "); // Display prompt
        if (!fgets(buffer, BUFFER_SIZE, stdin)) {
            printf("\n"); // Handle EOF (Ctrl+D)
            break;
        }
        buffer[strcspn(buffer, "\n")] = '\0'; // Remove trailing newline

        if (fork() == 0) { // Child process
            execlp(buffer, buffer, NULL); // Execute command
            perror(buffer); // Print error if execution fails
            exit(EXIT_FAILURE);
        } else { // Parent process
            wait(NULL); // Wait for child process to finish
        }
    }

    return EXIT_SUCCESS;
}
