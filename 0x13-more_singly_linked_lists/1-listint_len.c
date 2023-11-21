#include <stdio.h>
#include "lists.h"

/**
*listint_len - returns number of elements in linked list
*@h: a pointer to the head of linked list
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
