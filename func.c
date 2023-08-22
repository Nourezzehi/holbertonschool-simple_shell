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
	char *final_path = (char *) malloc(1024 * sizeof(char));
	struct stat info;

	if (!command)
		return (NULL);
	if (stat(command, &info) == 0)
	{
		free(path);
		free(final_path);
		return (command);
	}
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
		else
			path[0] = 0;
		i++;
	}
	free(path);
	free(final_path);

	return (final_path);
}
