/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:02:21 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 23:02:23 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) +1);
	if (!str)
		return (NULL);
	while (i < ft_strlen(s1) + ft_strlen(s2) +1)
	{
		if (i < ft_strlen(s1))
			str[i] = s1[i];
		else
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	return (str);
}
