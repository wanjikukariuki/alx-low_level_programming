#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *count = NULL;

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;
		(*head)->next = count;
		count = *head;
		*head = next;
	}

	*head = count;

	return (*head);
}
