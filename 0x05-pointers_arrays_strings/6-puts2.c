#include "main.h"

/**
*puts2 -prints every character of a string followed by a new line
*@str: input string
*Return: void
*/
void puts2(char *str)
{
	int i = 0;
	int j = 0;
	char *c = str;
	int k;

	while (*c != '\0')
	{
		c++;
		i++;
	}
	j = i - 1;
	for (k = 0 ; k <= j ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
}
