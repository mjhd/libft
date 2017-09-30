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

char	*ft_returnnum(int val, int length)
{
	int		len;
	char	*output;
	int		value;
	int		num;
	int		i;

	len = length + ((val < 0) ? 1 : 0);
	output = (char*)ft_memalloc(sizeof(char) * (len + 1));
	output[len] = '\0';
	i = len;
	value = (val < 0) ? (val * -1) : val;
	while (i-- > ((val < 0) ? 1 : 0))
	{
		num = value % 10;
		output[i] = num + '0';
		value -= num;
		value /= 10;
	}
	output[i + 1] = (val < 0) ? '-' : output[i + 1];
	return (output);
}

char	*ft_itoa(int n)
{
	int value;
	int num;
	int length;

	if (n == 0)
		return (0);
	value = (n < 0) ? (n * -1) : n;
	length = 0;
	while (value)
	{
		num = value % 10;
		value -= num;
		value /= 10;
		length++;
	}
	return (ft_returnnum(n, length));
}
