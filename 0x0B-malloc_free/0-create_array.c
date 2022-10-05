#include "main.h"

/**
 * create_array - see the code
 * @size: param
 * @c: param
 *
 * Return: Something.
 */

char *create_array(unsigned int size, char c)
{
	char *ret;
	unsigned int i;

	i = 0;
	if (!size)
		return (NULL);
	ret = malloc(size + 1);
	if (ret == NULL)
		return (NULL);
	while (i < size)
	{
		ret[i] = c;
		i++;
	}
	ret[i] = 0;
	return (ret);
}
