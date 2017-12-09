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
    void *returner;
    char *to;
    char *from;
    size_t i = 0;

    if (n <= 0)
        return(0);
    returner = (void *)dest;
    to = (char *)dest;
    from = (char *)src;
    while (i <= n)
    {
        to[i] = from[i];
        if (from[i] == c)
            return(returner);
        i++;
    }
    return(0);
}
//