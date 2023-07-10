#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read textfile
 * @filename: filename
 * @letters: letters to read and print
 * description - read and print file
 * Return: number, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedoc;
	char *buffer;
	ssize_t b_read;
	ssize_t b_write;

	if (filename == NULL)
		return (0);

	filedoc = open(filename, O_RDONLY);

	if (filedoc == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
	{
		close(filedoc);
		return (0);
	}

	b_read = read(filedoc, buffer, letters);
	if (b_read <= 0)
	{
		free(buffer);
		close(filedoc);
		return (0);
	}

	buffer[b_read] = '\0';

	b_write = write(STDOUT_FILENO, buffer, (size_t)b_read);

	free(buffer);
	close(filedoc);

	if (b_write < 0 || (size_t)b_write != (size_t)b_read)
		return (0);

	return b_read;
}
