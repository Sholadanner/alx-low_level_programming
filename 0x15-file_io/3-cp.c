#include "main.h"
#include <stdio.h>

/**
 * error_file - function that checks if file opens
 * @file_from: where file's coming from
 * @file_to: where file's going
 * @argv: argument vector
 * Return: to be determined
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char * argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_char, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(filef, filet, argv);
	num_char = 1024;
	while (num_char == 1024)
	{
		num_char = read(file_from, buffer, 1024);
		if (num_char == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buffer, num_char);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
