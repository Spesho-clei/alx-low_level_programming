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
	listint_t *new_node, *current_node = *head;
	unsigned int i;

	if (*head == NULL || idx == 0)
		return (add_nodeint(head, n));
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;
	if (current_node == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
