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

size_t ft_strlcpy(char *dst, const char *src, size_t dsize)
{
  const char *osrc = src;
  size_t nleft = dsize;

  /* Copy as many bytes as will fit. */
  if (nleft != 0)
  {
    // Decrement the number of bytes left to copy. First one already decrement for NULL terminator
    nleft--;
    while (nleft != 0)
    {
      // Copy the current character from the source to the destination,
      // and check if the copied is the null terminator character
      if ((*dst++ = *src++) == '\0')
      {
        // If it is, break out of the loop
        break;
      }
      nleft--;
    }
  }

  if (nleft == 0)
  {
    //if  the given length are more than the src to copy. Null terminate dst.
    if (dsize != 0)
    {
      *dst = '\0';
    }

    //keep  moving src to the last letter
    while (*src++);

  }
  // last letter of src - first letter of src - 1 = src length
  return (src - osrc - 1);
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