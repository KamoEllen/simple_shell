#include "shell.h"
/**
 *_String_Length - Function to calculate length of the string
 *@s: string
 *Return: the length os string
 */
int _String_Length(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}

/**
 *_strncmp - Function to compare two strings
 *@s1: 1st string to comparate
 *@s2: 2nd string to comparate
 *@n: the number of characters to comparate
 *Return: 0 is success o -1 is fail
 */

int _strncmp(char *s1, char *s2, int n)
{

	int i = 0;

	do {
		if (s1[i] != s2[i])
			return (-1);

		i++;

	} while (i != n);

	return (0);
}

/**
 * Putchar_ Functio to write a character c to the stdout
 * @c: Input character to print
 * Return: On success 1, -1 if failed.
 */
int Putchar_(char c)
{
	return (write(1, &c, 1));
}
