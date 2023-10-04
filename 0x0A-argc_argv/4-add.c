#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to sum numbers
 * @argc: number of arguments passed
 * @argv: array of elements in the agruments
 * Return: 0 if successful and 1 is unsuccessful
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int j;

				for (j = 0; argv[i][j] != '\0'; j++)
				{
				if (argv[i][j] < 48 || argv[i][j] > 59)
						{
							printf("Error\n");
							return (1);
						}
				}
				sum = sum + atoi(argv[i]);

		}
		printf("%d\n", sum);
	}
	return (0);
}
