#include "libft.h"

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