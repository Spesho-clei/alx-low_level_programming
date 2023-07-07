#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: pointer to string
 * Return: converted number or 0 if b is NULL or there is
 * more char in b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int j;

	if (b == NULL)
		return (0);
	for (j = 0; b[j] != '\0'; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		res = res * 2 + (b[j] - '0');
	}
	return (res);
}
