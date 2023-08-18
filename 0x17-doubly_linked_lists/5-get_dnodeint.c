#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * *get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: is the index of the node, starting from 0
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;
	
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
