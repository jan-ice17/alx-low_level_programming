#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


void print_f(const char *my_string);
void print_prompt(void);
char *read_line(void);
void execute_command(char *command);

#endif /* SHELL_H */

