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

char    *ft_strtrim(char const *s)
{
	char *return_str;
	int length;

	length = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	while (*s && s[++length]);
	while (s[--length] == ' ' || s[length] == '\t' || s[length] == '\n');
	return_str = ft_strncpy(ft_strnew(length), s, (length));
	return (return_str);
}
//