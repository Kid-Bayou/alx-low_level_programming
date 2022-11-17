#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: the input number as an integer
 * Return: 1 if the number is gerater, 0 if its zero, -1 if its less than 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
