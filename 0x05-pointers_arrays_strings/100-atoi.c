#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *
 * @s: string
 * Return: int from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';
	num = num * 10 + digit;
	s++;
	}
	return num * sign;
}
