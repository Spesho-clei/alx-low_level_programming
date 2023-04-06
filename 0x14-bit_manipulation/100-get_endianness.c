#include "main.h"
/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *s = (char *) &t;

	return (*s ? 1 : 0);
}
