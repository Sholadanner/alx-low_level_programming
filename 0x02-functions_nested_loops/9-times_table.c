#include "main.h"
/**
 * times_table - return type is void
 *
 * Return: return value is void
 */

void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			_putchar (result + '0');
		}
		_putchar ('\n');
	}
}
