#include "main.h"

int _sqrt_guess(int n, int guess);

/**
 * _sqrt_recursion - function to calculate square root of number
 *
 * @n: number whose squarre root is to be calculated
 *
 * Return: to be detemined
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_guess(n, 0));
}

/**
 * _sqrt_guess - function to guess an initial value for n
 *
 * @guess: the initial assumed value of n
 * @n: the number whose square root is to be determined
 *
 * Return: to be determined
 */
int _sqrt_guess(int n, int guess)
{
	if (guess * guess > n)
		return (-1);
	if (guess * guess == n)
		return (guess);
	return (_sqrt_guess(n, guess + 1));
}
