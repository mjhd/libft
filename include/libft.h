#include <stdlib.h>
#include <unistd.h>

// 42 LIST STRUCT:

typedef struct s_list
{
    void *content;
    size_t content_size;
    struct s_list *next;
} t_list;



// DOERS:

void    ft_putchar(char); // <unistd.h>
void    ft_putstr(const char *); // ft_putchar(char); !!!!!!!!!!!!! fix to: (const char *) -> HERE an ft_putstr.c
void    ft_putendl(const char *);
void    ft_putnbr(int); // ft_putchar(char);

void	ft_putchar_fd(char, int);
void	ft_putstr_fd(const char *, int);
void	ft_putendl_fd(const char *, int); // <unistd.h>
void    ft_putnbr_fd(int, int); // <unistd.h>

int     ft_atoi(char *);
char    *ft_itoa(int); // <stddef.h> // *ft_memalloc(size_t)

void    *ft_memalloc(size_t); // <stdlib.h>
void    ft_memdel(void **);
void	*ft_memset(void *, int, size_t); // <stddef.h>
void	*ft_memcpy(void *, void *, size_t); // <stddef.h>
void	*ft_memccpy(void *, void *, int, size_t); // <stddef.h>
void	*ft_memmove(void *, void *, size_t); // <stddef.h>

void	ft_bzero(void *, size_t); // <stddef.h>
void	*ft_strcpy(char *, const char *);
char    *ft_strdup(const char *); // ft_strlen(char const *) // <stddef.h> // *ft_memalloc(size_t)
void	*ft_strcpy(char *dst, const char *src);
void	*ft_strncpy(char *, const char *, size_t); // <stddef.h>
char 	*ft_strtrim(char const *); // ft_strlen(char const *) // <stddef.h> // *ft_memalloc(size_t)
char    *ft_strcat(char *, const char *);
char	*ft_strncat(char *, const char *, size_t); // <stddef.h>
size_t	ft_strlcat(char *, const char *, size_t); // <stddef.h>
char    *ft_strsub(char const *, unsigned int, size_t); // <stdlib.h>
char	*ft_strjoin(const char *, const char *); // <stdlib.h>
char    **ft_strsplit(char const *, char); // <stdlib.h>

void    ft_striter(char *, void (*f)(char *));
void    ft_striteri(char *, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *, char (*f)(char));  // #include <stddef.h> // int ft_strlen(char const *); // char *ft_strnew(size_t);
char    *ft_strmapi(char const *, char (*f)(unsigned int, char)); // #include <stddef.h> // int ft_strlen(char const *); // char *ft_strnew(size_t);

int		ft_toupper(int);
int		ft_tolower(int);

char    *ft_strnew(size_t); // <stddef.h>
void    ft_strdel(char **);
void    ft_strclr(char *);

t_list  *ft_lstnew(void const *, size_t); // #include <stddef.h> // #include "libft.h"
void	ft_lstadd(t_list **, t_list *); // #include <stddef.h> // #include "libft.h"
void	ft_lstadd_end(t_list **, t_list *); // #include <stddef.h> // #include "libft.h"
void	ft_lstdelone(t_list **, void (*del)(void *, size_t)); // #include "libft.h"
void	ft_lstdel(t_list **, void (*del)(void *, size_t)); // #include "libft.h"
void    ft_lstiter(t_list *, void (*f)(t_list *));
t_list  *ft_lstmap(t_list *, t_list *(*f)(t_list *));


// CHECKERS:

int     ft_isdigit(int);
int		ft_isalpha(int);
int		ft_isalnum(int);
int		ft_isascii(int);
int		ft_isprint(int);

int     ft_memcmp(void *, void *, size_t); // <stddef.h>
void    *ft_memchr(const void *, int, size_t); // <stddef.h>

int		ft_strlen(char const *);
int		ft_strequ(char const *, char const *);
int		ft_strnequ(char const *, char const *, size_t); // <stddef.h>

char    *ft_strchr(const char *, int);
char    *ft_strrchr(const char *, int);
char    *ft_strstr(const char *, const char *);
char    *ft_strnstr(const char *, const char *, size_t);
int     ft_strcmp(const char *, const char *);
