#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
    int strlen;
    char *str;

    strlen = 0;
    while(*((s1++) + 1) && ++strlen);
    while(*((s2++) + 1) && ++strlen);
    str = (char *)malloc(sizeof(char) * ((++strlen) + 2));
    str[++strlen] = '\0';
    while(strlen--)
        str[strlen] = (*(s2 - 1)) ? *(--s2) : *(--s1);

    return str;
}
