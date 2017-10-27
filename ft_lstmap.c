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

static void	ft_lstadd_end(t_list **alst, t_list *new_link)
{
	while((*(*alst)).next)
		alst = &(*(*alst)).next;
	(*(*alst)).next = &(*new_link);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;

	newlist = (lst && f) ? ft_lstnew((*lst).content, (*lst).content_size) : 0;
	while (newlist && lst && (*lst).next)
	{
		lst = (*lst).next;
		ft_lstadd_end(&newlist, ft_lstnew((*(f(lst))).content, (*lst).content_size));
	}
	return (newlist);
}
//
