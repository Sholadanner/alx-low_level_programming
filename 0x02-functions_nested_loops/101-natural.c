#include <stdio.h>

int main(void)
{
	int a;
	int b = 0;
	
	while (a < 1020)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			b += a;
		}
		a++
	}
	printf("%d", b);
	return (0);
}
