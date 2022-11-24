#include "main.h"

/**
 * print_error - check.
 * @file_des: file descriptor
 *
 * Return: None.
 */

void print_error(int file_des)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
	exit(100);
}

/**
 * copy - check.
 * @fp_from: param
 * @fp_to: param
 * @buffer: param
 * @str: param
 *
 * Return: None.
 */

void copy(int fp_from, int fp_to, char *buffer, char *str)
{
	while ((wc = read(fp_from, buffer, 1024)) > 0)
	{
		if (wc != write(fp_to, buffer, wc))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			close(fp_from);
			close(fp_to);
			exit(99);
		}
	}
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
	int fp_from, fp_to, wc;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fp_from = open(av[1], O_RDONLY);
	if (av[1] == NULL || fp_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fp_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fp_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(fp_from);
		exit(99);
	}
	copy(fp_from, fp_to, buffer, av[2]);
	if (wc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fp_from) < 0)
		print_error(fp_from);
	if (close(fp_to) < 0)
		print_error(fp_to);
	return (0);
}
