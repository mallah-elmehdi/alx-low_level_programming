#include "main.h"

/**
 * cap_string - func
 * @str: param
 *
 * Return: something
 */

char *cap_string(char *str)
{
	int i;
	int cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if (cap)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] -= 32;
				cap = 0;
			}
		}
		else
		{
			if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == ']' || str[i] == ' ' || str[i] == '\t')
				cap = 1;
		}
		i++;
	}
	return (str);
}
