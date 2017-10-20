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

int		ft_atoi(const char *s)
{
	int value;
	int multiplier;
	int length;

	value = 0;
	while(*s && (*s == ' ' || *s == '\n' || *s == '\f' || *s == '\t' || *s == '\v' || *s == '\r'))
		s++;
	s += (*s == '+') ? 1 : 0;
	multiplier = ((*s) == '-' && *s++) ? -1 : 1;
	length = (int)ft_strlen(s);
	while (length && s[--length])
	{
		value += ((s[length] - '0') * multiplier);
		multiplier *= 10;
	}
	return(value);
}