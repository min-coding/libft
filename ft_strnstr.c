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
#include <stdio.h>
#include <string.h>

//string search in string

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
  // needle index
  int k;

  // haystack index
  size_t j;

  j = 0;
  k = 0;

  if (needle[k] == '\0')
  {
    return (char *)haystack;
  }

  while (j < len)
  {
    /* code */
    while (needle[k] != '\0')
    {
      /* code */
      if (needle[k] == haystack[j])
      {
        k++;
      }
      else
      {
        k = 0;
      }
      break;
    }

    if (needle[k] == '\0')
    {
      return (char *)needle;
    }
    j++;
  }
  return 0;
}

// int main()
// {
//   char *haystack = "Eeny meeny miny moe!";
//   char *needle = "meeny";
//   char *location;

//   location = ft_strnstr(haystack, needle, 15);
//   if (location == NULL)
//     printf("Can't find '%s' within %d characters of '%s'\n",
//            needle,
//            15,
//            haystack);
//   else
//     printf("Found '%s' within %d characters of '%s'\n",
//            needle,
//            15,
//            haystack);

//   return (0);
// }

