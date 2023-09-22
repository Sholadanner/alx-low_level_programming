#include "main.h"

/**
 * reverse_array - function to reverse an array of int
 *
 * @a: the array to be reversed
 * @n: the number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start;
	int end;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		int i;

		i = a[start];
		a[start] = a[end];
		a[end] = i;

		start++;
		end--;
	}
}
