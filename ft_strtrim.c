#include "libft.h"

char 	*ft_strtrim(char const *s) {
    int i;
    char *output;

    output = s;
    i = 0;
    while ((*s == ' ' || *s == '\n' || *s == '\t') && *s++)
        output++;
    while(*s && *s++ && ++i);
    s--;
    while((*s == ' ' || *s == '\n' || *s == '\t') && i-- && *s--);
    s = output;
    output = (char *)memalloc(sizeof(char) * (i + 1));
    while(*s && i--)
    {
        (*output) = *s++;
        output++;
    }
    *output = '\0';

    return output;
}