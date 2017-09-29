#include <stddef.h>

int		ft_strlen(char const *);
char    *ft_strnew(size_t);

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