#include "lists.h"
/**
 * print_listint - print content of listint_t
 * @h: list to print
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count;
	}
	return (count);
}
