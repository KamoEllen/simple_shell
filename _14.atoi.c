#include "shell.h"
/**
 * Atoi_ - Function program to Convert a string to an integer
 * @s: the string to be converted
 * Return: Converted integer
 */
int Atoi_(char *s)
{
int i, begin, neg;
unsigned int Number;

begin = -1;
neg = 0;
Number = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
begin = i;
if (s[i] == '-' && begin == -1)
{
if (neg)
neg = 0;
else
neg = 1;
}
}
if (begin != -1)
{
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
Number = Number * 10 + s[i] - '0';
else if (s[i - 1] >= '0' && s[i - 1] <= '9')
break;
}
}
if ((Number >= (unsigned int) INT_MAX && neg == 0))
return (INT_MAX);
else if ((Number > (unsigned int) INT_MAX && neg))
return (INT_MIN);
else if (neg)
return ((int) -Number);
else
return ((int) Number);
}
