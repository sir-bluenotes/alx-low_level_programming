#include "main.h"
#include <stdio.h>

/**
*more_numbers - function prints more numbers
*
*
*Return: void
*/

void more_numbers(void)
{
	int i;
	int j = 10;

	for (i = 0 ; i < 15 ; i++)
	{
		_putchar((i * j) + '0');
	}
	_putchar('\n');
}

