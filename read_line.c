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
			perror("geline error");
			exit(EXIT_FAILURE);
	}
	else if (feof(stdin))
	{
		free(input);
		exit(EXIT_SUCCESS);
	}
	if (strcmp(input, "exit\n") == 0)
	{
		free(input);
		exit(EXIT_SUCCESS);
	}

	return (input);
}
