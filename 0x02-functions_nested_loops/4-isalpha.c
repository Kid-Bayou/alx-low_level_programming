#include "main.h"

/**
 * _isalpha - returns 1 if the input is c if not 0
 * @c: the character in ASCII code
 * Return: for letters 1, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
