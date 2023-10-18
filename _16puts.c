#include "shell.h"

/**
 * Puts_ - function to print a string
 * @str : the pointer to char being passed
 * Return:  void
 */
void Puts_(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		Putchar_(*(str + i));
		i++;


	}
		Putchar_('\n');

}
