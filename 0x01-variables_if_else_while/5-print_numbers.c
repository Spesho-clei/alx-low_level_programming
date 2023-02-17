#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 starting from 0
 * followed by new line
 * return: 0 success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
