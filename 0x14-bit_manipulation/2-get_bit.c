#include "main.h"
#include <stddef.h>

/**
* get_bit - get index value of bit
*@index: position index of bit to be gotten
*@n: the number to checkvalue
*Return: 0
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
