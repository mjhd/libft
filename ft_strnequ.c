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

int            ft_strequ(char const *s1, char const *s2, size_t size)
{
	int response;

	response = 0;
	while((s1 && s2) && size-- && !response && (*s1 || *s2))
		response = (*s1) ? (*s1++ - *s2++) : (*s2++ - *s1++);
	return((!response) ? 1 : 0);
}
//