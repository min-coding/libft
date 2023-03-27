/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:22:32 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 13:46:09 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!n || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
