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

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newlist;

	newlist = (t_list *)malloc(sizeof(t_list));
	if (!newlist)
		return(0);
	if (!content)
	{
		(*newlist).content = NULL;
		(*newlist).content_size = 0;
	}
	else
	{
		(*newlist).content = malloc(content_size);
		if (!(*newlist).content)
		{
			free((*newlist).content);
			return(0);
		}
		ft_memcpy((*newlist).content, (void *)content, content_size);
		(*newlist).content_size = content_size;
	}
	(*newlist).next = 0;
	return (newlist);
}
