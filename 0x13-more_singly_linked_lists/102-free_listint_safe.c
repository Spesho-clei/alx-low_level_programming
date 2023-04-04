#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: Address of the head of the list
 *
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *curr, *next;

	if (h == NULL || *h == NULL)
		return (0);
	curr = *h;
	*h = NULL;
	while (curr != NULL)
	{
		count++;
		next = curr->next;
		free(curr);
		if ((void *)next <= (void *)curr)
			break;
		curr = next;
	}
	return (count);
}
