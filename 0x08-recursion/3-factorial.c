#include "main.h"

/**
 * factorial - function to get the factorial of a number
 * @n: number whose factorial is to be gotten
 * Return: to be determined
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
