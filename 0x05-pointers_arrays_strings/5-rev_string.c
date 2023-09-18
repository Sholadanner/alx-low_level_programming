#include "main.h"

void rev_string(char *s);
{
	int len = , int index = 0;
	char tmp;

	while (s[index++])
		lens++;
	
	for (index = len - 1 ; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
