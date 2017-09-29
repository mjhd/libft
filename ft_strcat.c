char    *ft_strcat(char *dest, const char *src)
{
    int i;

    i = -1;
    while(dest[++i] != '\0');
    while(*src != '\0')
        dest[i++] = *src++;
    dest[i] = '\0';

    return dest;
}
