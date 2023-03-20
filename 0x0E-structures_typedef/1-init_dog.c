#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 *
 * @d: pointer to struct dog
 * @name: name value
 * @age: age value
 * @owner: name of dog's owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
