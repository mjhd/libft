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

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	int i;
	int readlen;

	readlen = ((int)n - ft_strlen(dst));
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (*src != '\0' && readlen--)
		dst[i++] = *src++;
	dst[i] = '\0';
	return ((int)n >= (ft_strlen(dst) - 1)) ? (size_t)(ft_strlen(dst) + ft_strlen(src) - 2) : (size_t)(ft_strlen(src) - 1 + (int)n);
}
