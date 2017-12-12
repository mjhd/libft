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

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t            i;
    unsigned char    cpy_c;
    unsigned char    *cpy_src;

    i = 0;
    cpy_c = (unsigned char)c;
    cpy_src = (unsigned char *)s;
    while (n--)
    {
        if (cpy_src[i] == cpy_c)
            return (&cpy_src[i]);
        i++;
    }
    return (0);
}
//