#include "main.h"
/**
 * main - function prints text as output
 * Return: Always zero
 */
int main(void)
{
	char word[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}