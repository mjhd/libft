#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list *oldlist;
    t_list *newlist;

    oldlist = &(*lst);
    newlist = ft_lstnew((((f)(lst))->content), ((f)(lst))->content_size);
    while((int)((*oldlist).next))
    {
        (*oldlist) = (*(*oldlist).next);
        ft_lstadd_end(&newlist, ft_lstnew(((f)(oldlist))->content, ((f)(oldlist))->content_size));
    }
    return newlist;
}
