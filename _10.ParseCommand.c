#include "shell.h"
/**
 * parse_command - Function to take and evaluate the arguments
 * @command: pointer to command input
 * @separator: recieve blank spaces of arguments
 * Return: Return a parameter
 **/

char **parse_command(char *command, char *separator)
{
	unsigned int i = 0, qWord = 0, len = 0;
	char **parameter;
	char *s;

	len = _String_Length(command);
	for (i = 0; i < len; i++)
	{
		if (command[i] == *separator)
			qWord++;
	}
	qWord != 1 ? qWord++ : (qWord = 1);
	if ((len - 1) == 0)
	{
		free(command);
		return (NULL);
	}
	parameter = malloc((qWord + 2) * sizeof(char **));
	if (parameter == NULL)
	{
		return (NULL);
	}
	i = 0;
	s = strtok(command, separator);
	len = _String_Length(s);
	s[len - 1] == '\n' ? s[len - 1] = '\0' : (s[len - 1] = s[len - 1]);
	parameter[i] = s;
	i++;
	while ((s = strtok(NULL, separator)))
	{
		parameter[i] = s;
		len = _String_Length(s);
		s[len - 1] == '\n' ? s[len - 1] = '\0' : (s[len - 1] = s[len - 1]);
		i++;
	}

	parameter[i] = NULL;

	return (parameter);
}
