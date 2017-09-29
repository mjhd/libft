#include "libft.h"

void	*ft_strncpy(char *dst, const char *src, size_t len)
{
    int i;

    i = -1;
    while (src[++i] && i <= (int)len)
        dst[i] = src[i];
    dst[i] = '\0';

    return dst;
}