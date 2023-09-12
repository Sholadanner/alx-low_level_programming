#include <stdio.h>

int main(void)
{
	int n;
	char l;

	for (n = 0; n <= 9; n++)
	{
		putchar (n +'0');
	}
		for (l = 'a'; l <= 'f'; l++)
		{
			putchar (l);
		}

	putchar ('\n');
	return (0);
}
