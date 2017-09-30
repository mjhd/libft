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

char	*ft_strtrim(char const *s)
{
	int		i;
	char	*output;

	output = (char *)s;
	i = 0;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && *s++)
		output++;
	while (*s && ++i)
		s++;
	s--;
	while ((*s == ' ' || *s == '\n' || *s == '\t') && i--)
		s--;
	s = output;
	output = (char *)ft_memalloc(sizeof(char) * (i + 1));
	while (*s && i--)
	{
		(*output) = *s++;
		output++;
	}
	*output = '\0';
	return (output);
}
