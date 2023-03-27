/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 16:24:28 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 16:34:22 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long	nb;
	int			neg;
	int			i;

	i = 0;
	nb = 0;
	neg = 1;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			neg = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (nb >= 9223372036854775807 / 10 && str[i] - '0' > 7)
		{
			if (neg == 1)
				return (-1);
			return (0);
		}
		nb = nb * 10 + (str[i++] - '0');
	}
	return (nb * neg);
}
