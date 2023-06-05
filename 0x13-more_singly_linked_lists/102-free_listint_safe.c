#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	int po;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		po = *h - (*h)->next;
		if (po > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count++;
			break;
		}
	}

	*h = NULL;

	return (count);
}
