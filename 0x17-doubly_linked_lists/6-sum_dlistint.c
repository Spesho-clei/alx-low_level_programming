#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the
 * data (n) of a dlistint_t linked list
 * @head: pointer
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
