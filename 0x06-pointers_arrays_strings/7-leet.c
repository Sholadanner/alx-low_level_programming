#include "main.h"

char *leet(char *str)
{
	char *original;

	original = str;

	while (*str != '\0')
	{
		if ((*str == 'a' || *str == 'A')
				(*str == 'e' || *str == 'E')
				(*str == 'o' || *str == 'O')
				(*str == 't' || *str == 'T')
				(*str == 'l' || *str == 'L'))
		{
			switch (*str)
			{
				case 'a':
				case 'A':
				*str = '4';
				break;
				case 'e';
				case 'E';
				*str = '3';
				break;
				case 'o';
				case 'O';
				*str = '0';
				break;
				case 't';
				case 'T';
				*str = '7';
				break;
				case 'l';
				case 'L';
				break;
			}
		}
		str++;
	}
	return (original);
}
