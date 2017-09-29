#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *str;
	int i;

	str = (char *)malloc(sizeof(char) * ((int)len + 1));
	i = start;
	while((int)len--)
		*(str++) = s[i++];
	*str = '\0';
	while((i--) - start)
		str--;
	return str;
}
