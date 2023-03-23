/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:53:36 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 21:22:49 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  char *str;
  int i;
  int len;
  
  len = ft_strlen(s);

  str = malloc(sizeof(*str) * (len + 1));

  i = 0;
  while (s[i] != '\0')
  {
    str[i] = f(i, s[i]);
    i++;
  }
  str[i] = '\0';
  
  return str;
}

//write 1 function of your own 2 param
char my_func(unsigned int i, char c)
{
  // {0,1,2,3} , {a,b,c,d}
  return i + c;
}
//abcd -> aceg

// int main()
// {
//   char str[10] = "abcd";
//   printf("The result is %s\n", str);
//   char *result = ft_strmapi(str, my_func);
//   printf("The result is %s\n", result);
//   return 0;
// }