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

	for (u = 0; u < 9; u++)
	{
		for (t = u + 1; t <= 9; t++)
		{
			if (u != t)
			{
				putchar ('0' + u);
				putchar ('0' + t);

				if (u == 8 && t == 9)
					continue;
					{
					putchar (',');
					putchar (' ');
					}
			}
		}
	}
	putchar ('\n');
	return (0);
}
