#include "main.h"

/**
 * read_textfile - check the code
 * @filename: param
 * @letters: param
 *
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len = 0;
	ssize_t r;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(letters + 1);
	if (buff == NULL)
		return (0);
	while (1)
	{
		r = read(fd, buff, letters);
		if (r < 0)
		{
			free(buff);
			return (0);
		}
		else if (r == 0)
			break;
		r = write(STDOUT_FILENO, buff, r);
		if (r < 0)
		{
			free(buff);
			return (0);
		}
		len += r;
	}
	free(buff);
	return (len);
}
