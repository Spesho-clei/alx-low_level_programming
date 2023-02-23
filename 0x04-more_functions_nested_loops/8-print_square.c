#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 * return: 0
 */
void print_square(int size)
{
	int c, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
			for (d = 2; d <= size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
