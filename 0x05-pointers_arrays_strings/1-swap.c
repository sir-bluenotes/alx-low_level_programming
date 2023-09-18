#include "main.h"
#include <stdio.h>
/**
*swap_int - function swaps values of integers
*@a: integer to swap
*@b: integer to swap
*Return: void
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
