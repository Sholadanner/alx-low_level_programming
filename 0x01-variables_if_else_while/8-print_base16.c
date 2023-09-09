#include <stdio.h>

/**
 * main - the funtion main has an int data type
 *
 * Return: the return argument is void, 0
 *
 * The aim of this code is to print all base 16 numbers
 */

int main(void)
{
	int ds;
	char od;

	for (ds = 0; ds <=10; ds++)
	{
		putchar ('0' + ds);
	} for (od = 'a'; od <= 'f'; od++)
	{
		putchar (od);
	}
	putchar ('\n');
	return (0);
}
