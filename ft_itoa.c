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

int itoa_assembler(struct inty *pnt, int n, struct inty **mod)
{
    struct inty *tmp;
    int nodes;
    int buf;

    nodes = 0;
    while((n || (!n && !nodes)) && ++nodes)
    {
        buf = n % 10;
        n -= buf;
        n /= 10;
        (*pnt).value = (char)(buf + '0');
        if(n)
        {
            tmp = (struct inty *)malloc(sizeof(struct inty));
            (*tmp).last = pnt;
        }
        (*pnt).last = (nodes == 1) ? 0 : (*pnt).last;
        pnt = tmp;
    }
    (*mod) = (nodes == 1) ? (*mod) : tmp;
    return(nodes);
}

char        *ft_itoa(int n)
{
    struct inty *pnt;
    struct inty **mod;
    char *a;
    int nodes;
    int offset;

    pnt = (struct inty *)malloc(sizeof(struct inty));
    mod = &pnt;
    nodes = itoa_assembler(pnt, n, mod);
    a = malloc(sizeof(char) * (nodes + 1));
    a[nodes] = '\0';
    offset = nodes;
    while(nodes--)
    {
        *a++ = (*pnt).value;
        pnt = (*pnt).last;
    }
    return(a - offset);
}
//