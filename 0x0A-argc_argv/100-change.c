#include <stdio.h>
#include <stdlib.h>

/**
 * main - funtion to calculates number of coins
 * needed for change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 if unsuccessful
 */

int main(int argc, char *argv[])
{
	int num, j, solution;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	solution = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			solution++;
			num -= coins[j];
		}
	}

	printf("%d\n", solution);
	return (0);
}
