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
	t_list *oldlist;
	t_list *newlist;

	oldlist = &(*lst);
	newlist = ft_lstnew((((f)(lst))->content), ((f)(lst))->content_size);
	while ((int)((*oldlist).next))
	{
		(*oldlist) = (*(*oldlist).next);
		ft_lstadd_end(&newlist, ft_lstnew(((f)(oldlist))->content, ((f)(oldlist))->content_size));
	}
	return (newlist);
}
