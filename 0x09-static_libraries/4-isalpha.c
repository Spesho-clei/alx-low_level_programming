#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * return: 1 if c is a letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
