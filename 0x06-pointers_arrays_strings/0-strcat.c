#include "main.h"

/**
**_strcat - function joins two strings
*@dest: input parameter
*@src: function parameter
*Return: character
*/
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;
	
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
