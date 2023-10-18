#include "shell.h"
/**
 * Exec_ - Function to Execute a command
 * @param : command_line passed
 * @env: Variable for holding Enviroment variables
 * Return: 0 on success, else if 1 not found or 2 for permision denied
 **/
int  Exec_(char **param, char **env)
{
	int Execute_;
	int ReturnPath;
	int i = 0;

	ReturnPath = Get_Path(param, env);


	if (!ReturnPath)
	{


		for (i = 0; param[i] != NULL; i++)
		{
			rmvSpaces(param[i]);
		}
		if (_String_Comp(param[i - 1], "") == 0)
			param[i - 1] = NULL;

		Execute_ = execve(param[0], param, env);

		if (Execute_ == -1)
		{
			return (2);
		}
	}
	else
	{
		return (1);
	}

	/*check free(param); later for VALGRIND*/
	return (0);
}
