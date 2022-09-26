#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "shdjg";
    char *f = "s0shd";
    unsigned int n;
    unsigned int m;

    n = _strspn(s, f);
    m = strspn(s, f);
    printf("_ = %u\n", n);
    printf("<> = %u\n", m);
    return (0);
}
