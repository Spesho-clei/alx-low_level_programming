#include <stdio.h>
#include "lists.h"

void before_main(void)__attribute((constructor));

/**
 * before_main - prints a message before the main function
 * is executed
 * Return: nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
