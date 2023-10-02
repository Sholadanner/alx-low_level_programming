#include "main.h"

int _prime_help(int n, int y);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_help(n, n - 1));
}
int _prime_help(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (_prime_help(n, y - 1));
}
