#include "main.h"

void reverse_array(int *a, int n)
{
	int i;
	int copy;

	for (i = 0; i < n / 2; i++)
	{
		copy = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = copy;
	}
}
