#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to multiply two numbers
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 if successful and 1 is unsuccessful
 */

int main(int argc, char *argv[])
{
	int n1 = 0;
	int n2 = 0;

	if (argc == 3)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		printf("%d\n", n1 * n2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
