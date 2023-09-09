#include <stdio.h>

/**
 * main - the main function for this code uses int data type
 *
 * This code aims to generate all possible combination for
 * single digit numbers
 *
 * Return: the return value is void, 0
 */

int main(void)
{
	int al;

	for (al = 0; al <=9; al++)
	{
		putchar ('0' + al);
	}
	if (al < 9)
	{
		putchar (',');
		putchar (' ');
	}
	else
	putchar ('\n');
	return (0);
}
