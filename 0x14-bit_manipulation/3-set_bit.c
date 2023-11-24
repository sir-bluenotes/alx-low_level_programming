#include "main.h"
#include <stddef.h>

/**
* set_bit - set bit of num to 1
*@index: position of bit to be manipulated
*@n: pointer to bit manipulated
*Return: 0
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(size_t) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
