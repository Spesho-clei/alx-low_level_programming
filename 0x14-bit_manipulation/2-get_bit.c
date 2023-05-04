#include "main.h"
/**
 * get_bit - function that return the value of a
 * bit at a given index
 * @n: binary number to extract bit from
 * @index: position of the bit to extrac
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
