#include <stddef.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    const char *pnt;
    int i;

    pnt = NULL;
    while (*haystack)
    {
        i = 0;
        if(*haystack == needle[i] && pnt == NULL)
            pnt = haystack;
        while(*haystack == needle[i] && needle[i])
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
