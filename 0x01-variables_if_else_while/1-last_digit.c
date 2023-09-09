#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the program shows main with int type return
 *
 * Return: the return for this program is void, 0
 *
 * this program aim to print the last digit of a random numbers
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	m = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	} if else (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	} else
	{
		printf("Last digit of %d is %d and is is less than 6 and not 0\n", n, m);
	return (0);
	}
}
