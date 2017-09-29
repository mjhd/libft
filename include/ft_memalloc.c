#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void *pnt;
    pnt = (void *)malloc((int)size);
    return pnt;
}