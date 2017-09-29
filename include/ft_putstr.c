void	ft_putchar(char);

void	ft_putstr(const char *str)
{
	while(*str)
		ft_putchar(*(str++));
}