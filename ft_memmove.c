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

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((const char *)src < (char *)dst && (const char *)src + len > (char *)dst)
	{
	i = len;
		while (i > 0)
		{
	i--;
	((char *)dst)[i] = ((const char *)src)[i];
		}
	}
	else if ((char *)dst < (const char *)src && (char *)dst + len > (const char *)src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}

// int main()
// {
//   char str1[50] = "I am Groot";
//   printf("Function:\tft_memmove with overlap\n");
//   printf("Orignal :\t%s\n", str1);
//   printf("Source:\t\t%s\n", str1 + 5);
//   printf("Destination:\t%s\n", str1 + 11);
//   ft_memmove(str1 + 2, str1, 10);
//   printf("Result:\t\t%s\n", str1);
//   return 0;
// }

// int main()
// {
//   char str1[50] = "I am Groot";
//   char str2[50] = "I am Groot";
//   printf("Function:\tmemmove with overlap\n");
//   printf("Orignal :\t%s\n", str1);
//   printf("Source:\t\t%s\n", str1 + 5);
//   printf("Destination:\t%s\n", str1 + 11);
//   memmove(str1 + 2, str1, 10);
//   printf("Result:\t\t%s\n", str1);
//   printf("Length:\t\t%d characters\n\n", strlen(str1));
// }
