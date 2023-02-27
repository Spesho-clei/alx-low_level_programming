#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 *
 * @s: string
 * Return: int from the string
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int d = 0;
	int e = 1;
	int f = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			e *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			f = 1;
			d = (d * 10) + (s[c] - '0');
			c++;
		}
		if (f == 1)
		{
			break;
		}
		c++;
	}
	d *= e;
	return (d);
}
