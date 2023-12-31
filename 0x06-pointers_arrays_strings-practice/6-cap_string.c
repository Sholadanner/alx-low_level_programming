#include "main.h"

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i - 1] == '.' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '!' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}' ||
			s[i - 1] == ' ' ||
			s[i - 1] == '\n' ||
			s[i - 1] == '\t' ||
			i == 0)
			s[i] -= 32;
	}
	return (s);
}
