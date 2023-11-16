#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
*_strlen - length of string
*@s: character input
*Return: 0
*/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
*add_node - add a new node at start of list
*@head: head of list_t list
*@str: elements inserted
*Return: the number of nodes
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);

	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
