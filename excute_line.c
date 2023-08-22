#include "simple_shell.h"

/**
 * execute_line - the function to use execve while executing the line
 * @tokens: the vector with the whole input
 */

void execute_line(char **tokens, char *path)
{
	int status;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		status = execve(path, tokens, environ);
		perror("execution error");
		exit(EXIT_FAILURE);
	}
	else if (pid > 0)
	{
		wait(&status);
		if (WIFEXITED(status))
			status = WEXITSTATUS(status);
	}
	else if (pid < 0)
	{
		free_d_p(tokens);
		perror("fork error");
		exit(EXIT_FAILURE);
	}
}
