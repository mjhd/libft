#include <stddef.h>

void	*ft_memset(void *dst, int c, size_t len)
{
    unsigned char *wrt_pnt;
    int i;

    wrt_pnt = dst;
    i = 0;
    while (i < (int)len)
        wrt_pnt[i++] = (unsigned int)c;

    return dst;
}