#include "main.h"

char *_strcat(char *dest, char *src)
{
	int i;
	int destend = 0;
	int srcend = 0;

	for (i = 0; dest[i] != '\0'; i++)
		destend++;
	for (i = 0; src[i] != '\0'; i++)
		srcend++;
	for (i = 0; i <= srcend; i++)
	{
		dest[destend + i] = src[i];
	}
	return (dest);
}
