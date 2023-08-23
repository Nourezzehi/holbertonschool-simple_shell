#include "simple_shell.h"

/**
**check_path - Checks if the command exist
*@command: the command
*Return: Path of the command if found or NULL
*/

char *check_path(char *command)
{
	char *array[1000], *path = strdup(getenv("PATH"));
	char *path_token = strtok(path, ":");
	int i = 0;
	char *final_path;
	struct stat info;

	if (stat(command, &info) == 0)
	{
		strcpy(path, command);
		return (path);
	}
	final_path = (char *) malloc(1024 * sizeof(char));
	while (path_token != NULL)
	{
		array[i] = path_token;
		i++;
		path_token = strtok(NULL, ":");
	}
	i = 0;
	while (array[i] != NULL)
	{
		strcpy(final_path, array[i]);
		strcat(final_path, "/");
		strcat(final_path, command);
		strcat(final_path, "\0");

		if (stat(final_path, &info) == 0)
		{
			free(path);
			return (final_path);
		}
		i++;
	}
	free(final_path);
	free(path);

	return (NULL);
}
