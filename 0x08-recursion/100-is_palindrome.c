#include "main.h"
/**
 * is_palindrome -  function that returns 1 if a string
 * is a palindrome and 0 if not
 *
 * @s: pointer to the string
 * @st: the starting index of the current substring being checked
 * @en: the ending index of the current substring being checked
 * Return: 1 if string is palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int st;
	int en;

	if (st >= en)
	{
		return (1);
	}
	if (s[st] == s[en])
	{
		return (0);
	}
	{
		return (is_palindrome(s));
	}
}
