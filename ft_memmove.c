/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 18:05:45 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/17 15:06:18 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*s;
	char		*d;

	if (!len || dst == src)
		return (dst);
	s = src;
	d = dst;
	if (s < d && s + len > d)
	{
	i = len;
		while (i > 0)
		{
	i--;
	(d)[i] = (s)[i];
		}
	}
	else if (d < s && d + len > s)
		ft_memcpy(dst, src, len);
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
