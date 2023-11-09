#include "function_pointers.h"

/**
*int_index - searches for int in array of int
*@array: the array of integers
*@size: the size of the array
*@cmp: pointer to function to be used
*Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
