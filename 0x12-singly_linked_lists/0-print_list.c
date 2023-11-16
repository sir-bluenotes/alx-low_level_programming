#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*print_list - checks Holberton students code
*@h: name of list
*Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h -> str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		{
			printf("[%d] %s\n", h -> len, h -> str);
		}
		count++;
		h = h -> next;
	}
	return (count);
}
