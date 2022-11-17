#include "vardiac_functions.h"

/**
 * print_numbers - prints the given numbers
 * @separator: string to be separated
 * @n: number of arguments
 * Return: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf('\n');
}
