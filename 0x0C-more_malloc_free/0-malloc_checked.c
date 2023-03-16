#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: input, which represents the number of bytes to allocate
 * Return: void pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	free(ptr);
}
