#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: param
 * @n: param
 *
 * Return: somthing.
 */

void print_all(const char *const format, ...)
{
    int i;
    int j;
    int k;
    char *tmp;
    typedef int _int;
    typedef char _char;
    typedef char *_str;
    typedef float _float;
    char list[4] = {'c', 'i', 'f', 's'};
    char list[4] = {'c', 'i', 'f', 's'};
    va_list ap;

    tmp = malloc(1000);
    i = 0;
    k = 0;
    va_start(ap, format);
    while (format && format[i])
    {
        j = 0;
        while (list[j])
        {
            if (list[j] == format[i])
            {
                tmp[k++] = '%';
                tmp[k++] = list[j];
                tmp[k++] = ', ';
            }
            j++;
        }

        i++;
    }
    va_end(ap);
}
