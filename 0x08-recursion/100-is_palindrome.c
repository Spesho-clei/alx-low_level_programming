#include "main.h"
/**
 * last_index - return last index of a string
 *
 * @s: pointer to string
 * Return: integer
 */
int last_index(char *s)
{
	int n;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * check - checker of palindrome
 * 
 * @s: string
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int check;
	int end = last_index(s);
	
	return (check(s, 0, end - 1, end % 2));
}
/**
 * check - function to check palindrome
 *
 * @s: string
 * @start: int moves from right to left
 * @end: int moves from left to right
 * @pair: int
 * Return: 0 or 1
 */
int check(char *s, int start, int end, int pair)
{
	if (start == end && pair != 0) || (start == end + 1 && pair == 0)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}
