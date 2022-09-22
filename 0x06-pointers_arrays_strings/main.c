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
    char str[] = "ExpEct    TTe best. Prepare for tJHGDFJHDBSJFGDGFDHSGFFJBDFJJDSJFGDGFJDGSJFG KUDFJDGHJKGFDGFJGSDFKGDJKSGFJDSHGFJKDGSFJGDJSFG worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    return (0);
}