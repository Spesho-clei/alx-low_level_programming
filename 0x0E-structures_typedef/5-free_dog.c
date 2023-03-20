#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 *
 * @d: pointer to dog_t
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
