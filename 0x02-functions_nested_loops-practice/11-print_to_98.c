#include <stdio.h>

void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
