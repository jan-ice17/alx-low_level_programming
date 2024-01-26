#include "shell.h"
#include <unistd.h>

extern char **environ;  /*Declare extern for the environ variable*/

void execute_command(char *command)
{
    pid_t pid;
    int status;

    command[strlen(command) - 1] = '\0'; /* Remove the trailing newline character */

    pid = fork();
    if (pid == -1)
    {
        perror(":( Sorry Fork Fail");
        exit(EXIT_FAILURE);
    }

    if (pid == 0)
    {
        /* Child process */
        char *cmd_args[] = {command, NULL};
        char **cmd_args_ptr = cmd_args;

        if (execve(command, cmd_args_ptr, environ) == -1)
        {
            perror(":( Sorry ");
            exit(EXIT_FAILURE);
        }
    }
    else
    {
        /* Parent process */
        if (waitpid(pid, &status, 0) == -1)
        {
            perror(":( Sorry Pid Fail ");
            exit(EXIT_FAILURE);
        }
    }
}

