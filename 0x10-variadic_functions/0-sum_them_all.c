#include "variadic_functions.h"

/**
 * sum_them_all - sum of all the parameters
 * @n: number of arguments
 * Return: 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;
	unsigned int i;

	va_start(num, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(num, int);
	}
	va_end(num);
	return (sum);
}
