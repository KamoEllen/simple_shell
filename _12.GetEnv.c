#include "shell.h"
/**
 * Get_Environment - Function to retrieve value of a Env_var input in var
 * @var: Env_var varibale name
 * @env: for Env_var
 * Return: the value of Env_var varibale
 **/
char *Get_Environment(char *var, char **env)
{

	char **Env_var;
	char *Env_value;
	size_t length = 0;

	length = _String_Length(var);

	for (Env_var = env; *env != NULL; env++)
	{
		if (_strncmp(var, *env, length) == 0)
		{
			Env_value = _String_Char(*env, '=');
			Env_value++;
			break;
		}
	*Env_var = *env;
	}
return (Env_value);
}
