#include "main.h"

/**
 *_islower - the function is of type int
 *
 *Return: the return value is 0 or 1
 *@c: is to be checked
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
