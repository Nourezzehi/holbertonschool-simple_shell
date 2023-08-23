#include "simple_shell.h"

/**
 * free_d_p - to free a double pointer
 * @p: the pointer to free
*/

void free_d_p(char **p)
{
	int i;

	for (i = 0; p[i] != NULL; i++)
		free(p[i]);
	free(p);
}
