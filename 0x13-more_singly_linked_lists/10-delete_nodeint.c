#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}

	while (k < index - 1)
	{
		if (!previous || !(previous->next))
			return (-1);
		previous = previous->next;
		k++;
	}


	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}
