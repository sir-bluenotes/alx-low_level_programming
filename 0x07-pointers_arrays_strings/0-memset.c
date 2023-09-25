#include "main.h"

/**
**_memset - function fills memory with constant byte
*@s: function parameter
*@n: function parameter
*@b: function parameter
*Return: character
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
