#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
/**
  * append_text_to_file - append text to file
  * @filename: filename
  * @text-content: content
  * description  - append text to file
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedoc;
	ssize_t b_write;

	if (filename == NULL)
		return (-1);

	filedoc = open(filename, O_WRONLY | O_APPEND);

	if (filedoc == -1)
		return (-1);

	if (text_content != NULL)
	{
		b_write = write(filedoc, text_content, strlen(text_content));

		if (b_write == -1)
		{
			close(filedoc);
			return (-1);
		}
	}

	close(filedoc);
	return (1);
}
