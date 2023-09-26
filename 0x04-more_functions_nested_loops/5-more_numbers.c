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
	int j;

	for (j = 0 ; j < 10 ; j++)
	{
		for (i = 0 ; i <= 14 ; i++)
		_putchar(i + '0');
	}
	_putchar('\n');
}

