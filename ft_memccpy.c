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

//#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    void *returner;
    size_t i = 0;

    returner = (unsigned char*)dest;
    while (i < n)
    {
        *(unsigned char*)dest++ = *(unsigned char*)src++;
        if ((char)*((unsigned char*)dest - 1) == c)
            return(returner);
        i++;
    }
    return(0);
}
//