#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *str;
	int len;
	unsigned int i;

	len = ft_strlen(s);
	str = ft_strnew(len);
	i = 0;
	while(*s)
	{
		*str = f(i++, *s++);
		str++;
	}

	return (str -= len);
}