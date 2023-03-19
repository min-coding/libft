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

#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void * dst, const void * src, size_t n)
{
  size_t i;
  i = 0;
  while (i < n)
  {
    ((char *)dst)[i] = ((const char *)src)[i];
    i++;
  }

  return dst;
}

// int main()
// {

//   char dest[30] = "Imnot Groot";
//   char src[10] = "I am ";

//   ft_memcpy(dest,*(&dest+4),8);
//   for (size_t i = 0; i < sizeof(dest); i++)
//   {
//     printf("%c", dest[i]);
//   }
//   printf("\n");

//   return 0;
// }
