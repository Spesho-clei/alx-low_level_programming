#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup -  function that returns a pointer to a
 * newly allocated space in memory which contains a
 * copy of the string given as a parameter
 *
 * @str: string given as parameter
 * Return: pointer to newly allocated block of memory
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(strlen(str) + 1);
	if (dup == NULL)
		return (NULL);
	strcpy(dup, str);
	return (dup);
	free(dup);
}
