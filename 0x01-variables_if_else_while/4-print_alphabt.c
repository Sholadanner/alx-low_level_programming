#include <stdio.h>

/**
 * main - the main data type for this program is char
 *
 * Return: the argument return is void, 0
 *
 * This program aims to print out the letters of the alphabet
 * with the letter q and e being excluded
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar (ch);
		}
	}
	putchar ('\n');
	return (0);
}
