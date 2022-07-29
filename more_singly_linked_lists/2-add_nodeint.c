#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add a new node of listint_t
 * @head: doubler pointer of listint_t
 * @n: integer to add list
 * Return: address of a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
