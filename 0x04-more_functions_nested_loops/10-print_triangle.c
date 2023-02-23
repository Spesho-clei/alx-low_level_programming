#include "main.h"
/**
 * print_triangle - function to print a triangle
 * @size: size of a triangle
 * return: triangle of '#'
 */
void print_triangle(int size)
{
	int c, a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a <= (size - 1); a++)
		{
			for (c = 0; c < (size - 1) - a; c++)
			{
				_putchar(' ');
			}
			for (b = 0; b <= a; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
