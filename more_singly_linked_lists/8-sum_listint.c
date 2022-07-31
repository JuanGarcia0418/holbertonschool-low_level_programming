#include "lists.h"
/**
 * sum_listint - sum between parts of the listint_t
 * @head: pointer to first node in the list
 * Return: return sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
