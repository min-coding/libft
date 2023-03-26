/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:06:31 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 15:36:49 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	const char	*osrc;
	size_t		nleft;

	osrc = src;
	nleft = dsize;
	if (nleft != 0)
	{
	nleft--;
		while (nleft != 0)
		{
			if ((*dst++ = *src++) == '\0')
				break ;
		nleft--;
		}
	}
	if (nleft == 0)
	{
		if (dsize != 0)
			*dst = '\0';
		while (*src++);
	}
	return (src - osrc - 1);
}
