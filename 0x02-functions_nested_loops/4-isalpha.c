#include "main.h"

/**
 * _isalpha - is of type int
 *
 * Return: the return value is eithe 0 or 1
 *
 * @c: is to be checked
 */

int _isalpha(int c)
{
	int j;

	if (j >= 'a' && j<= 'z' && j >= 'A' && j <= 'Z')
		return (1);
	else
		return (0);
}

