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

char    *ft_strncpy(char *dst, const char *src, size_t length)
{
	char *return_pnt;

	return_pnt = dst;
	length += (ft_strlen(src) > length) ? 1 : 0;
	while (src && length--)
		*dst++ = (*(char *)src) ? *(char *)src++ : '\0';
	*dst = '\0';
	return (return_pnt);
}
//