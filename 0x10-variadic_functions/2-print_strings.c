#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *p;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(string, char *);
		if (p == NULL)
			printf("(nil)");
		else
		{
			printf("%s", p);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
