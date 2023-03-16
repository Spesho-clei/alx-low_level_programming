#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block
 * using malloc and free
 *
 * @ptr:  pointer to the memory previously allocated
 * with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);
	return (new_ptr);
	free(new_ptr);
}
