#include "main.h"
#include <unistd.h>

/**
 * _putchar - the main
 * @c: param
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
