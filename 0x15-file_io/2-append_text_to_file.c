#include "main.h"

/**
 * append_text_to_file - check the code
 * @filename: param
 * @text_content: param
 *
 * Return: ...
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;
	ssize_t r;
	char *buff;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);
	if (write(fd, text_content, _strlen(text_content)) < 0)
		return (-1);
	return (1);
}
