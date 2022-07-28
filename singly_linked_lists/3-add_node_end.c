#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add node of down to up
 * @head: firts part to list
 * @str: string to copy
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	int i = 0;

	a = malloc(sizeof(list_t));
	if (a == NULL)
		return (NULL);
	if (*head != NULL)
	{
		b = *head;
		while(b->next != NULL)
		{
			b = b->next;
			i++;
		}
		b->next = a;
	}
	else
		*head = a;
	a->next = NULL;
	a->str = strdup(str);
	i = 0;
	while (str[i])
		i++;
	a->len = i;
	return (a);
}
