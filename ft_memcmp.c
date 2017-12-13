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

int        ft_memcmp(const void *s1, const void *s2, size_t n)
{
    while (n--)
    {
        if (*(unsigned char *)s1++ - *(unsigned char *)s2++)
            return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
    }
    return (0);
}
//