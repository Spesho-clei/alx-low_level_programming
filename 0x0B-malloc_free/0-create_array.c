#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 *
 * @size: specifies the size of the array to be created
 * @c: specifies the character with which the array will be initialized
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);
}
