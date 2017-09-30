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

int	ft_atoi(char *n)
{
	int i;
	int length;
	int value;

	length = 0;
	value = 0;
	i = 0;
	while (n[length])
		length++;
	while (--length)
	{
		if (n[length - 1] == '-')
			value *= -1;
		else
		{
			i = (i == 0) ? 1 : (i * 10);
			value += (i * (n[length - 1] - '0'));
		}
	}
	return (value);
}
