#include "function_pointers.h"

/**
*array_iterator - execute function as parameter on each element
*of an array
*@array: the array
*@size: size of the array
*@action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
