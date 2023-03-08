#include "main.h"
/**
 * square - function to find square
 * @n: integer to find square
 * @root: integer
 * Return: integer
 */
int square(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root < n)
		return (square(n, root + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number
 *
 * @n: integer
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
