#include "shell.h"

/**
 * Get_Path - Function to search "path" os a command
 * @param: input command to search for.
 * @env: to strctore environment variable
 * Return: 0.
 */

int Get_Path(char **param, char **env)
{
	struct stat strct;
	char *dorPath1 = malloc(512);
	char *PATH;
	char **pathPassed;
	char **folder_dir;
	int IndNil = 0;
	int i = 0;

	PATH = Get_Environment("PATH", env);
	pathPassed = parse_command(PATH, "=");
	folder_dir = parse_command(pathPassed[0], ":");

	for (i = 0; folder_dir[i] != NULL; i++)
	{
		_String_copy(dorPath1, folder_dir[i]);
		_String_Conc(dorPath1, "/");
		_String_Conc(dorPath1, param[0]);
		rmvSpaces(dorPath1);

		if (stat(dorPath1, &strct) == 0)
		{
			param[0] = _String_Dupl(dorPath1);
			break;

		}
		if (stat(param[0], &strct) == 0)
		{
			break;
		}

		_String_copy(dorPath1, "");
	}
	if (folder_dir[i] == NULL)
		IndNil = 1;
	free(pathPassed);
	free(folder_dir);
	free(dorPath1);
	return (IndNil);
}
