#include "main.h"
#include <stdio.h>

/**
*print_line - function that prints a line
*@n: function parameter
*Return: void
*/
void print_line(int n)
{
	int j;

	for (j = 1 ; j <= n ; j++)

		_putchar('_');
	if (n <= 0)
		_putchar('\n');
	
	_putchar('\n');
}
