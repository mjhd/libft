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

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	const char	*pnt;
	int			i;

	pnt = NULL;
	while (*haystack && (int)size - 1)
	{
		i = 0;
		if (*haystack == needle[i] && pnt == NULL)
			pnt = (ft_strlen(needle) > (int)size) ? NULL : haystack;
		size--;
		while (pnt != NULL && *haystack == needle[i] && needle[i])
		{
			if (*++haystack != needle[++i] && needle[i] != '\0')
			{
				pnt = NULL;
				haystack--;
			}
			if (needle[i] == '\0' && pnt != NULL)
				return (char *)pnt;
		}
		haystack++;
	}
	return (NULL);
}
