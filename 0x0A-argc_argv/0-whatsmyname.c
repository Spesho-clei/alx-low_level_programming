#include <stdio.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 *
 * @argc: number of command line argument passed to the program
 * @argv: array of strings containing arguments
 * Return: 0
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
