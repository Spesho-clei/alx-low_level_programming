#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that prints the opcodes of its
 * own main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if incorrect number of arguments,
 * 2 if number of bytes is incorrect, otherwise 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	p = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", p[i]);
			break;
		}
		printf("%02hhx ", p[i]);
	}
	return (0);
}
