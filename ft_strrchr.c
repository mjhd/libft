#include <stddef.h>

char    *ft_strrchr(const char *s, int c)
{
    const char *pnt;

    pnt = NULL;
    while(s != '\0')
    {
        pnt = (*s == (char) c) ? s : pnt;
        s++;
    }

    return (char *)pnt;
}
