#include "simple_shell.h"

/**
 * execute_line - the function to use execve while executing the line
 * @tokens: the vector with the whole input
 */

void execute_line(char **tokens)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if (execve(tokens[0], tokens, NULL) == -1)
		{
			fprintf(stdin, "%s: command not found", tokens[0]);
			exit(EXIT_FAILURE);
		}
	}
	else if (pid > 0)
		waitpid(pid, NULL, 0);
	else
		perror("fork");
}
