#include "main.h"

void swap_int(int *a, int *b)
{
	int i;

	i = *b;
	*a = *b;
	*b = i;
}
