#include <stddef.h>
int		ft_strlen(char const *);

char	*ft_strncat(char *dest, const char *src, size_t n)
{
    int i;

    i = -1;
    if(ft_strlen(src) < (int)n || (int)n == 0)
        return dest;
    while(dest[++i] != '\0');
    while(*src != '\0' && ((int)n < 0 || (int)n--))
        dest[i++] = *src++;
    dest[i] = '\0';

    return dest;
}
