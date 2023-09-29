#include "main.h"

/**
 * _pow_recursion - a number raised to the power of another number
 * @x: number to look for the power of
 * @y: the power of
 * Return: to be determined
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
