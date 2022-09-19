#include "main.h"
/**
 * rev_string - check the code
 * @s: param
 *
 * Return: ...
 */

void rev_string(char *s)
{
	int i;
	int j;
	char c;

	i = 0;
	j = _strlen(s) - 1;
	while (j >= i)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		j--;
		i++;
	}
}
