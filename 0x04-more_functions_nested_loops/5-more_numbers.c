#include "main.h"

void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i != 14)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
