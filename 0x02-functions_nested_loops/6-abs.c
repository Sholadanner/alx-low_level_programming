#include "main.h"

/**
 * _abs - function has an int data type
 *
 * Return: return value is abs_val or c
 *
 * @c: to be checked
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	else
		return (c);
}
