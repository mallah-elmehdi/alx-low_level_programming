#include "../main.h"

/**
 ** _isupper - tests function that prints if integer is positive or negative
 ** @c: param 1
 **
 ** Return: 0
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
