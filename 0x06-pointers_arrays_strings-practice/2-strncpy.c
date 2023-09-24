#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int srcend = 0;

	for (i = 0; src[i] != '\0'; i++)
		srcend++;
	for (i = 0; i <= srcend && n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
