#include "main.h"
/**
 * *_strcat - function that concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int count = 0, i;

	while (dest[count])
	{
		count++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[count] = src[i];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
