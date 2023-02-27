#include "main.h"
/**
 * _strlen - function that returns the length of a string
 *
 * @s: input
 * Return: the length of string
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
