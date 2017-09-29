#include "libft.h"

int     ft_memcmp(void *str_a, void *str_b, size_t len)
{
    unsigned char *str_pnt_a = str_a;
    unsigned char *str_pnt_b = str_b;
    int diff;
    int i;

    diff = 0;
    i = 0;
    while (i++ < (int)len)
        diff += (int)(*str_pnt_a++ - *str_pnt_b++);

    return diff;
}