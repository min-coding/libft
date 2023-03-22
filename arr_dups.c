/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arr_dups.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:17:49 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/22 02:03:53 by ntraithi         ###   ########.fr       */
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

char *arr_dup(char *s)
{ 
  //array to keep track of freq
  int freq[256] = {0};

  //array for duplicate values
  char *arr;
  int dups;
  dups = 0;

  int i;
  i = 0;
  // go through string and record freq
  while (s[i] != '\0')
  {
    freq[s[i]]++;
    i++;
  }
  //now we have all freq of all char, count the ones with more than 1 freq, and malloc the dups array
  for (size_t j = 0; j < 256; j++)
  {
    if (freq[j] > 1)
    {
      dups++;
    }
  }
  arr = malloc(sizeof(*arr) * (dups+1));

  //insert the dup value
  int j;
  j = 0;
  for (size_t i = 0; i < 256; i++)
  {
    if(freq[i] > 1)
    {
      arr[j] = (char)i;
      j++;
    }
  }
  arr[j] = '\0';
  return arr;
}

int main()
{
  char str[] = "Hello, world!";
  char *ptr = arr_dup(str);
  printf("%s\n", ptr);
  free(ptr); // don't forget to free the memory
  return 0;
}
