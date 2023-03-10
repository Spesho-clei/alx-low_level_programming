#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: pointer to the string to search
 * @accept: pointer to the string
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * otherwise 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				return (s);
			}
			p++;
		}
		s++;
	}
	return (0);
}
