#include "main.h"

/**
 * is_prime_number - returns 1 if number is prime
 * @n: the number to be checked
 * Return: true if the bumber is prime
 */
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (prime_calculation(n, start));
}

/**
 * prime_calculation - returns 1 if n is prime
 * @n number to be checked
 * @start: number to start checking
 * Return: 1 if n is prime if not 0
 */

int prime_calculation(int n, int x)
{
	if (x <= 1)
		return (1);
	else if (n % x == 0)
		return (0);
	return (prime_calculation(n, x - 1));
}
int main()
{
	return 0;
}
