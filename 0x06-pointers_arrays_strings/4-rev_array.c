#include "main.h"

/**
*reverse_array - reverses char of an array
*@a: array
*@n: num of elements
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0 ; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
