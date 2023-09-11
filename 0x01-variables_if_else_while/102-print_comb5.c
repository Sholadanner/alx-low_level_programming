#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function for this code is of type int
 *
 *
 * This code aims to print all the possible combinations of
 * two two digit numbers
 *
 * Return: the return argument is void, 0
 */

int main(void)
{
	int u;
	int t;

	for (u = 0; u <= 99; u++)
	{
		for (t = u + 1; t <= 99; t++)
		{
			putchar ((u / 10) + '0');
			putchar ((u % 10) + '0');
			putchar (' ');
			putchar ((t / 10) + '0');
			putchar ((t % 10) + '0');

			if (u == 98 && t == 99)
			continue;
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
