#include <stdio.h>

/**
 * main - the data type for this code is char
 *
 * Return: the return for this argument is void, 0
 *
 * This program aims to print the letters of the alphabet
 * in both upper and lower case
 */

int main(void)
{
	char dd;

	for (dd = 'a'; dd <= 'z'; dd++)
	{
		putchar(dd);
	} for (dd = 'A'; dd <= 'Z'; dd++)
	{
		putchar(dd);
	}
	putchar('\n');
	return (0);
}

