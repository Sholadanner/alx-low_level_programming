#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the filename
 * @text_content: content of the file
 * Return: to be determined
 */

int create_file(const char *filename, char *text_content)
{
	int i, num_letters, rwr;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rwr = write(i, text_content, num_letters);

	if (rwr == 1)
		return (-1);
	close (i);
	return (1);
}
