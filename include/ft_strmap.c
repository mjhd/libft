#include <stddef.h>

int		ft_strlen(char const *);
char    *ft_strnew(size_t);

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *str;
	int len;

	len = ft_strlen(s);
	str = ft_strnew(len);
	while(*s)
	{
		*str = f(*s++);
		str++;
	}

	return (str -= len);
}