#include "shell.h"
/**
 * built_in - Evaluate Buitins
 * @command:  line of command
 * @env: var enviroments
 * @status: status process
 * Return: 1 CD DONE, 2 EXIT DONE, 0 NO ONE
 * Authors - Carlos Garcia - Ivan Dario Lasso - Cohort 10 - Cali
 **/
int built_in(char *command, char **env, int status)
{
	char **commandCD = NULL;
	size_t DirSizeBuffer = 512;
	static char *currDir;
	static char currDirector[512];
	static int CounterForAlloc;

	if (_strncmp(command, "cd", 2) == 0)
	{	commandCD = parse_command(command, " ");
		if (_strncmp(commandCD[0], "cd", 2) == 0)
		{
			if ((commandCD[1] == NULL) || (_strncmp(commandCD[1], "-", 1) == 0))
			{
				if (commandCD[1] == NULL)
					commandCD[1] = Get_Environment("HOME", env);
				else
				{
					if (_strncmp(commandCD[1], "-", 1) == 0)
					{
					if (chdir(currDirector))
						perror("Error:<chdir>");
					free(commandCD);
					Prompt_();
					return (1);
					}
				}
			}
			currDir = getcwd(currDirector, DirSizeBuffer);
			if (currDir == NULL)
				perror("Error <getcwd>");
			else
				CounterForAlloc++;
			if (chdir(commandCD[1]))
				perror("Error:<chdir>");
		}
		free(commandCD);
		Prompt_();
		return (1);
	} /*CD LOGICAL*/
return (BuiltExit(command, status));
}
