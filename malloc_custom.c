#include "malloc_custom.h"

void * malloc_custom(size_t size)
{
    void *p = NULL;

    if(size < 1 || (p = sbrk(size)) == (void *) -1)
        return NULL;
    else
        return p;
}
