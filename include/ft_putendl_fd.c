#include <unistd.h>

void	ft_putendl_fd(const char *str, int fd)
{
    char endl;

    endl = '\n';
    while(*(++str - 1))
        write(fd, (str - 1), 1);
    write(fd, &endl , 1);
}
