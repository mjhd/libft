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

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	int i;

	if (*little == '\0')
		return((char *)big);
	while (big && length-- && *big)
	{
		if (*big++ == *little)
		{
			big--;
			i = 0;
			while (big[i] == little[i] || !little[i])
			{
				if (!little[i++])
					return((char *)big);
			}
			big++;
		}
	}
	return(0);
}
//