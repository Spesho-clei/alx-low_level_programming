#include "3-calc.h"
#include <stddef.h>
#include <string.h>
#define ops

/**
 * get_op_func - function that selects the correct function to
 * perform the operation asked by the user
 *
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 * If s does not match any of the 5 expected operators return NULL
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[5] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	if (!s || !*s)
	{
		return (NULL);
	}
	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		
	}
	return (NULL);
}
