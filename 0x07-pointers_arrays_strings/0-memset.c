#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 *
 * @n: number of byte to fill
 * @b: memory area
 * @s: memory area to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = (char *) s;

	for (i = 0; i < n; i++)
	{
		*(p + i) = b;
	}
	return (s);
}
