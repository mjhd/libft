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

static int	ft_strlen_eq(char const *s1, char const *s2)
{
	int 	a;
	int 	b;

	a = 0;
	b = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;
	return (a == b) ? 1 : 0;
}

int			ft_strequ(char const *s1, char const *s2)
{
	int		i;

	i = 0;
	if (!ft_strlen_eq(s1, s2))
		return (0);
	while (s1[i++] != '\0')
	{
		if (s1[i - 1] != s2[i - 1])
			return (0);
	}
	return (1);
}
