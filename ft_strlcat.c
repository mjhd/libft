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

size_t	ft_strlcat(char *s1, const char *s2, size_t length)
{
	size_t final_length;

	final_length = length;
	while (*s1++)
		final_length++;
	s1--;
	while (*s2 && length--)
		*s1++ = *s2++;
	*s1 = (*s2 && !++length) ? *s2 : '\0';
	return (final_length);
}
//