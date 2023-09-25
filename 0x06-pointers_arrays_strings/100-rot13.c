#include "main.h"

char *rot13(char *s)
{
	int i;
	char rot1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
	int j = 0;
while (rot1[j] != '\0')
{
	if (s[i] == rot1[j])
	{
		s[i] = rot2[j];
	}
	j++;
}
}
return (s);
}
