#include <stdio.h>
/**
 * main - program to print lowercase then uppercase alphabet
 * followed by new line
 * return: 0 success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
