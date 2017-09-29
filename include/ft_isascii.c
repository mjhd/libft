int		ft_isascii(int c)
{
	return ((0 <= (unsigned char)c && (unsigned char)c <= 127));
}