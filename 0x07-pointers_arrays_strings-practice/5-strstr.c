#include "main.h"

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		int j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			j++;
		}
		if ( needle[j] == '\0')
			return (&haystack[i]);
	}
	return ('\0');
}			
