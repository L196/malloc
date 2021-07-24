#include "malloc_custom.h"
#include <stdio.h>

int main(void)
{
    void *p = NULL;

    printf("%p\n", malloc_custom(0));
    printf("%p\n", malloc_custom(1));
    printf("%p\n", sbrk(0));
    p = malloc_custom(1000000);
    printf("%p\n", p);
    printf("%p\n", sbrk(0));

    int a;
    a = getchar();

    return 0;
}
