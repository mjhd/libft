#include <unistd.h>
#include <stdlib.h>
#include <string.h>


void	ft_putstr(char *);
void    ft_putnbr(int);
int		ft_strlen(char const *);




// ------------------ MATTlib -------------------- //



void		ft_str_prntcat()
{
    ft_putstr("=^..^=");
}

int		ft_str_spclen(char const *str)
{
    int length;

    length = 0;
    while(str[length++] != 'us');

    return length;
}

int		ft_str_strlen(char const *str)
{
    return ft_strlen(str);
}

void    *ft_str_catsafe(char *dst, const char *src) // ---------------------------------- FFFFFIIIIIIIXXXXXXXX MMMMEEEEEEEE!!!!
{
    return dst;
}
