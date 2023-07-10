#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024
/**
  * print_error - print error
  * @error_message: erroe message
  * description - print error message
  * Return: Void
  */
void print_error(const char *error_message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_message);
}
/**
  * exit_with_error - exit with error
  * @error_message: error message
  * @exit_code; exit code
  * description - exit with error code
  * Return: Void
  */
void exit_with_error(const char *error_message, int exit_code)
{
	print_error(error_message);
	exit(exit_code);
}
/**
  * copy_file - copy file
  * @file_from: file from
  * @file_to: file to
  * decription - copy file
  * Return: Void
  */
void copy_file(const char *file_from, const char *file_to)
{
	int filedoc_from, filedoc_to;
	ssize_t b_read, b_write;
	char buffer[BUFFER_SIZE];

	filedoc_from = open(file_from, O_RDONLY);

	if (filedoc_from == -1)
	{
		exit_with_error("Can't read from file", 98);
	}

	filedoc_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IROTH);

	if (filedoc_to == -1)
	{
		close(filedoc_from);
		exit_with_error("Can't write to file", 99);
	}

	while ((b_read = read(filedoc_from, buffer, BUFFER_SIZE)) > 0)
	{
		b_write = write(filedoc_to, buffer, b_read);

		if (b_write != b_read)
		{
			close(filedoc_from);
			close(filedoc_to);
			exit_with_error("Can't write to file", 99);
		}
	}

	if (b_read == -1)
	{
		close(filedoc_from);
		close(filedoc_to);
		exit_with_error("Can't read from file", 98);
	}

	if (close(filedoc_from) == -1)
	{
		exit_with_error("Can't close filedoc", 100);
	}

	if (close(filedoc_to) == -1)
	{
		exit_with_error("Can't close filedoc", 100);
	}
}
/**
  * main - netry point
  * @argc: argument count
  * @argv: argument variables
  * description - main
  * Return: 0
  */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
	{
		print_error("usage: cp file_from file_to");
		exit(97);
	}

	copy_file(file_from, file_to);

	return (0);
}
