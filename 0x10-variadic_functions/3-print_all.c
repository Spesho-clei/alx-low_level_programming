#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	char *s;
	float f;
	int n;

	va_list arg_list;

	va_start(arg_list, format);

	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(arg_list, int);
			printf("%c, ", c);
		}
		else if (format[i] == 'i')
		{
			n = va_arg(arg_list, int);
			printf("%d, ", n);
		}
		else if (format[i] == 'f')
		{
			f = (float) va_arg(arg_list, double);
			printf("%f", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(arg_list, char*);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s ", s);
			}
		}
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
