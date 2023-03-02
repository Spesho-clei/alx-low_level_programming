#include "main.h"
/**
 * print_number - function that prints an integer
 *
 * @n: input
 * Return: 0
 */
void print_number(int n)
{
	unsigned int k;

	k = n;

	if (n < 0)
	{
		_putchar('-');
		k = -n;
	}
	if (k / 10 != 0)
	{
		print_number(k / 10);
	}
	_putchar((k % 10) + '0');
}
