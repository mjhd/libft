int		ft_isalnum(int c)
{
	return ((65 <= c && c <= 90) || (97 <= c && c <=  122) || (0 <= c && c <=  9));
}