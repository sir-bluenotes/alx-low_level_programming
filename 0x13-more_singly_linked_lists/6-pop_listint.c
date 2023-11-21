#include "lists.h"

/**
*pop_listint - deletes the head node of a linked list
*@head: pointer to the address of linked list
*Return: 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
