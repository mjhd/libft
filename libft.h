/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhouser <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/29 11:59:54 by mhouser           #+#    #+#             */
/*   Updated: 2017/09/29 12:00:00 by mhouser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;



void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);

int					ft_atoi(char *n);
char				*ft_itoa(int n);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_memset(void *dst, int c, size_t size);
void				*ft_memcpy(void *dst, void *src, size_t size);
void				*ft_memccpy(void *dst, void *src, int c, size_t size);
void				*ft_memmove(void *dst, void *src, size_t size);

void				ft_bzero(void *dst, size_t size);
void				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *s);
void				*ft_strcpy(char *dst, const char *src);
void				*ft_strncpy(char *dst, const char *src, size_t size);
char				*ft_strtrim(char const *s);
char				*ft_strcat(char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strsub(char const *s, unsigned int start, size_t size);
char				*ft_strjoin(const char *s1, const char *s2);
char				**ft_strsplit(char const *s, char c);

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_toupper(int c);
int					ft_tolower(int c);

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstadd(t_list **alst, t_list *new_link);
void				ft_lstadd_end(t_list **alst, t_list *new_link);
void				ft_lstdelone(t_list **alst,
									void (*del)(void *, size_t size));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t size));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

int					ft_memcmp(void *s1, void *s2, size_t size);
void				*ft_memchr(const void *s, int c, size_t size);

int					ft_strlen(char const *s);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t size);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack,
							const char *needle, size_t size);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t size);

#endif
