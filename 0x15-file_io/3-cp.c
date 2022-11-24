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
 * copy - check the code
 * @fd_from: param
 * @fd_to: param
 *
 * Return: ...
 */

int copy(int fd_from, int fd_to)
{
	char buff[1025];
	int r;

	while (1)
	{
		r = read(fd_from, buff, 1024);
		if (r < 0)
			return (-1);
		else if (r == 0)
			break;
		buff[r] = 0;
		if (write(fd_to, buff, _strlen(buff)) < 0)
			return (-1);
	}
	return (0);
}

/**
 * main - check the code
 * @ac: param
 * @av: param
 *
 * Return: ...
 */

int main(int ac, char const *av[])
{
	int fd_from;
	int fd_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 664);
	if (fd_to < 0 || copy(fd_from, fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd_from) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
