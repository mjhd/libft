#include "libft.h"

int     ft_strncmp(const char *str_a, const char *str_b, size_t n)
{
    int diff;

    diff = -1;
    while(str_a[++diff] && (int)n > (diff + 1) && str_a[diff] == str_b[diff]);
    diff = (int)str_a[diff] - (int)str_b[diff];

    return diff;
}
