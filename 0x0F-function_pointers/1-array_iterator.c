#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action:  pointer to a function that takes an integer parameter
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
