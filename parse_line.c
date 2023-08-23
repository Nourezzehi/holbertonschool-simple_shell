#include "simple_shell.h"

/**
 *parse_the_line-parses the line.
 * @readline: the input
 * @seperator: the seperating string
 * Return: vector of words.
 */

char **parse_the_line(char *readline, const char *seperator)
{
	int i = 0, size = SIZE;
	char **tokens = (char **) malloc(size * sizeof(char *)), *token = NULL;

	token = strtok(readline, seperator);
	while (token != NULL)
	{
		tokens[i] = strdup(token);
		i++;
		token = strtok(NULL, seperator);
	}
	tokens[i] = NULL;
	free(readline);

	return (tokens);
}
