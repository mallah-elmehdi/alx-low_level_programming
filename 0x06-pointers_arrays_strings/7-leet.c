#include "main.h"

/**
 * leet - func
 * @str: param
 *
 * Return: something
 */

char *leet(char *str)
{
	int i;
	int j;
	char *bank[] = {"aeotl", "AEOTL", "43071"};

	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < 5)
		{
			if (bank[0][j] == str[i] || bank[1][j] == str[i])
				str[i] = bank[2][j];
			j++;
		}
		i++;
	}
	return (str);
}
