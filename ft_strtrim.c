/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:40:46 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/21 00:40:55 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		j;
	int		s1len;

	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[j] != '\0' && ft_strchr(set, s1[j]) != NULL)
		j++;
	s1len = ft_strlen(s1);
	while (s1len > j && ft_strchr(set, s1[s1len - 1]) != NULL)
		s1len--;
	str = malloc((s1len - j + 1) * sizeof(*s1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + j, s1len - j);
	str[s1len - j] = '\0';
	return (str);
}
