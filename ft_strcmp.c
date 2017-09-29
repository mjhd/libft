int     ft_strcmp(const char *str_a, const char *str_b)
{
    int diff;

    diff = -1;
    while(str_a[++diff] && str_a[diff] == str_b[diff]);
    diff = (int)str_a[diff] - (int)str_b[diff];

    return diff;
}
