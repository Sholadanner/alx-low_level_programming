#include "main.h"

/**
 * append_text_to_file - function that appends text to a file
 * @filename: the filename
 * @text_content: added text
 * Return: to be determined
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, num_letters, rwr;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);
	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rwr = write(i, text_content, num_letters);

		if (rwr == 1)
			return (-1);
	}
	close(i);
	return (1);
}
