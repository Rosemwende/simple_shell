#include "execute.h"
/**
 * execute - execution of the specified command
 * @command: The command given to execute
 */
void execute(char *command)
{
pid_t child_pid;
int status;

child_pid = fork();

if (child_pid == -1)
{
perror("The error creating child process");
exit(EXIT_FAILURE);
}

if (child_id == 0)
{
if (execve(command, NULL, NULL) == -1)
{
perror("The error executing command");
exit(EXIT_FAILURE);
}
}
else
{
waitpid(child_pid, &status, 0);

if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
fprintf(stderr, "./shell: No such file or directory\n");
}
}
