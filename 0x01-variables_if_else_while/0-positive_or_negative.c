#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates a random number and then prints
 * the results of it beingnegative, positive or zero
 * Return: Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		printf("%d is negative", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is zero", n);
	}
	return (0);
}
