#include "main.h"
/**
 * wildcmp - function that compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 *
 * @s1: string
 * @s2: string
 * Return: 1 if string are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
		}
	}
		else if (*s1 == *s2)
		{
			return (wildcmp(s1 + 1, s2 + 1));
		}
		else
		{
			return (0);
		}
}

