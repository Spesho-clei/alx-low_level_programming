#include <unistd.h>
/**
 * main - this is the main function
 * description - Entry point
 * return: 1
 */
void main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, msg, sizeof(msg) - 1);

	return (1);
}
