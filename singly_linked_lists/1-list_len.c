#include "lists.h"
/**
 * list_len - finds the number of elements in a list
 * @h: pointer of the linked list
 * Return: number of elements in a linked list
 *
 */
size_t list_len(const list_t *h)
{
	const list_t *pl;
	unsigned int i;

	pl = h;
	for (i = 0; pl; i++)
		pl = pl->next;
	return (i);
}
