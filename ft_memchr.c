#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    (void)s--;
    while((int)n-- && *(const char *)++s != c);

    return (*((const char *)s) == c) ? (void *)s : NULL;
}