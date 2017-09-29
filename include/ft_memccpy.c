#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t len)
{
    unsigned char *rd_pnt;
    unsigned char *wrt_pnt;
    int i;

    rd_pnt = src;
    wrt_pnt = dst;
    i = 0;
    while ((unsigned int)rd_pnt[i] != (unsigned int)c && i++ < (int)len)
        wrt_pnt[i - 1] = (unsigned int)rd_pnt[i - 1];

    return dst;
}