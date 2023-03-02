#include "main.h"
/**
 * rot13: function that encodes a string using rot13
 *
 * @s: pointer to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
	int i;
	int j;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inputrot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == input[j])
			{
				s[i] = inputrot[j];
				break;
			}
		}
	}
	return (s);
}
