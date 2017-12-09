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

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t            i;
    const char        *cpy_src;
    unsigned char    *cpy_dest;
    unsigned char    cpy_c;

    i = 0;
    cpy_c = (unsigned char)c;
    cpy_src = src;
    cpy_dest = dest;
    while (i < n)
    {
        *(unsigned char *)dest++ = cpy_src[i];
        if (cpy_dest[i] == cpy_c)
            return (cpy_dest);
        i++;
    }
    return (NULL);
}
//