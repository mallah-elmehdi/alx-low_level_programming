#include "function_pointers.h"

/**
 * print_name - check the code
 * @name: param
 * @f: param
 *
 * Return: Somthin'.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
