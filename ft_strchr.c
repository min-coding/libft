/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:17:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/18 16:54:38 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

//char search in string

/*
The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is ‘\0’, the functions
     locate the terminating ‘\0’.

     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
*/

const char *ft_strchr(const char *s, int c)
{ 
  int i;

  i = 0;

  while (s[i] != '\0')
  {
    if((char)c == s[i])
    {
      return s + i;
    }
    i++;
  }
  
  if (!c) {
    return s + i;
  }

  return 0;
}

// int main()
// {
//   char str[] = "Hello, world!";
//   const char *ptr = ft_strchr(str, 0);
//   printf("The first occurrence of 'e' in '%s' is at position %ld.\n", str, ptr - str);
//   return 0;
// }