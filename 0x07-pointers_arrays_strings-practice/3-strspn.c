#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int found;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
		count++;
	}
	return (count);
}
