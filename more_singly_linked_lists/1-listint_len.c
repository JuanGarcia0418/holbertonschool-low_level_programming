#include "lists.h"
/**
 * listint_len - number of elements in a listint_t
 * @h: pointer of linked list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
