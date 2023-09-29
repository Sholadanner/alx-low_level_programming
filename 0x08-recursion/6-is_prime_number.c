#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determine if a number is a prime number
 * @n: number to be evaluated
 * Return: to be determined
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - determine if a number is prime recursively
 * @n: number to be evaluated
 * @i: iterator
 * Return: to be determined
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
