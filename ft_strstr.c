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

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*pnt;
	int			i;

	pnt = 0;
	while (*haystack)
	{
		i = 0;
		if (*haystack == needle[i] && pnt == 0)
			pnt = haystack;
		while (*haystack == needle[i] && needle[i])
		{
			if (*++haystack != needle[++i] && needle[i] != '\0')
			{
				pnt = 0;
				haystack--;
			}
			if (needle[i] == '\0' && pnt != 0)
				return (char *)pnt;
		}
		haystack++;
	}
	return (0);
}
