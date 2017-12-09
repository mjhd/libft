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
    char *to;
    char *from;
    size_t i = 0;

    to = (char *)dest;
    from = (char *)src;
    while (i < n)
    {
        *to++ = *from++;
        if (*(from - 1) == c)
            return((void *)(to - 1));
        i++;
    }
    return(0);
}
//