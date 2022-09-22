#include "main.h"
#include <stdio.h>
#include <string.h>
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "a\ta\na,a;a.a!a?a\"a(a)a{a}a";
    char *ptr;

    ptr = cap_string(str);
    printf("%s\n", str);
    return (0);
}