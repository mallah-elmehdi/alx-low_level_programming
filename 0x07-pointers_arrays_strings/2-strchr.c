#include "main.h"

/**
 * _strlen - func
 * @str: param
 *
 * Return: something.
 */

unsigned int _strlen(char *str)
{
    unsigned int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

/**
 * _strchr - func
 * @s: param
 * @c: param
 *
 * Return: something.
 */

char *_strchr(char *s, char c)
{
    size_t i;
    char *p;

    i = 0;
    p = (char *)s;
    while (i <= _strlen(s))
    {
        if (p[i] == (char)c)
            return (&p[i]);
        i++;
    }
    return (NULL);
}
