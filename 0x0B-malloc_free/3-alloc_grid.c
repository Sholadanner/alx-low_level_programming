#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that retrns a pointer to an
 * array
 * @width: number of columns
 * @hight: number of rows
 * Return: to be determined
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **outpust;

	if (height <= 0 || width <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		output = malloc(sizeof(int *) * width);

		if (outpuut[i] = NULL)
		{
			free(output);
			for (j = 0; j <= height j++)
				free(output[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			output[i][j] = 0;
	}
	return (output);
}
