/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntraithi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:38:45 by ntraithi          #+#    #+#             */
/*   Updated: 2023/03/19 14:00:13 by ntraithi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int ft_strlen(const char *str)
{
  // int i;

  // i = 0;
  // while (str[i] != '\0')
  // {
  //   i++;
  // }
  // return (i);
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return (i);
}

// int main(){
//   printf("The length is %d\n", ft_strlen("1234"));
//   printf("The length is %d\n", ft_strlen("FOUR"));
// }