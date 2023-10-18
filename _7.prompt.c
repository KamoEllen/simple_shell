#include "shell.h"
/**
  * Prompt_- Function to print  the prompt of shell
  * Return: void
 **/
void Prompt_(void)
{
	if (isatty(STDIN_FILENO))
	{
		Putchar_('$');
	}
}
