/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:53:43 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 15:57:52 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	srclen = ft_strlen(src);
	if ((!dst || dstsize == 0) && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	if (dstlen < dstsize)
		dst[dstlen + i] = '\0';
	if (dstsize < dstlen)
		return (srclen + dstsize);
	return (srclen + dstlen);
}
