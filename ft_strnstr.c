#include <stddef.h>
int		ft_strlen(char const *);

char    *ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    const char *pnt;
    int i;

    pnt = NULL;
    while (*haystack && (int)n - 1)
    {
        i = 0;
        if(*haystack == needle[i] && pnt == NULL)
            pnt = (ft_strlen(needle) > (int)n) ? NULL : haystack;
        n--;
        while(pnt != NULL && *haystack == needle[i] && needle[i])
        {
            if(*++haystack != needle[++i] && needle[i] != '\0')
            {
                pnt = NULL;
                haystack--;
            }
            if(needle[i] == '\0' && pnt != NULL)
                return (char *)pnt;
        }
        haystack++;
    }

    return NULL;
}
