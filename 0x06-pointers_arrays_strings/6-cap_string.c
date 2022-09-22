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
 ** issep - function
 ** @c: param 1
 **
 ** Return: 0
 **/

int issep(char c)
{
	if (c == ',' || c == ';'
	|| c == '.' || c == '!'
	|| c == '?' || c == '\"'
	|| c == '(' || c == ')'
	|| c == '{' || c == '}'
	|| c == ' ' || c == '\t'
	|| c == '\n')
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

	i = 0;
	while (str[i])
	{
		if (_isalpha(str[i]))
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
			i++;
			while (str[i] && !issep(str[i]))
			{
				if (str[i] >= 65 && str[i] <= 90)
					str[i] += 32;
				i++;
			}
			i--;
		}
		i++;
	}
	return (str);
}
