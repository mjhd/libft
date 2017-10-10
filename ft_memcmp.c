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

int	ft_memcmp(void *s1, void *s2, size_t size)
{
	unsigned char	*str_pnt_a;
	unsigned char	*str_pnt_b;
	int				diff;
	int				i;

	str_pnt_a = s1;
	str_pnt_b = s2;
	diff = 0;
	i = 0;
	while (i++ < (int)size)
		diff += (int)(*str_pnt_a++ - *str_pnt_b++);
	return (diff);
}
