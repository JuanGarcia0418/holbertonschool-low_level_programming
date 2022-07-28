#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
