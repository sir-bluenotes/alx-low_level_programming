#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*free_list - release memory aloocated for linked list
*@head: pointer to first node of list to free
*Return: nothing
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
