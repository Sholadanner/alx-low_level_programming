#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function which concatenates all the arguments
 * of a program
 * @ac: argument count
 * @ac: arguments to be concatenated
 * Return: to be determined
 */

char *argstostr(int ac, char **av)
{
	int vh, i, j, k, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			vh++;
			j++;
		}
		j = 0;
		i++;
	}
	str = malloc((sizeof(char) * vh) + ac + 1);

	i =0;
	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}
		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}
	k++;
	s[k] = '\0';
	return (str);
}
