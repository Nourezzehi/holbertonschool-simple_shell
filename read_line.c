#include "simple_shell.h"

/**
 * read_line - get a line from stdin
 * Return: readen line
*/
char *read_line(void)
{
	char *input = NULL;
	ssize_t bufsize = 0;

	if (getline(&input, bufsize, stdin) == -1)
	{
		if (feof(stdin))
			exit(EXIT_SUCCESS);
		else if (!input)
			fprintf(stderr, "lsh: allocation error\n");
		else
		{
			perror("error in getting the line");
			exit(EXIT_FAILURE);
		}
	}
	else if (strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit(0);
	}
	return (input);
}
