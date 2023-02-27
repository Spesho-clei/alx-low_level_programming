#include "main.h"
/**
 * rev_string - function that reverses a string
 *
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int count = 0, i = 0;
	char last_char;

	while (*s)
	{
		s++;
		count++;
	}
	for (i = 0; i < count; i++)
		s--;
	for (i = 0; i < (count / 2); i++)
	{
		int last = count - 1;

		last_char = s[last - i];
		s[last - i] = s[i];
		s[i] = last_char;
	}
}
