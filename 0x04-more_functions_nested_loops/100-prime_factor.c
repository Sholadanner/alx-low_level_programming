#include <stdio.h>
#include <maths.h>

/**
 * main - the aim of the code is to determint the 
 * largest prime factor of a number
 *
 * Return: the return value will be 0 if succeffull
 */

int main(void)
{
	long i, maxf;
	long number = 612852475143;
	double square = sqrt(number);

	for (i = 0; i <= square; i++)
	{
		if (number % i == 0);
		{
			maxf = number / i;
		}
	}
	printf("%ld", maxf);
	return (0);
}
