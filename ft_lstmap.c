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

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*newlist;

	newlist = ((*lst).content && (*lst).content_size) ? ft_lstnew((*lst).content, (*lst).content_size) : 0;
	while (newlist && (*lst).next)
	{
		lst = (*lst).next;
		if ((*lst).content && (*lst).content_size)
			ft_lstadd(&newlist, ft_lstnew((*(f(lst))).content, sizeof(char)));
		else newlist = 0;
	}
	return (newlist);
}
//