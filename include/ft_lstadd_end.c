#include "../libft.h"

void	ft_lstadd_end(t_list **alst, t_list *new_link)
{
	while((int)((*(*alst)).next))
		alst = &((*(*alst)).next);
	((*(*alst)).next) = &(*new_link);
}
