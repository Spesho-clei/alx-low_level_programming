#include "main.h"
/**
 * _strspn - function that gets the length
 * of a prefix substring
 *
 * @s: pointer to the string to search
 * @accept: pointer to the set of char
 * that are allowed in the prefix substring
 * Return: unsigned int that rep length of initial
 * segment of s that consist only of char from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *p;

	for (; *s; s++)
	{
		for (p = accept; *p; p++)
		{
			if (*s == *p)
			{
				count++;
				break;
			}
		}
		if (!*p)
		{
			break;
		}
	}
	return (count);
}
