#include "main.h"

/**
 *_islower - function that checks for lowercase characters
 * @c: the character ti be checked
 * return 1 for lowercase characters or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
