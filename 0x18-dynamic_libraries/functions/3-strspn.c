#include "main.h"

/**
*_strspn - function gets length of prefix substring
*@s: function parameter
*@accept: function parameter
*Return: n
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0 ; accept[r] ; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
