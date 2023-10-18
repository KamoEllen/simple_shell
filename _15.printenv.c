#include "shell.h"
/**
 * Print_Environment- Function Program to print enviroment var
 *@env: pointer to array enviroment var
 * Return: void
 **/
void Print_Environment(char **env)
{
	char **Env;


	for (Env = env; *env != NULL; env++)
	{
		*Env = *env;
		Puts_(*Env);
	}
}
