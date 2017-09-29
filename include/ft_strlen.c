int		ft_strlen(char const *str)
{
	int length;

	length = -1;
	while(str[++length] != '\0');

	return length;
}