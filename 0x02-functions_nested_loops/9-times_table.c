#include "main.h"
/**
 * times_table - return type is void
 *
 * Return: return value is void
 */

void times_table(void)
{
	int x = 9;
	int y;

	for (y = 0; y <= 12; y++)
	{
		_putchar ((x*y) + 0);
	}
}
