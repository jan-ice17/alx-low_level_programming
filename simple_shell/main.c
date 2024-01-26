#include "shell.h"

int main(void)
{
    char *line;

    while (1)
    {
        print_prompt(); /* Display prompt */
        line = read_line(); /* Read command from user */

        if (line == NULL)
        {
            break; /* End of file (Ctrl+D) condition */
        }

        execute_command(line); /* Execute the command */
        free(line); /* Free allocated memory for the command */
    }

    return (0);
}

