/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:23:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/20 16:23:51 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <errno.h>
#include <string.h>

char	*ft_strdup(const char *s1)
{
	int		strlen1;
	char	*ptr;

	strlen1 = ft_strlen(s1);
	ptr = ft_calloc(strlen1 + 1, sizeof(*ptr));
	if (!ptr)
	{
	errno = ENOMEM;
		return (0);
	}
	ft_memcpy(ptr, s1, strlen1);
	ptr[strlen1] = '\0';
	return (ptr);
}
