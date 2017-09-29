#include "libft.h"

void	ft_putstr_fd(const char *str, int fd)
{
    while(*(++str - 1))
        write(fd, (str - 1), 1);
}
