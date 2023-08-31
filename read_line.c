#include "simple_shell.h"

/**
 * read_line - get a line from stdin
 * Return: readen line
*/

char *read_line(void)
{
	char *input = NULL;
	size_t bufsize = 0;
	ssize_t input_len;

	input_len = getline(&input, &bufsize, stdin);
	if (input_len == -1)
	{
		free(input);
		if (feof(stdin))
			exit(0);
		else
		{
			perror("getline failed");
			exit(1);
		}
	}
	if (strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit(0);
	}

	return (input);
}
