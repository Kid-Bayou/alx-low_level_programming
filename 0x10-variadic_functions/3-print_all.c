#include "variadic_functions.h"

/**
 * _printchar -function that prints char
 * @list: va_list
 * Return: void
 */
void _printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * _printint -function that prints int
 * @list: va_list
 * Return: void
 */
void _printint(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * _printfloat -function that prints float
 * @list: va_list
 * Return: void
 */
void _printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * _printstring -function that prints string
 * @list: va_list
 * Return: void
 */
void _printstring(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all -function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int c = 0, j;
	va_list a_list;
	char *sep = "";

	get_format arr_fmt[] = {
		{"c", _printchar},
		{"f", _printfloat},
		{"s", _printstring},
		{"i", _printint},
		{NULL, NULL}
	};
	va_start(a_list, format);
	while (format != NULL && format[c] != '\0')
	{
		j = 0;
		while (*(arr_fmt[j].func) != NULL)
		{
			if (format[c] == *(arr_fmt[j].p_type))
			{
				printf("%s", sep);
				arr_fmt[j].func(a_list, sep);
				sep = ", ";
				break;
			}
			j++;
		}
		c++;
	}
	printf("\n");
	va_end(a_list);
}
