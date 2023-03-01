#include "main.h"
/**
 * reverse_array - function that reverses the content
 * of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements in array
 * Return: string in reverse
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - i -1] = a[i];
		a[i] = temp;
	}
}
