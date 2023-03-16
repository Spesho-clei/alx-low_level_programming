#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * multiply - function to multiply two positive numbers
 *
 * @num1: input
 * @num2: input
 * Return: 0
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_number - Function to check if a string contains only digits
 *
 * @str: pointer to string
 * Return: 0 if success otherwise 1
 */
int is_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}
