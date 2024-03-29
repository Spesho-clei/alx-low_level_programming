#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *
 * @array: pointer to the first element of an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to a function that takes an integer
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
