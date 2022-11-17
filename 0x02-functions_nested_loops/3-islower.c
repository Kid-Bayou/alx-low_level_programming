#include "main.h"

/**
 * _islower - shows 1 if the input is lower case
 * @c: the character in ASCII code
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
