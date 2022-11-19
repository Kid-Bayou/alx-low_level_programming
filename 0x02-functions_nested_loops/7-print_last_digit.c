#include "main.h"

/**
 * print_last_digit - prints last digit
 * @num: value passed
 * Return: the final value
 */
int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * (-1);
		_putchar('0' + last_digit);
		return (last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
