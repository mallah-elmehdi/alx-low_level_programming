#include "main.h"
/**
 * puts_half - check the code
 * @str: param
 *
 * Return: ...
 */

void puts_half(char *str)
{
	if (str)
	{
		_put(str + (_strlen(str) / 2));
	}
}
