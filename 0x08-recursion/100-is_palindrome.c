#include "main.h"

/**
 * _strlen - check the code
 * @s: param
 *
 * Return: ...
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s && s[i])
	{
		i++;
	}
	return (i);
}

/**
 * help - check the code
 * @s: param
 * @start: param
 * @last: param
 *
 * Return: something
 */

int help(char *s, int start, int last)
{
	if (start == last || last < start)
		return (1);
	if (s[start] == s[last])
		return (help(s, start + 1, last - 1));
	return (0);
}

/**
 * is_palindrome - check the code
 * @s: param
 *
 * Return: something
 */

int is_palindrome(char *s)
{
	if (!s || !_strlen(s))
		return (1);
	return (help(s, 0, _strlen(s) - 1));
}
