#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
*list_len - checks number of elements
*@h: name of list
*Return: 0
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
