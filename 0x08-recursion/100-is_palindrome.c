#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not
 *
 * @s: string to reverse
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - return length of a string
 *
 * @s: string to find the length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - check char recursively for palindrome
 *
 * @s: string to check
 * @i: iterator
 * @len: length of string
 * Return: 1 if palindrome, otherwise 0
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
