#include "lists.h"
/**
 * sum_listint - calculates the sum of all data in a listint_t
 * @head: first node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *count = head;

	while (count != NULL)
	{
		sum += count->n;
		count = count->next;
	}
	return (sum);
}
