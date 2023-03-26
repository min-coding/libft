/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:15:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 18:32:34 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	char	*buf;
	size_t	i;

	buf = (char *)s;
	i = 0;
	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}
