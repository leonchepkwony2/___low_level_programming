#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename:  name of the text file to read
 * @letters: number of letters to read and print.
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != n)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (n);
}
