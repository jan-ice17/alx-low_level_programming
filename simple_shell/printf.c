#include "shell.h"

/*creating my custom printf using write function*/

void print_f(const char *my_string)
{
    write (STDOUT_FILENO, my_string, strlen(my_string));
}
