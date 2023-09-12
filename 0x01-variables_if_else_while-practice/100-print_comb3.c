#include <stdio.h>

int main(void)
{
	int u;
	int t;

	for (u = 0; u <= 9; u++)
	{
		for (t = u + 1; t <= 9; t++)
		{
			putchar (u + '0');
			putchar (t + '0');

			if (u == 8 && t == 9)
			continue;
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
