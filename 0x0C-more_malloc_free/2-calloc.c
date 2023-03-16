#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc -  function that allocates memory for an array,
 * using malloc
 *
 * @size: number of bytes
 * @nmemb: number of elements
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
	free(ptr);
}
