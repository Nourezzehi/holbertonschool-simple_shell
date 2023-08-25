#include "simple_shell.h"

/**
 * main - our shell
 * @argc: num of arguments
 * @argv: vector of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	char *readline, **tokens, *path = NULL;
	int status;
	(void) argc;
	(void) argv;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("$ ");
		readline = read_line();
		if (strcmp("env\n", readline) == 0)
		{
			free(readline);
			_env();
			continue;
		}
		tokens = parse_the_line(readline, TOK_DELIM);
		if (*tokens == NULL)
		{
			free_d_p(tokens);
			continue;
		}
		path = check_path(*tokens);
		if (path != NULL)
		{
			status = execute_line(tokens, path);
			free(path);
		}
		free_d_p(tokens);
	}
	status = 1;

	return (1);
	return (status);
}
