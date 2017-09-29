#include "libft.h"

int		ft_strnequ(char const *str1, char const *str2, size_t n)
{
    int i;

    i = 0;
    while(str1[i] != '\0' && str2[i] != '\0' && i++ < (int)n)
    {
        if(str1[i - 1] != str2[i - 1])
            return(0);
    }
    return(1);
}