#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0, n;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c,", c);
		}
		else if (format[i] == 'i')
		{
			n = va_arg(args, int);
			printf("%d,", n);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
			{
				printf("%s", s);
			}
		} i++;
	}
	printf("\n");
	va_end(args);
}
