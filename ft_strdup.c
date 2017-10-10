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

char	*ft_strdup(const char *s)
{
	char *new_str;
	char *new_str_pnt;

	new_str = (char *)ft_memalloc(sizeof(char) * (ft_strlen(s) + 1));
	new_str_pnt = &new_str[0];
	if (s[0])
		*new_str = *s;
	while (*s != '\0' && new_str++ != s++)
		*new_str = *s;
	return (new_str_pnt);
}
