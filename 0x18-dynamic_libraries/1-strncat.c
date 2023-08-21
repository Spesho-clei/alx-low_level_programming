#include "main.h"
/**
 * *_strncat -  function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: no. of bytes
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count = 0, j = 0;

	while (dest[count++])
		j++;
	for (count = 0; src[count] && count < n; count++)
		dest[j++] = src[count];
	return (dest);
}
