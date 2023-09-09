#include <stdio.h>

/**
 * main - the main function has a int data type
 *
 * Return: the return for the argument is void, 0
 *
 * This program aims to print out all single digit numbers
 * in base 10.
 */

int main(void)
{
	int u;

	for (u = 0; u <= 9; u++)
	{
		printf("%d", u);
	}
       printf("\n");	
	return (0);
}
