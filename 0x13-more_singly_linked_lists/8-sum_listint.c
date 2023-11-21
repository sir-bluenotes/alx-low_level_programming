#include "lists.h"

/**
*sum_listint- calc sum of aa data in linked list
*@head: address of first node
*Return: 0
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
