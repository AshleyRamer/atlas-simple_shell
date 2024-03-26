#ifndef MAIN_H
#define MAIN_H
/**
 * function to read input from the command line
 */

char *read_line(void);

/**
 * function to parse the input command
 */

char **parse_line(cha *line);

/**
 * function to execute the parsed command
 */

void execute_command(char **args);

#endif
