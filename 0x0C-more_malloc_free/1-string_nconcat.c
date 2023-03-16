#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat -  function that concatenates two strings
 *
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of bytes
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (s1 == NULL)
		s1 = (" ");
	if (s2 == NULL)
		s2 = (" ");
	if (n >= s2_len)
		n = s2_len;
	result = malloc(s1_len + n + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
	free(result);
}
