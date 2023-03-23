/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 21:23:48 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/23 21:46:02 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

void ft_striteri(char *s,void (*f)(unsigned int,char*))
{
  int i;
  i = 0;

  while (s[i] != '\0')
  {
    f(i, s + i);
    i++;
  }
}

void my_func2(unsigned int i, char *s)
{
  printf("Letter: %c\n is from index %d",*s,i);
}

// int main()
// {
//   char str[10] = "hello";
//   ft_striteri(str, my_func2);
//   // printf("The result is %s\n", result);
//   return 0;
// }