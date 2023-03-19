/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 20:27:14 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 16:20:27 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

const void *ft_memchr(const void *s, int c, size_t n)
{
  size_t i;

  i= 0;

  while (i < n)
  {
    if ((char)c == *((const char *)s + i))
    {
      return (void *)(s + i);
    }
    i++;
  }
  return 0;
}

// int main()
// {
//   char str[] = "Hello, world!";
//   const char *ptr = ft_memchr(str, 'w',8);
//   printf("The first occurrence of 'o' in '%s' is at position %ld.\n", str, ptr - str);

//   char str2[] = "Hello, world!";
//   const char *ptr2 = memchr(str, 'w', 8);
//   printf("The first occurrence of 'o' in '%s' is at position %ld.\n", str2, ptr2 - str2);

//   return 0;
// }

/*
DESCRIPTION
The memchr() function locates the first occurrence of c(converted to an unsigned char) in string s.

search memory not string. Therefore we move the memory block by block?
so we kinda need to specify the size so we know how many memory block we're moving

    RETURN VALUES
    The memchr() function returns a pointer to the byte located,
    or NULL if no such byte exists within n bytes.
*/