/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:02:01 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 16:20:50 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
  size_t i = 0;

  while (i < n)
  {
    if ((const char *)s1 + i != (const char *)s2 + i)
    {
      return ((const char *)s1 + i - (const char *)s2 + i);
    }
    i++;
  }
  return 0;
}

// int main()
// {
//   // Take any two strings
//   char str1[10] = "akzah";
//   char str2[10] = "akyash";

//   // Compare strings using ft_memcmp()
//   int result = ft_memcmp(str1, str2, 4);

//   printf("Value returned by ft_memcmp() is: %d\n", result);

//   return 0;
// }
/*
RETURN VALUES
     The memcmp() function returns zero if the two strings are identical,
     otherwise returns the difference between the first two differing bytes
     (treated as unsigned char values, so that ‘\200’ is greater than ‘\0’,
     for example).

     Zero-length strings are always identical.  This behavior
     is not required by C and portable code should only depend on the sign of
     the returned value.
*/