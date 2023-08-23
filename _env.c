#include "simple_shell.h"

/**
* _env - print environment env_variables
*/

void _env(void)
{
	int i = 0;

	while (environ[i] != NULL)
	{
		printf("%s\n", environ[i]);
		i++;
	}
}
