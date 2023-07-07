#include "main.h"
/**
 * clear_bt - function that sets the value of a bit to
 * 0 at a given index
 * @n: binary number to modify
 * @index: position of the bit to set to 0
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
