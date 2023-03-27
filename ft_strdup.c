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

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		lenstr;
	char	*ptr;

	lenstr = ft_strlen(s1);
	ptr = ft_calloc(lenstr + 1, sizeof(*ptr));
	if (!ptr)
		return (0);
	ft_memcpy(ptr, s1, lenstr);
	ptr[lenstr] = '\0';
	return (ptr);
}
