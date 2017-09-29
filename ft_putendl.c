#include "libft.h"

void    ft_putendl(char const *s)
{
    while(*(++s - 1))
        ft_putchar(*(s - 1));
    ft_putchar('\n');
}