#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * print Fizz for multiples of 3 instead of the number
 * print Buzz for multiples of 5 instead of the number
 * ptint FizzBuzz for multiples of both 3 & 5
 * return: 0
 * main - entry point
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char ab[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
			printf("%s", b);
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s ", ab);
		else if (i % 3 == 0)
			printf("%s ", a);
		else if (i % 5 == 0)
			printf("%s ", b);
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
