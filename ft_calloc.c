/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:53:23 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 14:53:25 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <errno.h>
#include <string.h>

void	*ft_calloc(size_t count, size_t size)
{
	int		*ptr;
	size_t	i;

	i = 0;
	if (count == SIZE_MAX || size == SIZE_MAX)
	{
	errno = ENOMEM;
		return (NULL);
	}
	ptr = (int *)malloc(count * size);
	if (!ptr)
	{
	errno = ENOMEM;
		return (0);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
