#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * return: 0
 * @n: parameter
 */

void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
