#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - function that concatenates all
 * the arguments of your program
 *
 * @ac: the number of arguments
 * @av: array of string containing arguments
 * Return: pointer to concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i;
	int pos = 0;
	int total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcpy(result + pos, av[i]);
		pos += strlen(av[i]);
		result[pos++] = '\n';
	}
	result[pos] = '\0';
	return (result);
	free(result);
}
