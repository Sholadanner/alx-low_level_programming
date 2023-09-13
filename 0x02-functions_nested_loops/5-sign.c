#include "main.h"

/**
 * Print_sign - thi function is of type int
 *
 * Return: the return value will be either 0, 1, or -1
 *
 * @n: to be checked
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar (0 +'0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
