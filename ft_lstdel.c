#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	void *link;

	while((*alst))
	{
		link = (*alst);
		(*del)((*(*alst)).content, (*(*alst)).content_size);
		(*alst) = (*(*alst)).next;
		ft_memdel(&link);
	}
}