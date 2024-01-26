#include "shell.h"

/**
 * read_line - Read a line of input from the user.
 *
 * Return: A pointer to the allocated string containing the command.
 */
char *read_line(void)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    /* Use getline to read a line from stdin */
    read = getline(&line, &len, stdin);

    if (read == -1)
    {
        /* Handle errors or end-of-file condition */
        if (feof(stdin))
        {
            free(line);
            return NULL; /* End of file (Ctrl+D) condition */
        }
        else
        {
            perror("getline");
            exit(EXIT_FAILURE);
        }
    }

    return line;
}

