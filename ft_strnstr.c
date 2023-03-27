/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:43:19 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/18 18:11:34 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*haystack_tmp;
	const char	*needle_tmp;
	size_t		matched_len;

	if (!*needle)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (*haystack && len > 0)
	{
		haystack_tmp = haystack;
		needle_tmp = needle;
		matched_len = 0;
		while (haystack_tmp[matched_len] == needle_tmp[matched_len]
			&& (matched_len < len))
		{
			matched_len++;
			if (!needle_tmp[matched_len])
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
