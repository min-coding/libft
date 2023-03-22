/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:06:31 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 01:08:38 by ntraithi         ###   ########.fr       */
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
