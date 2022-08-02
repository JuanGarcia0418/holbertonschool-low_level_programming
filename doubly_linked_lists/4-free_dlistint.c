#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free a dlistint_t
 * @head: pointer to the beginning of the linked lists
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
