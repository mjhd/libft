#include "libft.h"

char 	*ft_strtrim(char const *s) {
    char *output;
    int strlength;
    int whitespace[2];

    whitespace[0] = (s[0] == ' ' || s[0] == '\n' || s[0] == '\t') ? 1 : 0;
    strlength = ft_strlen(s);
    whitespace[1] = (s[strlength - whitespace[0]] == ' ' || s[strlength - whitespace[0]] == '\n' || s[strlength - whitespace[0]] == '\t') ? 1 : 0;
    strlength = (strlength - whitespace[0] - whitespace[1]);
    output = (char *)ft_memalloc(sizeof(char) * (strlength + 1));
    whitespace[1] = whitespace[0];
    while (whitespace[0] < strlength + whitespace[1])
    {
        output[whitespace[0] - whitespace[1]] = s[whitespace[0]];
        whitespace[0]++;
    }
    output[strlength] = '\0';
    return output;
}