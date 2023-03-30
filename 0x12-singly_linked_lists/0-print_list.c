#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: te number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
