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

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	if (ft_strlen(src) < (int)n || (int)n == 0)
		return (dst);
	while (dst[i] != '\0')
		i++;
	while (*src != '\0' && ((int)n < 0 || (int)n--))
		dst[i++] = *src++;
	dst[i] = '\0';
	return (dst);
}
