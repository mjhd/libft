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

void	*ft_memcpy(void *dst, void *src, size_t size)
{
	unsigned char	*rd_pnt;
	unsigned char	*wrt_pnt;
	int				i;

	rd_pnt = src;
	wrt_pnt = dst;
	i = 0;
	while (i++ < (int)size)
		wrt_pnt[i - 1] = (unsigned int)rd_pnt[i - 1];
	return (dst);
}
