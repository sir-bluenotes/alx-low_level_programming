#include "main.h"

/**
**_strpbrk - searches for a string of any byte size
*@s: fuction parameter
*@accept: function parameter
*Return: character
*/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0 ; accept[k] ; k++)
		{
			if (*s == accept[k])
				return (s);
		}
	s++;
	}
	return ('\0');
}
