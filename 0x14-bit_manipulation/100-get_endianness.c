#include "main.h"

/**
*get_endianness - checks system byte order
*Return: 0
*/

int get_endianness(void)
{
	int x = 1;
	int little;

	little = (int) (((char *)&x)[0]);
	return (little);
}
