#include <stdio.h>

int main(void)
{
	char r;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (r != 'e' && r != 'q')
		{
			putchar (r);
		}
	}
	putchar ('\n');
	return (0);
}
