#include "main.h"

/**
 * _calloc - check the code
 * @nmemb: param
 * @size: param
 *
 * Return: somthing.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret;
	int i;

	if (nmemb == 0 && size == 0)
		return (NULL);
	ret = malloc(nmemb * size);
	i = 0;
	if (ret == NULL)
		return (NULL);
	while ((unsigned int)i < nmemb * size)
	{
		((unsigned char *)ret)[i] = '\0';
		i++;
	}
	return (ret);
}
