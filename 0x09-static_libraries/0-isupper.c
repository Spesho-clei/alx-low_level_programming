#include "main.h"

/**
 * main - check uppercase char
 * @c: print int
 * return: return 1 if c is uppercase and return 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{return (1);
	}

	else
	{
		return (0);
	}
}
