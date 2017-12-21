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

int        ft_atoi(const char *s)
{
	int value;
	int multiplier;

	value = 0;
	multiplier = 1;
	while(*s && (*s == ' ' || *s == '\n' || *s == '\f' || *s == '\t' || *s == '\v' || *s == '\r'))
		s++;
	if (*s == '-' || *s == '+')
		multiplier *= ((*s++) == '-') ? -1 : 1;
	while (*s && ft_isdigit(*s))
	{
		value *= 10;
		value += (*s++ - '0');
	}
	return(value * multiplier);
}
//