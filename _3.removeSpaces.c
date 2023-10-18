#include "shell.h"
/**
 * rmvSpaces- Function to remove spaces for the string
 * @str:  Input strng to remove spaces for
 * Return: void
 **/

void rmvSpaces(char *str)
{
	size_t LengthOfString = _String_Length(str);
	char Return[512];
	size_t b = 0;
	size_t a = 0;

	for (a = 0; a < LengthOfString; ++a)
	{
		if (str[a] != ' ')
		{
			Return[b] = str[a];
			b++;
		}
	}
	if (b < LengthOfString)
		str[b] = '\0';

	for (a = 0; a < b; ++a)
	{
		str[a] = Return[a];
	}
}

