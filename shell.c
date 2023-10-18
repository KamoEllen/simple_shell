#include "shell.h"
/**
 * main - shell entry proram
 * @argc: Arguments count
 * @argv: Argument vector
 * @env:  environment variables
 * Return: Return 0
 **/
int main(int argc, char *argv[], char **env)
{

	if (argc == 1)
	{
		Into_Hsh(env, argv);
	}
	else
	{
		/* executing the shell */
		if (Exec_(++argv, env))
			exit(127);
	}

	return (0);
}
