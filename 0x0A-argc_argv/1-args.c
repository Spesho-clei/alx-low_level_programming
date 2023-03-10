#include <stdio.h>
#include "main.h"
/**
 * main -  program that prints the number of arguments passed into it
 *
 * @argc: number of command line arguments passed to the program
 * @argv: array of strings containing those arguments
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
