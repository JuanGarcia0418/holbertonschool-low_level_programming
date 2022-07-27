#include "lists.h"
#include "stdio.h"
/**
 * print_list - print in format list
 * @h: pointer to variable h
 * Return: return the functions of list
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}
