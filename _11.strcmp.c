#include "shell.h"

/**
 * _String_Comp - program to concatenate n chars of src to dest
 * @s1	 : pointer to Destination string
 * @s2   : pointer to source string
 * Return: 0 on success else -1 is returned.
 */
int _String_Comp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);

		}
	i++;

	}

	return (0);
}
