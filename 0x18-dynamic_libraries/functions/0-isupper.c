#include "main.h"
#include <stdio.h>
/**
*_isupper - prints 1 for upper c
*@c: function parameter
*Return: 1 or 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
