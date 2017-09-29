#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new_link)
{
	 ((*new_link).next) = &(*(*alst));
	 (*alst) = &(*new_link);
}
