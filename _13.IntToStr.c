#include "shell.h"
/**
 * RvsString - program to RvsString a string
 * @str: string to RvsString
 * @len: The length of the string
 * Return: void
 */

void RvsString(char *str, int len)
{
	int i = 0;
	int j = len - 1;
	int x;


	if (str[i] == '-')
		i++;

	while (i < j)
	{
		x = str[i];
		str[i] = str[j];
		str[j] = x;
		i++;
		j--;
	}
}

/**
 * IntegerToString - program to convert an integer to string
 * @x: input integer to be converted to string
 * @str: an array that contains the string result
 * Return: length of string
 */
int IntegerToString(int x, char str[])
{
	int i = 0;

		if (x == INT_MIN)
		{
			str[0] = '-';
			str[1] = '2';
			str[2] = '1';
			str[3] = '4';
			str[4] = '7';
			str[5] = '4';
			str[6] = '8';
			str[7] = '3';
			str[8] = '6';
			str[9] = '4';
			str[10] = '8';
			str[11] = '\0';
		return (11);
		}
		if (x < 0)
		{
			x = abs(x);
			str[i] = '-';
			i++;
		}
		while (x)
		{
			str[i++] = (x % 10) + '0';
			x = x / 10;
		}
	RvsString(str, i);
	str[i] = '\0';
	return (i);
}
