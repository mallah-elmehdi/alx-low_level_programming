#include "main.h"
/**
 * puts2 - check the code
 * @str: param
 *
 * Return: ...
 */

void puts2(char *str)
{
	int i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			if (!str[i + 1])
				break;
			i += 2;
		}
		write(1, "\n", 1);
	}
}
