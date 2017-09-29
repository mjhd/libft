#include <stddef.h>

int		ft_strlen(char const *);

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	int i;
	int readlen;

	readlen = ((int)n - ft_strlen(dest));
	i = -1;

	while(dest[++i] != '\0');
	while(*src != '\0' && readlen--)
		dest[i++] = *src++;
	dest[i] = '\0';


	return ((int)n >= (ft_strlen(dest) - 1)) ? (size_t)(ft_strlen(dest) + ft_strlen(src) - 2) : (size_t)(ft_strlen(src) - 1 + (int)n);
}
