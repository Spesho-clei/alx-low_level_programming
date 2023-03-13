#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 *
 * @s1: pointer to the string to concatenate
 * @s2: pointer to the string to concatenate
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL || s2 == NULL)
		return (" ");
	result = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
	free(result);
}
