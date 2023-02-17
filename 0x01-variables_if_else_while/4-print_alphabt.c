#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * return:0 success
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		putchar('\n');
		return (0);
}
