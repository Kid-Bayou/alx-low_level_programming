#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * except for q and e
 * Return: Always zero
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x != 'e' && x != 'q')
		{
			putchar(x);
		}
		x++
	}
	putchar('\n')
	return (0);
