#include "main.h"
/**
*print_rev - functions prints a string in reverse
*@s: parameter function
*Returns: void
*/

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (j = i ; j > 0 ; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
