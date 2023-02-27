#include "main.h"
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	while (count)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}

