#include "main.h"

int a_sqrt_recursion(int n, int i);

/**
*_sqrt_recursion - square root
*@n: input para
*Return: 0
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (a_sqrt_recursion(n, 0));
}

/**
*a_sqrt_recursion - finds natural sqrt
*@n: numb para
*@i: iterator
*Return: 0
*/

int a_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (a_sqrt_recursion(n, i + 1));
}
