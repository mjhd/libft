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

int	ft_strcmp(const char *s1, const char *s2)
{
	int diff;

	diff = 0;
	while (s1[diff] && s1[diff] == s2[diff])
		diff++;
	diff = (int)s1[diff] - (int)s2[diff];
	return (diff);
}
