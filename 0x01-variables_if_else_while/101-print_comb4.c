#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - the main function for this code is of type int
 *
 * The aim of the code is to print out combinations for 
 * three digit numbers
 *
 * Return: the return argument for this code is void, 0
 */

int main(void)
{
	int h;
	int t;
	int u;

	for (u = 0; u <= 9; u++)
	{
		for (t = u + 1; t <= 9; t++)
		{
			for (h = t + 1; h <= 9; h++)
			{
				if (u != t && u != h && h != t)
				{
					putchar ('0' + u);
					putchar ('0' + t);
					putchar ('0' + h);

					if (u == 7 && t == 8 && h == 9)
					continue;
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
