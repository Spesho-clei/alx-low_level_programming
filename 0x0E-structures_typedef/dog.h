#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a new type struct dog with the elements below
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of dog's owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);
#endif
