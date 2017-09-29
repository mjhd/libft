#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
    unsigned char *rd_pnt;
    unsigned char *wrt_pnt;
    int i;

    rd_pnt = src;
    wrt_pnt = dst;
    if(dst == src)
        return dst;
    i = (src > dst) ? 0 : len;
    while (src > dst && i++ < (int) len)
        wrt_pnt[i - 1] = (unsigned int) rd_pnt[i - 1];
    while (src < dst && i-- > 0)
        wrt_pnt[i] = (unsigned int) rd_pnt[i];

    return dst;
}