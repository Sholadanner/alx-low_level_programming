#include "main.h"

/**
 * _isupper - has an int data type
 *
 * Return: to be calculated
 *
 * @c: value for the alphabets
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
