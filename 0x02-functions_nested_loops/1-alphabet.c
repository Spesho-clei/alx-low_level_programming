#include "main.h"

/**
 * main - prints alphabets
 * return: 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')

	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
