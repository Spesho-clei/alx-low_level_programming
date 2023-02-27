#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 *
 * @a: input
 * @n: number of elements in array
 * Return: elements of array
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
			printf(", ");
		count++;
	}
	printf("\n");
}
