#include "main.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		i++;
	}
	return (i);
}

/**
 * create_file - check the code
 * @filename: param
 * @text_content: param
 *
 * Return: ...
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-18);
	if (write(fd, text_content, _strlen(text_content)) < 0)
		return (-1);
	return (1);
}
