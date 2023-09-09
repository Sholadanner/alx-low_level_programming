#include <stdio.h>

/**
 * main - the data type for the main function is int
 *
 * Return: the return argument is void, 0
 *
 * This code aims to print the lettrs of the alphabet in revers
 */

int main(void)
{
	char mu;

	for (mu = 'z'; mu >= 'a'; mu--)
	{
		putchar (mu);
	}
	putchar ('\n');
	return (0);

}
