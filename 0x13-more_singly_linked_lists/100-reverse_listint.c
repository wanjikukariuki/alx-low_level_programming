#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = *head;

	while (current)
	{
		listint_t *next = current->next;
		current->next = previous;
		previous = current;
		current = next;
	}
	*head = previous;

	return (previous);
}
