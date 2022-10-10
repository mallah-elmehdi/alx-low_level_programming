#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *file = __FILE__;
	int i = 0;

	while (file[i])
		_putchar(file[i++]);
	_putchar('\n');
	return (0);
}
