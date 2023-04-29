#include "main.h"

/**
 * create_buffer - allocates bytes to buffer
 * @file: file buffer
 * Return: A pointer to the allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file descriptors.
 * @fd: file descriptor
 */
void close_file(int fd)
{
	int c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file
 * @argc: number of arguments
 * @argv: array of pointers
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	char *buffer;
	int from, to, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (1)
	{
		int r = read(from, buffer, 1024);

		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		if (r == 0)

			break;

		w = write(to, buffer, r);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
