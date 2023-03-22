#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98, 99, or 100 on error
 */
int main(int argc, char *argv[])
{
	int num2;
	int result = 0;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		return(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("%d\n", result);
		return (0);
	}
	return (0);
}
