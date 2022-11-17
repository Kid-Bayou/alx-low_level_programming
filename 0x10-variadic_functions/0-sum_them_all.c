#include "variadic_functions.h"

/**
 * sum_them_all - sum of all arguments
 * @n: number of arguments
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(numbers, int);
	}
	va_end(numbers);
	return (sum);
}
