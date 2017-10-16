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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*cpy_dest;
	const char	*cpy_src;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	cpy_src = src;
	cpy_dest = dest;
	while (i < n)
	{
		cpy_dest[i] = cpy_src[i];
		i++;
	}
	return (cpy_dest);
}
