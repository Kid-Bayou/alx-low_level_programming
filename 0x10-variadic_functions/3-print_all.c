#include "variadic_functions.h"

/**
 * print_char - prints char
 * @item: things to be printed
 * @s: spearator
 * Return: nothing
 */
void print_char(va_list item, char *s)
{
	printf("%s%c", s, va_arg(item, int));
}

/**
 * print_int - prints int
 * @item: things to be printed
 * @s: separator
 * Return: nothing
 */
void print_int(va_list item, char *s)
{
	printf("%s%d", s, va_arg(item, int));
}

/**
 * print_string - prints string
 * @item: things to be printed
 * @s: serpator
 * Return: nothing
 */
void print_string(va_list item, char *s)
{
	char *str;

	str = va_arg(item, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", s, str);
}

/**
 * print_float - prints floats
 * @item: things to be printed
 * @s: separator
 * Return: nothing
 */
void print_float(va_list item, char *s)
{
	printf("%s%f", s, va_arg(item, double));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list item;
	char *s;
	int i, j;

	fm_t fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(item, format);
	i = 0;
	s = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(list, s);
				s = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(item);
}

