#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete the head node
 * @head: pointer to the head of the list
 * Return: the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
