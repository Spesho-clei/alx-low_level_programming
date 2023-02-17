#include <stdio.h>
/**
 * main - program to print alphabet in lowercase followed by new line
 * return: (0) success
 * betty style doc for function main goes here
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')

	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
