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

char        *ft_itoa(int n)
{
	struct inty *pnt;
	struct inty *tmp;
	char *a;
	int buf;
	int nodes;

	pnt = (struct inty *)malloc(sizeof(struct inty));
	nodes = 0;
	while(n && ++nodes)
	{
		buf = n % 10;
		n -= buf;
		n /= 10;
		(*pnt).value = (char)(buf + '0');
		if(n)
		{
			tmp = (struct inty *)malloc(sizeof(struct inty));
			(*tmp).last = pnt;
			(*pnt).last = (nodes == 1) ? 0 : (*pnt).last;
			pnt = tmp;
		}
	}
	a = malloc(sizeof(char) * (nodes + 1));
	a[nodes] = '\0';
	while(pnt)
	{
		*a++ = (*pnt).value;
		pnt = (*pnt).last;
	}
	return(a - nodes);
}
