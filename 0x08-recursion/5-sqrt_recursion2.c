#include "main.h"

int _guess(int n, int guess)
{
	if (guess * guess == n || (guess * guess < n && (guess + 1) * (guess + 1) > n))
		return (guess);
	if (guess * guess < n)
		return _guess(n, guess + 1);
	if (guess * guess > n)
		return _guess(n, guess - 1);
	return (-1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 0)
		return _guess(n, 0);
	return (-1);
}
