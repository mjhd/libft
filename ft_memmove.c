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

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char cpy[n];
	int i;

	i = 0;
	while(n--)
		cpy[i++] = *(unsigned char *)src++;
	while(i--)
		*(unsigned char *)dest++ = cpy[++n];
	return (dest - (n + 1));
}
//