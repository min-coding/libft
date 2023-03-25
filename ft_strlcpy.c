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

  size_t srclen; 
  srclen = ft_strlen(src);

  if(dstsize <= 0)
    return srclen;

  //1.if we exceed the buffer size 2.how many char we want to copy (dstsize)
  while (i < sizeof(dst) - 1 && i < dstsize - 1)
  {
    dst[i] = src[i];
    i++;
  }
  dst[i] = '\0';

  // return length of source
  return srclen;
}



// int main()
// {
//   // char src[] = "coucou";
// 	// char dest[10]; memset(dest, 'A', 10);
  
// 	// ft_strlcpy(dest, src, 0); 
//   // == strlen(src) && dest[0] == 'A');
// 	// strlcpy(dest, src, 1); 
//   // ft_strlcpy(dest,src,1);
//   // == strlen(src) && dest[0] == 0 && dest[1] == 'A');
// 	// strlcpy(dest, src, 2); 
//   // == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A');
//   // == strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A');
  
//   // ft_strlcpy(dest, src, -1); 
  
//   //== strlen(src) && !strcmp(src, dest) && dest[strlen(src) + 1] == 'A')

//   // printf("My Src : %s\n",src);
//   // printf("My Dest : %s\n",dest);
//   // printf("My Dest[0] : %c\n",dest[0]);
//   // printf("My Dest[1] : %c\n",dest[1]);
//   // printf("My Dest Size : %lu\n",sizeof(dest));

//   char src2[] = "coucou";
// 	char dest2[10]; memset(dest2, 'A', 10);
// 	// strlcpy(dest2, src2, 0); 
//   // == strlen(src) && dest[0] == 'A');
// 	// strlcpy(dest2, src2, 1); 
//   // == strlen(src) && dest[0] == 0 && dest[1] == 'A');
// 	// strlcpy(dest2, src2, 2); 
//   // == strlen(src) && dest[0] == 'c' && dest[1] == 0  && dest[2] == 'A');
//   strlcpy(dest2, src2, -1);
//   printf("Src : %s\n",src2);
//   printf("Dest : %s\n",dest2);
//   printf("Dest[0] : %c\n",dest2[0]);
//   printf("Dest[1] : %c\n",dest2[1]);
//   printf("Dest Size : %lu\n",sizeof(dest2));

//   return 0;
// }