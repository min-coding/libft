/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:17:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 16:18:01 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/*
The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is ‘\0’, the functions
     locate the terminating ‘\0’.

     The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.
*/

const char *ft_strrchr(const char *s, int c)
{
  int i;

  i = ft_strlen(s) - 1;

  while (i >= 0)
  {
    if ((char)c == s[i])
    {
      return s + i;
    }
    i--;
  }
  if(!c)
  {
    return s;
  }

  return 0;
}

// int main()
// {

//   // creating some string
//   char str[] = "";
//   const char *ptr;

//   // The character to be searched
//   char chr = 'a';

//   // pointer returned by strrchr()
//   ptr = ft_strrchr(str, chr);

//   // ptr-string gives the index location
//   if (ptr)
//   {
//     printf("Last occurence of %c in %s is at %ld\n", chr,
//            str, ptr - str);
//   }
//   // If the character we're searching is not present in
//   // the array
//   else
//   {
//     printf("%c is not present in %s ", chr, str);
//   }
//   return 0;
// }