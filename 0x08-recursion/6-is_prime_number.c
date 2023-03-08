#include "main.h"
/**
 * is_divisible - function that checks if a number 'n' is divisible
 * by 'divisor'
 *
 * @n: input
 * @divisor: number that will divide n
 * Return: if divisor is equal to 1 then n is not divisible by any
 * other number return 0, if n is divisible bt divisor then return
 */
int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return (0);
	}
	if (n % divisor == 0)
	{
		return (1);
	}
	return (is_divisible(n, divisor - 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: input number to be tested
 * Return: 1 for prime numbers otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (!is_divisible(n, n - 1));
}
