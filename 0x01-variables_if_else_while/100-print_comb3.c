#include <stdio.h>

/**
 * main - the main function for this code uses int data type
 *
 * The aim of this code is to print all the possible combos
 * for two digit numbers
 *
 * Return: the return argument for this code is void, 0
 */

int main(void)
{
	int u;
	int t;

	for (u = 0; u <= 9; u++)
	{
		for (t = 0; t <= 9; t++)
		{
			putchar (u + '0');
			putchar (t + '0');
			putchar (' ');
			putchar (',');
		}
	}
	putchar ('\n');
	return (0);
}
