#include "libft.h"

char    *ft_strnew(size_t size)
{
    char *str;
    str = (char *)malloc((int)size + 1);
    str[size] = '\0';

    return str;
}
