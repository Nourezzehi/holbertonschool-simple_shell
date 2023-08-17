#include "simple_shell.h"

/**
 *execute_the_line - the function to use execve while executing the line
 *@tokens: the vector with the whole input
 */

int execute_line(char **tokens)
{
    pid_t pid;
    int status;
	
	pid = fork();
	if (pid == 0)
	{
		if (status = execvp(tokens[0], tokens) == -1)
		{
			fprintf(stdin, "%s: command not found", tokens[0]);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid > 0)
		waitpid(pid, NULL, 0);
	else
		perror("fork");
    return (status);
}
