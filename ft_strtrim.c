/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:40:46 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/21 00:40:55 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

char *ft_strtrim(char const *s1, char const *set)
{
  char *str;
  int j = 0;

  if (!s1 || !set)
  {
    return NULL;
  }

  // skip the match characters in the front. Keep skipping until we find the unmatch
  while (s1[j] != '\0' && ft_strchr(set, s1[j]) != NULL)
  {
    j++;
  }
  int s1len = ft_strlen(s1);

  // skip the match characters from the back. Running it back if the string search is true, until we find the unmatch 
  while (s1len > j && ft_strchr(set, s1[s1len - 1]) != NULL)
  {
    s1len--;
  }
  // total length - letters matched = trimmed 
  str = malloc((s1len - j + 1) * sizeof(*s1));
  if (!str)
  {
    return NULL;
  }

  //src start from s1,skipped all the matches.size exclude all the match
  ft_memcpy(str, s1 + j, s1len - j);
  str[s1len - j] = '\0';

  return str;
}