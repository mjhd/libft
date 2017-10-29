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

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;
	t_list  *return_pnt;

	if (!lst || !f)
		return(0);
	newlist = ft_lstnew((*(f(lst))).content, (*(f(lst))).content_size);
	return_pnt = newlist;
	if (!(*lst).next)
		return (return_pnt);
	while ((*lst).next)
	{
		lst = (*lst).next;
		(*newlist).next = f(lst);
		newlist = (*newlist).next;
	}
	return (return_pnt);
}
//