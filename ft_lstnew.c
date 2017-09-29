#include "../libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{
    t_list *pnt;

    pnt = (t_list *)ft_memalloc(sizeof(t_list));
    ft_memcpy(&(*pnt).content, &content, sizeof(void *));
    ft_memcpy(&(*pnt).content_size, &content_size, sizeof(size_t));
    (*pnt).next = 0;
    return pnt;
}
