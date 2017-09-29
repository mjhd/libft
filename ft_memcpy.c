#include <stddef.h>

void	*ft_memcpy(void *dst, void *src, size_t len)
{
    unsigned char *rd_pnt;
    unsigned char *wrt_pnt;
    int i;

    rd_pnt = src;
    wrt_pnt = dst;
    i = 0;
    while (i++ < (int)len)
        wrt_pnt[i - 1] = (unsigned int)rd_pnt[i - 1];

    return dst;
}