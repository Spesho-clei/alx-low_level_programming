#include "main.h"
/**
 * _determine - determine function square root of a number
 *
 * @n: number
 * @i: input
 * Return: square root
 */
int _determine(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_determine(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);

	return (-1);
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: input
 * Return; sqrt_recursion
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	else
	{
		return (_determine(i, n));
	}
}
