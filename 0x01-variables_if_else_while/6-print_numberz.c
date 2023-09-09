#include <stdio.h>

/**
 * main - the data type for the main function is int
 *
 * Return: the return argument is void, 0
 *
 * The program is aiming to print integers with the use of putchar
 */

int main(void)
{
	int du;

	for (du = 0; du <= 9; du++)
	{
		putchar ('0' + du);
	}
	putchar ('\n');
	return (0);
}
