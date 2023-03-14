#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * strtow - function that splits a string into words
 *
 * @str: string as parameter
 * Return: pointer to array of strings
 */
char **strtow(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int word_len = 0;
	int word_count = 0;
	unsigned int len = strlen(str);
	char **words;

	if (str == NULL || strlen(str) == 0)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
	}
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	words[word_count] = NULL;
	while (i < len)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (j < len && str[j] != ' ')
			{
				word_len++;
				j++;
			}
			words[--word_count] = (char *)malloc((word_len + 1) * sizeof(char));
			if (words[word_count] == NULL)
			{
				return (NULL);
			}
			strncpy(words[word_count], &str[i], word_len);
			words[word_count][word_len] = '\0';
			i = j;
		}
		i++;
	}
	return (words);
	free(words);
}
