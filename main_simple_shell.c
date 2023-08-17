#include "simple_shell.h"

/**
 * main - our shell
 * @argc: num of arguments
 * @argv: vector of arguments
 * Return: 0
*/

int main(int argc, char **argv)
{
	unsigned int count = 1;
	char *readline = NULL, **tokens;

	while (1)
	{
		printf("($) ");
		readline = read_line();
		tokens = parse_the_line(readline);
		execute_line(tokens);
		count++;
	}
	return (0);
}
