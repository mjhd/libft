int ft_atoi(char *val)
{
    int i;
    int length;
    int value;

    length = 0;
    value = 0;
    i = 0;
    while(val[length++] != '\0');
    while(--length)
    {
        if (val[length - 1] == '-')
            value *= -1;
        else
        {
            i = (i == 0) ? 1 : (i * 10);
            value += (i * (val[length - 1] - '0'));
        }
    }

    return value;
}