#include <stdio.h>
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int main()
{
    struct point
    {
        int x;
        int y;
    };
    struct point my_point = {3, 7};
    struct point *p = &my_point;

    int **pp;
    
    
    printf("%lu\n", sizeof(*pp));
}
