#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints a linked list, even if it has a loop
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *curr, *tmp;
	
	curr = head;
	while (curr)
	{
		count++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		tmp = curr->next;
		if (tmp >= curr)
		{
			printf("-> [%p] %d\n", (void *)tmp, tmp->n);
			break;
		}
		curr = tmp;
	}
	return (count);
}
