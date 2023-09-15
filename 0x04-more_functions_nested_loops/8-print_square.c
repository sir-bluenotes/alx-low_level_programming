#include "main.h"

/**
*print_square - function prints square
*@size: size of square
*Return: void
*/

void print_square(int size)
{
	int i, j;

	j = 0;

	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
