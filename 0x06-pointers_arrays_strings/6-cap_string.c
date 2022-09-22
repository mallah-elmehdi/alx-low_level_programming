#include "main.h"

/**
 ** _isalpha - function
 ** @c: param 1
 **
 ** Return: 0
 **/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

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
			if (_isalpha(str[i]))
				cap = 0;
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else
		{
			if (str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == ' ' || str[i] == '\t')
				cap = 1;
		}
		i++;
	}
	return (str);
}
