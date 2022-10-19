#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always zero
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
