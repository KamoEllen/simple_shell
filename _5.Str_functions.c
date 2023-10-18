#include "shell.h"

/**
 * _String_copy -Function that copies the string pointed to by src,
 * @dest: Pointer Var to copy string to
 * @src: Pointer variable for string to be copied
 * Return: dest
 */
char *_String_copy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}

/**
 * _String_Char - Function that locates a character in a pointer to string
 * @s: pointer to the string being searched
 * @c: second string
 * Return: a pointer to the first occurrence of char c in the string s
 * or NULL if character is not found
 */
char *_String_Char(char *s, char c)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		if (s[counter] == c)
			return (s + counter);
	}
	if (s[counter] == c)
		return (s + counter);
	return (0);
}

/**
 * _String_Conc - Function that concatenates two strings
 * @dest: Destination pointer var for string to be concetenated to
 * @src: Source pointer var of the string to be concatenated
 * Return: dest
 */
char *_String_Conc(char *dest, char *src)
{
	int i = 0, j;

	while (*(dest + i))
	{
		i++;
	}
	for (j = 0; *(src + j); j++, i++)
	{
		*(dest + i) = *(src + j);
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _String_Dupl - Function to allocate space in memory and return pointer
 * which contains to copy of the string given as a parameter
 * @str: string
 * Return: Pointer to the copy, NULL if it fails
 */
char *_String_Dupl(char *str)
{
	int counter1, counter2, counter3;
	char *FundUp;

	if (str == 0)
		return (NULL);

	for (counter1 = 0; str[counter1] != '\0'; counter1++)
		;
	counter2 = counter1;

	FundUp = malloc(sizeof(char) * counter2 + 1);
	if (FundUp == 0)
		return (NULL);

	for (counter3 = 0; counter3 < counter2; counter3++)
		FundUp[counter3] = str[counter3];
	FundUp[counter2] = str[counter2];

	return (FundUp);
}
