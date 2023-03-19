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

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
  //copy src to dest and add \0 to the end
  size_t i;
  i = 0;

  //check 1.if we exceed the buffer size 2.how many char we want to copy (dstsize)
  while (i < sizeof(dst) - 1 && i < dstsize - 1)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';

  // return length of source
  return ft_strlen(src);
}

// int main()
// {
//   char src[] = "coucou";
//   char dest[10] = "AAAAAAAAAA";

//   //wanna copy + replace 5 char to dest, not
//   //that we're changing buffer size to 5
//   size_t result = ft_strlcpy(dest, src, 5);

//   //after copied, the dest = [c,o,u,c,\0,x,x,x,x,x]
//   //therefore the strlen = 4, sizeof = 10 
//   printf("%s\n", dest);
//   printf("%lu\n", strlen(dest));
//   printf("%lu\n", sizeof(dest));
//   printf("Result: %zu\n", result);
//   return 0;
// }
