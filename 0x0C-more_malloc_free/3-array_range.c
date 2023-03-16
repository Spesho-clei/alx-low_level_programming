#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 *
 * @min: integer input
 * @max: integer input
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *arr;
	int n;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;
	arr = malloc(n * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
	free(arr);
}
