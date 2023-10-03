#include <stdio.h>

/**
 * main - print all arguments
 * @agrc: argument count
 * @agrv: argument vector
 * Return: 0
 */

int main(int agrc, char *agrv[])
{
	int i;

	for (i = 0; i < agrc; i++)
	{
		printf("%s\n", agrv[i]);
	}
	return (0);
}
