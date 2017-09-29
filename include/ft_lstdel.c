#include "../libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	void *link;
	void *content;
	size_t size;

	while((*alst))
	{
		link = (*alst);
		(*del)((*(*alst)).content, (*(*alst)).content_size);
		(*alst) = (*(*alst)).next;
		ft_memdel(&link);
	}
}