#include "main.h"

int print_last_digit(int i)
{
	int j = i % 10;

	if (i > 0)
	{
		_putchar(j + '0');
	}
	else
	{
		j = j * -1;
		_putchar(j + '0');
	}
	return (j);
}
