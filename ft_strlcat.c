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

size_t  ft_strlcat(char *s1, const char *s2, size_t length)
{
    size_t src_length;
    size_t dest_length;

    src_length = ft_strlen(s2);
    dest_length = ft_strlen(s1);
    if (length > dest_length)
        ft_strncat(s1, s2, (length - dest_length - 1));
    return(src_length + ((length > dest_length) ? dest_length : length));
}
//