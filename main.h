#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

#define BUFSIZE 1024
#define MAX_ARGS 32

void tokenize_input(char *buffer, char *args[]);
int execute_command(char *args[], int num_args);

#endif
