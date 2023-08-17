#include "simple_shell.h"

/**
 *parse_the_line-parses the line.
 * @input:Buffer
 * Return: vector of words.
 */

char **parse_the_line(char *input)
{
	unsigned int i = 0;
	char **tokens = (char **) malloc(1024), *token = NULL;

	if (!tokens)
	{
		fprintf(stderr, "lsh: allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(input, LSH_TOK_DELIM);
	while (token)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, LSH_TOK_DELIM);
	}
	tokens[i] = NULL;
	return (tokens);
}
