#include "main.h"

char *string_toupper(char *ltu)
{
	int i;

	for (i = 0; ltu[i] != '\0'; i++)
	{
		if (ltu[i] >= 'a' && ltu[i] <= 'z')
		{
			ltu[i] = ltu[i] - 32;
		}
	}
	return (ltu);
}
