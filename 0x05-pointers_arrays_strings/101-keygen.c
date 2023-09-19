#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - int data type
 *
 * Return: 0;
 */

int main(void)
{
	char p[84];
	int i = 0, s = 0, d1, d2;

	srand(time(0));
	while (s < 2772)
	{
		p[i] = 33 + rand() % 94;
		s =+ p[i++];
	}
	p[i] = '\0';
	if (s != 2772)
	{
		d1 = (s - 2772) / 2;
		d2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			d1++;
		for (i = 0; p[i]; i++)
		{
			if (p[i] >= (33 + d1))
			{
				p[i] -= d1;
				break;
			}
		}
		for (i = 0; p[i]; i++)
		{
			if (p[i] >= (33 + d2))
				p[i] -= d2;
			break;
		}
	}
	printf("%s", p);
	return (0);
}
