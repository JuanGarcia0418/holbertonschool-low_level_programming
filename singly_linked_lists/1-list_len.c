#include "lists.h"
/**
 * list_len - finds the number of elements in a list
 * @h: pointer of the linked list
 * Return: number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
