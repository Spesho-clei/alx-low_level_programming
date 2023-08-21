#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer to destination memory area
 * from where the data will be copied to
 * @src: pointer to the source memory area
 * from where the data will be copied
 * @n: number of bytes to be copied from source
 * memory area to destination memory area
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ret);
}
