#include "main.h"
/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: a pointer to a pointer to a char
 * @to: a pointer to a char
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
