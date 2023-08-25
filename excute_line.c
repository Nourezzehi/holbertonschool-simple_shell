#include "simple_shell.h"

/**
 * execute_line - the function to use execve while executing the line
 * @tokens: the vector with the whole input
 * @path: the command's full path
 */

int execute_line(char **tokens, char *path)
{
	int status = 0;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(path, tokens, environ);
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}
	return (status);
}
