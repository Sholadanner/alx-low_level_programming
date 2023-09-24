#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int destend = 0;
	int srcend = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destend++;
	for (i = 0; src[i] != '\0'; i++)
		srcend++;
	for (i = 0; i <= srcend && n > 0; i++)
	{
		dest[destend + i] = src[i];
		n--;
	}
	return (dest);
}
