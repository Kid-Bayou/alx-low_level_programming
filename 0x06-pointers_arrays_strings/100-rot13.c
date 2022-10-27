#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;

	char x[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char y[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[++i])
	{
		for (j = 0; j != '\0'; j++)
		{
			if (s[i] == x[j])
			{
				s[i] == y[j];
				break;
			}
		}
	}
	return (s);
}
