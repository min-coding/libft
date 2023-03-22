/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:19:45 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/22 18:49:00 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char **ft_split(char const *s, char c)
{
  int i = 0;
  int match = 0;
  int numStr = 0;
  char **arr = NULL;
  char *start = NULL;
  char *end = NULL;

  // Go through the string to count the number of words
  while (s[i] != '\0')
  {
    if (s[i] == c)
    {
      match++;
    }
    i++;
  }

  // Allocate memory for the array of strings by maximum possible number of words
  arr = malloc(sizeof(char *) * (match + 1));

  if (!arr)
  {
    return NULL;
  }

  i = 0;
  match = 0;

  // Go through the string again to split it into words
  while (s[i] != '\0')
  {
    // If a delimiter is found, set the end pointer
    if (s[i] == c)
    {
      end = (char *)(s + i);
    }
    // If a word is found
    else if (end && (s[i + 1] == c || s[i + 1] == '\0'))
    {
      // Set the start pointer, which is 1 step after the delimiter which we had set to `end`
      start = end + 1;

      // Allocate memory for the word and copy it
      // i is the end of the word, end is the last index before the word start and s is the start of the string.So (end -s ) is esentially deleting spaces that delimiters take. Finally,  i - delimiter space = word length
     
      arr[numStr] = malloc(sizeof(char) * (i - (end - s) + 1));
      if (!arr[numStr])
      {
        return NULL;
      }
      ft_strlcpy(arr[numStr], start, i - (end - s) + 1);

      arr[numStr][i - (end - s)] = '\0';
      numStr++;

      // Reset the start and end pointers
      start = NULL;
      end = NULL;
    }

    i++;
  }

  // Set the last element of the array to NULL to mark the end
  arr[numStr] = NULL;

  return arr;
}

int main()
{
  char **str;
  str = ft_split("  tripouille  42  ", ' ');

  for (int i = 0; str[i] != NULL; i++)
  {
    printf("%s\n", str[i]);
  }

  // Free the memory allocated for the array and its elements
  for (int i = 0; str[i] != NULL; i++)
  {
    free(str[i]);
  }
  free(str);

  return 0;
}