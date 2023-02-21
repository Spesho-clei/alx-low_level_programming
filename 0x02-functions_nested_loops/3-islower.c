#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: the character ti be checked
 * return 1 for lowcase characters or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
