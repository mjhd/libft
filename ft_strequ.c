int     ft_strlen_eq(char const *str1, char const *str2)
{
    int a;
    int b;

    a = 0;
    b = 0;
    while(str1[a++] != '\0');
    while(str2[b++] != '\0');
    return (a == b) ? 1 : 0;
}

int		ft_strequ(char const *str1, char const *str2)
{
    int i;

    i = 0;
    if(!ft_strlen_eq(str1, str2))
        return(0);
    while(str1[i++] != '\0')
    {
        if(str1[i - 1] != str2[i - 1])
            return(0);
    }
    return(1);
}
