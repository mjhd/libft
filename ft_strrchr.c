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

char    *strchr(const char *s, int c)
{
	int   rev;
	char  *pnt;

	pnt = (char *)s;
	rev = 0;
	while (*pnt)
	{
		if ((*pnt++) == c)
			rev = 1;
		rev += (rev > 0) ? 1 : 0;
	}
	if (rev > 0)
		pnt -= (rev - 1);
	return(pnt);
}
