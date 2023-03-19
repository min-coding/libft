/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 15:53:43 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 15:57:52 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/**
 * The strlcpy() and strlcat() functions return the total length of the string they tried to create. For strlcat() that means the initial length of dst plus the length of src. While this may seem somewhat confusing, it was done to make truncation detection simple.
 
 * The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
*/
size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{

  //how much is already used
  //dstsize, is the buffer size
  size_t dstlen = ft_strlen((const char *)dst);
  
  size_t srclen = ft_strlen(src);
  size_t i;

  //check if the dst buffer is full
  if (dstlen >= dstsize)
    return (dstsize + srclen);

  i = 0;

  //how much space we can add to dest by max-used-null, then we can add src to the remaining space
  //src[i] to check if we reach the end of src, if we do, it's gonna be false and wil terminate the loop
  while (i < dstsize - dstlen - 1 && src[i])
  {
    dst[dstlen + i] = src[i];
    i++;
  }

  dst[dstlen + i] = '\0';

  return (dstlen + srclen);
}

// int main()
// {
//   char src[] = "Source";
//   char dest[8] = "Dest";

//   size_t result = strlcat(dest, src, sizeof(dest));
//   printf("%s\n", dest);
//   printf("%lu\n", strlen(dest));
//   printf("Result: %zu\n", result);
//   return 0;
// }

// int main()
// {
//   char src[] = "So";
//   char dest[20] = "Dest";

//   size_t result = ft_strlcat(dest, src, 6);
//   printf("%d\n", ft_strlen(dest));
//   printf("%lu\n", sizeof(dest));
//   printf("Result: %zu\n", result);
//   return 0;
// }