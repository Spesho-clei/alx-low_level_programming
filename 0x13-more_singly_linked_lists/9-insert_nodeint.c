#include "lists.h"
#include <stdlib.h>

listint_t *add_nodeint_end(listint_t **head, const int n);

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the beginning of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp = *head;
	unsigned int node_idx = 0;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = tmp;
		*head = new_node;
		return (new_node);
	}
	while (tmp)
	{
		if (node_idx == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		node_idx++;
		tmp = tmp->next;
	}

	free(new_node);
	return (NULL);
}
