#include <stdio.h>
#include "lists.h"

/**
*print_listint - prints elements of listint_t
*@h: pointer to the head of list_t list
*Return: number of nodes in list_t list
*/

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
