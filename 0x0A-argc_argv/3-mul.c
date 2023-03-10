#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 *
 * @argc: number of command line argument
 * @argv: array of srings containing arguments
 * Return: 1 if error otherwise 0
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);

	result = i * j;
	printf("%d\n", result);
	return (0);
}
