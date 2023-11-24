#include "main.h"
#include <stddef.h>

/**
*clear_bit - set bit value at point to 0
*@n: pointer to num changed
*@index: position of chnged num
*Return: 0
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
