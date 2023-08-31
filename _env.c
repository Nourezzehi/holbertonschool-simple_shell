#include "simple_shell.h"

/**
* _env - print environment env_variables
*/

void _env(void)
{
	char *s = environ[0];
	int i = 0;

	while (s != NULL)
	{
		printf("%s\n", environ[i]);
		s = environ[++i];
	}
}
