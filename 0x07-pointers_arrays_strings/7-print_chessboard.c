#include "main.h"

/**
 * print_chessboard - func
 * @a: param
 *
 * Return: something.
 */

void print_chessboard(char (*a)[8])
{
    int i;
    int j;

    i = 0;
    while (i < 8)
    {
        j = 0;
        while (j < 8)
        {
            putchar(a[i][j]);
            j++;
        }
        putchar('\n');
        i++;
    }
}
