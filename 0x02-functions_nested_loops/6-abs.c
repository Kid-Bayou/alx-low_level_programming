#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @num: the value
 * Return: the number
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * (-1);
	}
	return (num);
}
