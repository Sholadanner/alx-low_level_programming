#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: filename
 * @letters: the amount of letters to be printed
 * Return: letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t j, k;
	char *buffer;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
		return (0);
	j = read(i, buffer, letters);
	k = write(STDOUT_FILENO, buffer, j);

	close(i);
	free(buffer);
	return (k);
}
