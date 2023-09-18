#include "main.h"

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			c = a * b;
			for (b = 0; b <= n; b++)
			{
				_putchar(c + '0');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
