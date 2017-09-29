#include "libft.h"

char    *ft_strdup(const char *str)
{
    char *new_str;
    char *new_str_pnt;

    new_str = (char *)ft_memalloc(sizeof(char) * (ft_strlen(str) + 1));
    new_str_pnt = &new_str[0];
    if (str[0])
        *new_str = *str;

    while(*str != '\0' && new_str++ != str++)
        *new_str = *str;

    return new_str_pnt;
}