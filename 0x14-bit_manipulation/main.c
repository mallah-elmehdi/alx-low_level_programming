
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;
    int ok;

    n = 2048;
    ok = clear_bit(&n, 20);
    printf("%lu|%d\n", n, ok);
    return (0);

}
