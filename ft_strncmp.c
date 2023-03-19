/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:50:22 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/18 16:23:45 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

/*
     The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data,
     characters that appear after a ‘\0’ character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than,
     equal to, or less than the string s2.  The comparison is done using unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/


int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  size_t i;
  i = 0;

  while ((s1[i] && s2[i]) && i < n)
  {
  if (s1[i] > s2[i])
  {
    return 1;
  }
  else if (s1[i] < s2[i])
  {
    return (-1);
  }
    i++;
  }
  return (0);
}

// int main()
// {
//   // Take any two strings
//   char str1[10] = "akzah";
//   char str2[10] = "ak\nash";

//   // Compare strings using strncmp()
//   int result = ft_strncmp(str1, str2, 4);

//   if (result == 0)
//   {
//     // num is the 3rd parameter of strncmp() function
//     printf("str1 is equal to str2 upto num characters\n");
//   }
//   else if (result > 0)
//     printf("str1 is greater than str2\n");
//   else
//     printf("str2 is greater than str1\n");

//   printf("Value returned by strncmp() is: %d", result);

//   return 0;
// }