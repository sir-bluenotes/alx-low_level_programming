#include "main.h"

/**
**_strchr - functions locates a char in str
*@s:function parameter
*@c: function parameter
*Return: character
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for ( ; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
