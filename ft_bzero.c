#include <stddef.h>

void	ft_bzero(void *dst, size_t len)
{
    unsigned char *wrt_pnt;
    int i;

    wrt_pnt = dst;
    i = 0;
    while (i < (int)len)
        wrt_pnt[i++] = (unsigned char)'0';
}